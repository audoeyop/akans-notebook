# GitLab CI/CD

CI/CD process overview
------------------------------------------------------------------------------------------------------

To use GitLab CI/CD:

1.  [Ensure you have runners available](https://docs.gitlab.com/ee/ci/quick_start/#ensure-you-have-runners-available) to run your jobs. GitLab SaaS provides runners, so if you're using GitLab.com, you can skip this step.

    If you don't have a runner, [install GitLab Runner](https://docs.gitlab.com/runner/install/) and [register a runner](https://docs.gitlab.com/runner/register/) for your instance, project, or group.

2.  [Create a `.gitlab-ci.yml` file](https://docs.gitlab.com/ee/ci/quick_start/#create-a-gitlab-ciyml-file) at the root of your repository. This file is where you define your CI/CD jobs.

When you commit the file to your repository, the runner runs your jobs. The job results [are displayed in a pipeline](https://docs.gitlab.com/ee/ci/quick_start/#view-the-status-of-your-pipeline-and-jobs).

### Ensure you have runners available[](https://docs.gitlab.com/ee/ci/quick_start/#ensure-you-have-runners-available "Permalink")

In GitLab, runners are agents that run your CI/CD jobs.

You might already have runners available for your project, including [shared runners](https://docs.gitlab.com/ee/ci/runners/runners_scope.html), which are available to all projects in your GitLab instance.

To view available runners:

-   Go to Settings > CI/CD and expand Runners.

As long as you have at least one runner that's active, with a green circle next to it, you have a runner available to process your jobs.

If no runners are listed on the Runners page in the UI, you or an administrator must [install GitLab Runner](https://docs.gitlab.com/runner/install/) and [register](https://docs.gitlab.com/runner/register/) at least one runner.

If you are testing CI/CD, you can install GitLab Runner and register runners on your local machine. When your CI/CD jobs run, they run on your local machine.

### Create a `.gitlab-ci.yml` file[](https://docs.gitlab.com/ee/ci/quick_start/#create-a-gitlab-ciyml-file "Permalink")

The `.gitlab-ci.yml` file is a [YAML](https://en.wikipedia.org/wiki/YAML) file where you configure specific instructions for GitLab CI/CD.

In this file, you define:

-   The structure and order of jobs that the runner should execute.
-   The decisions the runner should make when specific conditions are encountered.

For example, you might want to run a suite of tests when you commit to any branch except the default branch. When you commit to the default branch, you want to run the same suite, but also publish your application.

All of this is defined in the `.gitlab-ci.yml` file.

To create a `.gitlab-ci.yml` file:

1.  On the left sidebar, select Project information > Details.
2.  Above the file list, select the branch you want to commit to, select the plus icon, then select New file:

    [![New file](assets//new_file_v13_6.png)

3.  For the Filename, type `.gitlab-ci.yml` and in the larger window, paste this sample code:

    ```
    build-job:
      stage: build
      script:
        - echo "Hello, $GITLAB_USER_LOGIN!"

    test-job1:
      stage: test
      script:
        - echo "This job tests something"

    test-job2:
      stage: test
      script:
        - echo "This job tests something, but takes more time than test-job1."
        - echo "After the echo commands complete, it runs the sleep command for 20 seconds"
        - echo "which simulates a test that runs 20 seconds longer than test-job1"
        - sleep 20

    deploy-prod:
      stage: deploy
      script:
        - echo "This job deploys something from the $CI_COMMIT_BRANCH branch."
      environment: production

    ```

    `$GITLAB_USER_LOGIN` and `$CI_COMMIT_BRANCH` are [predefined variables](https://docs.gitlab.com/ee/ci/variables/predefined_variables.html) that populate when the job runs.

4.  Select Commit changes.

The pipeline starts when the commit is committed.

#### `.gitlab-ci.yml` tips[](https://docs.gitlab.com/ee/ci/quick_start/#gitlab-ciyml-tips "Permalink")

-   After you create your first `.gitlab-ci.yml` file, use the [pipeline editor](https://docs.gitlab.com/ee/ci/pipeline_editor/index.html) for all future edits to the file. With the pipeline editor, you can:
    -   Edit the pipeline configuration with automatic syntax highlighting and validation.
    -   View the [CI/CD configuration visualization](https://docs.gitlab.com/ee/ci/pipeline_editor/index.html#visualize-ci-configuration), a graphical representation of your `.gitlab-ci.yml` file.
-   If you want the runner to [use a Docker container to run the jobs](https://docs.gitlab.com/ee/ci/docker/using_docker_images.html), edit the `.gitlab-ci.yml` file to include an image name:

    ```
    default:
      image: ruby:2.7.5

    ```

    This command tells the runner to use a Ruby image from Docker Hub and to run the jobs in a container that's generated from the image.

    This process is different than [building an application as a Docker container](https://docs.gitlab.com/ee/ci/docker/using_docker_build.html). Your application does not need to be built as a Docker container to run CI/CD jobs in Docker containers.

-   Each job contains scripts and stages:
    -   The [`default`](https://docs.gitlab.com/ee/ci/yaml/index.html#default) keyword is for custom defaults, for example with [`before_script`](https://docs.gitlab.com/ee/ci/yaml/index.html#before_script) and [`after_script`](https://docs.gitlab.com/ee/ci/yaml/index.html#after_script).
    -   [`stage`](https://docs.gitlab.com/ee/ci/yaml/index.html#stage) describes the sequential execution of jobs. Jobs in a single stage run in parallel as long as there are available runners.
    -   Use [Directed Acyclic Graphs (DAG)](https://docs.gitlab.com/ee/ci/directed_acyclic_graph/index.html) keywords to run jobs out of stage order.
-   You can set additional configuration to customize how your jobs and stages perform:
    -   Use the [`rules`](https://docs.gitlab.com/ee/ci/yaml/index.html#rules) keyword to specify when to run or skip jobs. The `only` and `except` legacy keywords are still supported, but can't be used with `rules` in the same job.
    -   Keep information across jobs and stages persistent in a pipeline with [`cache`](https://docs.gitlab.com/ee/ci/yaml/index.html#cache) and [`artifacts`](https://docs.gitlab.com/ee/ci/yaml/index.html#artifacts). These keywords are ways to store dependencies and job output, even when using ephemeral runners for each job.
