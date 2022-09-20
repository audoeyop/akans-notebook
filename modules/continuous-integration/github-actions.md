# Github Actions

Github Actions is a platform that automates the build, test, and deployment of software. But it doesn't stop there: it allows you also to run any arbitrary code on your repository when a specific event happens.

To get a full picture of what Github Actions is, it helps to break it down into its several components:

→ Events\
An event is anything that can happen on a Github repository. This goes from pushing a code, creating a branch, opening a pull request, and even commenting on an issue.

→ Workflows\
A workflow is an automated process composed of a series of jobs that gets executed when it's triggered by an event.\
Workflows are defined in YAML files and are stored in a `.github/workflows` directory at the root of the repository. A repository can also have multiple workflows.

→ Jobs\
A job is a series of tasks that gets executed in a workflow upon being triggered by an event. Each step is either a script or a Github action.\
A workflow can have multiple jobs that run in parallel.

→ Runners\
Runners are processes on a server that run the workflow when it's triggered. Each runner is responsible for executing a given job.\
Runners are hosted in the cloud but they can also be self-hosted in custom cloud environments.

→ Actions\
Actions are individual tasks: they are called inside a job. Actions are used to perform complex tasks that you may call multiple times and import into your workflows. Some examples of actions are: publishing a Python package to PyPi, sending a notification email, setting Python to a specific version before running a script, etc.

You can build your own actions or you can reuse some open-source actions from the Github [marketplace](https://github.com/marketplace?type=actions) and add them to your workflow directly when they meet your needs.

Why are Github Actions useful? A (very) common situation
========================================================

The goal of adding Github Actions is basically to automate tasks that you'd like to be repeatedly run at every event.

Let's have an example here: imagine that every time you push a new code, you'd like to execute a series of unit tests on it on an Ubuntu machine that has a specific configuration.

Great. How would you do that?

The long answer 👉 : you push your code to Github, connect to a server you've already created, pull the new version of the code, run the tests, and wait for the final output. Needless to say that it's a tedious and lengthy process.\
Believe me, I did that, a lot, in the past and it's not fun.

The short answer 👉: you create a workflow that gets executed at every push and does the same series of actions: spinning up a machine, pulling the code, running the series of tests, and showing the results in a console.

How do you define such a workflow? in a YAML file
-------------------------------------------------

A workflow is located inside your repository in a special folder named `.github/workflows/` .

Build your first "Hello World" workflow
=======================================

Image by the author --- A simple Github action

Each workflow is defined in a YAML file inside the `workflows` folders.

What about the syntax?

> 👉 To add triggers, you'll have to use the `on` section.

Inside the `on` section, you have to add the events (`push` , `pull_request` , etc.) as subsections. Then, each event is linked to a specific branch (`main` , `dev` , etc.)

```
on:
  push:
    branches:
      - main
```

> 👉 Tasks are then defined inside the `job` section (unders `steps`) which is placed at the same level as the `on` section.

```
jobs:
  print_hello:
    runs-on: ubuntu-latest
    steps:
      - run: echo "Hello World!"
```

Now if you add this simple workflow to your repo

```
on:
  push:
    branches:
      - main

jobs:
  print_hello:
    runs-on: ubuntu-latest
    steps:
      - run: echo "Hello World!"
```

and push your code on the `main` branch, you can check that a workflow has been added under the `Actions` tab.

If you click on the workflow run, you'll see some details such as the commit, the status, the time duration, as well as the jobs that have run.

In our case, there is only one job called `print_hello` .

By clicking on `print_hello`, we can view some summary logs about setting up the job and completing it but most importantly, we can see the actual output of the job under: `Run echo "Hello World!"` .

This example is extremely simple on purpose but it should give a sense of the endless possibilities that Github Actions provide: in fact, any sequence of commands that you'd manually launch on a remote virtual machine can be launched within a workflow: this can be a series a unit tests, a set of Docker build steps, a deployment of an API, etc.

In short, anything that you could imagine can be triggered and automated to run.

You can learn more about the syntax [here](https://docs.github.com/en/actions/using-workflows/workflow-syntax-for-github-actions), but here's what you should not forget:

-   `on` : the event that triggers the workflow
-   `runs-on` : the machine each job should run (e.g. ubuntu-latest)
-   `jobs`: the list of jobs that make the workflow
-   `steps` : the series of tasks that run inside each job
-   `run` : the command that gets executed

There are still a lot of things to cover about Github Actions that this post can't discuss. If you want to learn more, I recommend you go through Github's official [tutorials](https://docs.github.com/en/actions): they're easy to follow and they make you practice.

Some examples of useful workflows and actions
=============================================

Now that you've understood what Github Actions are all about and why they are useful, let's get a bit more practical here and go through some typical use-cases that leverage actions and workflows.

PS: the following example scripts are borrowed from the starter-workflow [repo](https://github.com/actions/starter-workflows). They're not meant to work out of the box on your specific repos, but should get you started very quickly.

1 --- Run unit tests and code quality checks

The most common use case when you think about Github Actions is to automate the execution of unit tests and code quality checks (code linting) when changes are added to the codebase.

→ The following workflow first checks out the repository, set an environment with Python 3.10, installs the project requirements (usually listed in requirements.txt), runs linting with [Flake8](https://flake8.pycqa.org/en/latest/), and unit tests with [pytest](https://docs.pytest.org/en/7.1.x/).

```
# This workflow will install Python dependencies, run tests and lint with a single version of Python
# For more information see: https://help.github.com/actions/language-and-framework-guides/using-python-with-github-actions

name: Python application

on:
  push:
    branches: [ $default-branch ]
  pull_request:
    branches: [ $default-branch ]

permissions:
  contents: read

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3
    - name: Set up Python 3.10
      uses: actions/setup-python@v3
      with:
        python-version: "3.10"
    - name: Install dependencies
      run: |
        python -m pip install --upgrade pip
        pip install flake8 pytest
        if [ -f requirements.txt ]; then pip install -r requirements.txt; fi
    - name: Lint with flake8
      run: |
        # stop the build if there are Python syntax errors or undefined names
        flake8 . --count --select=E9,F63,F7,F82 --show-source --statistics
        # exit-zero treats all errors as warnings. The GitHub editor is 127 chars wide
        flake8 . --count --exit-zero --max-complexity=10 --max-line-length=127 --statistics
    - name: Test with pytest
      run: |
        pytest
```

You could imagine adding type checkers (e.g. mypy) and code formatters (e.g. PEP8, Black) as well.

2 --- Build a Docker image

If you're building a containerized application with Docker, you can use Github Actions to automatically rebuild the image every time a code modification is pushed to the repo.

→ The following workflow first checks out the repo and then launches a Docker command that references the Dockerfile, builds the image, and renames it.

```
name: Docker Image CI

on:
  push:
    branches: [ $default-branch ]
  pull_request:
    branches: [ $default-branch ]

jobs:

  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3
    - name: Build the Docker image
      run: docker build . --file Dockerfile --tag my-image-name:$(date +%s)
```

You can extend this workflow but pushing the Docker image to the Docker [hub](https://hub.docker.com/) and referencing your credentials as Github Secrets.

3 --- Build a Python package and publish it to [PyPi](https://pypi.org/)

If you maintain an open-source project that you publish on PyPi, you can automate the upload every time you publish a new release (yes, this is a trigger too).

→ The following workflow is triggered when a release is published. It first checks out the repo, sets the Python version to 3, installs the dependencies, builds the package, and finally publishes it to PyPi using the `PYPI_API_TOKEN` token that is referenced in Github secrets.

Note that complex tasks such as setting up a Python environment to a specific version or publishing a Python package to PyPi are performed using actions from the marketplace.

```
# This workflow will upload a Python Package using Twine when a release is created
# For more information see: https://help.github.com/en/actions/language-and-framework-guides/using-python-with-github-actions#publishing-to-package-registries

# This workflow uses actions that are not certified by GitHub.
# They are provided by a third-party and are governed by
# separate terms of service, privacy policy, and support
# documentation.

name: Upload Python Package

on:
  release:
    types: [published]

permissions:
  contents: read

jobs:
  deploy:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3
    - name: Set up Python
      uses: actions/setup-python@v3
      with:
        python-version: '3.x'
    - name: Install dependencies
      run: |
        python -m pip install --upgrade pip
        pip install build
    - name: Build package
      run: python -m build
    - name: Publish package
      uses: pypa/gh-action-pypi-publish@27b31702a0e7fc50959f5ad993c78deac1bdfc29
      with:
        user: __token__
        password: ${{ secrets.PYPI_API_TOKEN }}
```

4 --- Run a makefile

You can use Github Actions to trigger the execution of the different stages of a Makefile.

```
name: Makefile CI

on:
  push:
    branches: [ $default-branch ]
  pull_request:
    branches: [ $default-branch ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3

    - name: configure
      run: ./configure

    - name: Install dependencies
      run: make

    - name: Run check
      run: make check

    - name: Run distcheck
      run: make distcheck
```
