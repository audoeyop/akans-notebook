# Docker

Docker is an open platform for developing, shipping, and running applications. Docker enables you to separate your applications from your infrastructure so you can deliver software quickly. With Docker, you can manage your infrastructure in the same ways you manage your applications. By taking advantage of Docker’s methodologies for shipping, testing, and deploying code quickly, you can significantly reduce the delay between writing code and running it in production.

## The Docker platform
Docker provides the ability to package and run an application in a loosely isolated environment called a container. The isolation and security allows you to run many containers simultaneously on a given host. Containers are lightweight and contain everything needed to run the application, so you do not need to rely on what is currently installed on the host. You can easily share containers while you work, and be sure that everyone you share with gets the same container that works in the same way.

Docker provides tooling and a platform to manage the lifecycle of your containers:

- Develop your application and its supporting components using containers.
- The container becomes the unit for distributing and testing your application.
- When you’re ready, deploy your application into your production environment, as a container or an orchestrated service. This works the same whether your production environment is a local data center, a cloud provider, or a hybrid of the two.

## Docker architecture
Docker uses a client-server architecture. The Docker client talks to the Docker daemon, which does the heavy lifting of building, running, and distributing your Docker containers. The Docker client and daemon can run on the same system, or you can connect a Docker client to a remote Docker daemon. The Docker client and daemon communicate using a REST API, over UNIX sockets or a network interface. Another Docker client is Docker Compose, that lets you work with applications consisting of a set of containers.

![](assets/architecture.svg)

## The Docker daemon
The Docker daemon (dockerd) listens for Docker API requests and manages Docker objects such as images, containers, networks, and volumes. A daemon can also communicate with other daemons to manage Docker services.

## The Docker client
The Docker client (docker) is the primary way that many Docker users interact with Docker. When you use commands such as docker run, the client sends these commands to dockerd, which carries them out. The docker command uses the Docker API. The Docker client can communicate with more than one daemon.

## Docker Desktop
Docker Desktop is an easy-to-install application for your Mac, Windows or Linux environment that enables you to build and share containerized applications and microservices. Docker Desktop includes the Docker daemon (dockerd), the Docker client (docker), Docker Compose, Docker Content Trust, Kubernetes, and Credential Helper. For more information, see Docker Desktop.

## Docker registries
A Docker registry stores Docker images. Docker Hub is a public registry that anyone can use, and Docker is configured to look for images on Docker Hub by default. You can even run your own private registry.

When you use the docker pull or docker run commands, the required images are pulled from your configured registry. When you use the docker push command, your image is pushed to your configured registry.

## Docker objects
When you use Docker, you are creating and using images, containers, networks, volumes, plugins, and other objects. This section is a brief overview of some of those objects.

## Images
An image is a read-only template with instructions for creating a Docker container. Often, an image is based on another image, with some additional customization. For example, you may build an image which is based on the ubuntu image, but installs the Apache web server and your application, as well as the configuration details needed to make your application run.

You might create your own images or you might only use those created by others and published in a registry. To build your own image, you create a Dockerfile with a simple syntax for defining the steps needed to create the image and run it. Each instruction in a Dockerfile creates a layer in the image. When you change the Dockerfile and rebuild the image, only those layers which have changed are rebuilt. This is part of what makes images so lightweight, small, and fast, when compared to other virtualization technologies.

## Containers
A container is a runnable instance of an image. You can create, start, stop, move, or delete a container using the Docker API or CLI. You can connect a container to one or more networks, attach storage to it, or even create a new image based on its current state.

By default, a container is relatively well isolated from other containers and its host machine. You can control how isolated a container’s network, storage, or other underlying subsystems are from other containers or from the host machine.

A container is defined by its image as well as any configuration options you provide to it when you create or start it. When a container is removed, any changes to its state that are not stored in persistent storage disappear.

## Example docker run command
The following command runs an ubuntu container, attaches interactively to your local command-line session, and runs /bin/bash.
```
docker run -i -t ubuntu /bin/bash
```
When you run this command, the following happens (assuming you are using the default registry configuration):

- If you do not have the ubuntu image locally, Docker pulls it from your configured registry, as though you had run docker pull ubuntu manually.

- Docker creates a new container, as though you had run a docker container create command manually.

- Docker allocates a read-write filesystem to the container, as its final layer. This allows a running container to create or modify files and directories in its local filesystem.

- Docker creates a network interface to connect the container to the default network, since you did not specify any networking options. This includes assigning an IP address to the container. By default, containers can connect to external networks using the host machine’s network connection.

- Docker starts the container and executes /bin/bash. Because the container is running interactively and attached to your terminal (due to the -i and -t flags), you can provide input using your keyboard while the output is logged to your terminal.

- When you type exit to terminate the /bin/bash command, the container stops but is not removed. You can start it again or remove it.

## Installation

- Docker Desktop is available for Mac, Linux and Windows
https://docs.docker.com/desktop
- View example projects that use Docker
https://github.com/docker/awesome-compose
- Check out our docs for information on using Docker
https://docs.docker.com

## Images
Docker images are a lightweight, standalone, executable package
of software that includes everything needed to run an application:
code, runtime, system tools, system libraries and settings.

Build an Image from a Dockerfile
```
docker build -t <image_name>
```
Build an Image from a Dockerfile without the cache
```
docker build -t <image_name> . –no-cache
```
List local images
```
docker images
```
Delete an Image
```
docker rmi <image_name>
```
Remove all unused images
```
docker image prune
```

## Docker Hub
Docker Hub is a service provided by Docker for finding and sharing
container images with your team. Learn more and find images
at https://hub.docker.com

Login into Docker
```
docker login -u <username>
```
Publish an image to Docker Hub
```
docker push <username>/<image_name>
```
Search Hub for an image
```
docker search <image_name>
```
Pull an image from a Docker Hub
```
docker pull <image_name>
```

## General Commands

Start the docker daemon
```
docker -d
```
Get help with Docker. Can also use –help on all subcommands
```
docker --help
```
Display system-wide information
```
docker info
```

## Containers
Create and run a container from an image, with a custom name:
```
docker run --name <container_name> <image_name>
```
Run a container with and publish a container’s port(s) to the host.
```
docker run -p <host_port>:<container_port> <image_name>
```
Run a container in the background
```
docker run -d <image_name>
```
Start or stop an existing container:
```
docker start|stop <container_name> (or <container-id>)
```
Remove a stopped container:
```
docker rm <container_name>
```
Remove container after container is run:
```
docker run --rm <image_name>
```
Open a shell inside a running container:
```
docker exec -it <container_name> sh
```
Fetch and follow the logs of a container:
```
docker logs -f <container_name>
```
To inspect a running container:
```
docker inspect <container_name> (or <container_id>)
```
To list currently running containers:
```
docker ps
```
List all docker containers (running and stopped):
```
docker ps --all
```
View resource usage stats
```
docker container stats
```

## Dockerfile

### FROM

Usage:

-   `FROM <image>`
-   `FROM <image>:<tag>`
-   `FROM <image>@<digest>`

Information:

-   `FROM` must be the first non-comment instruction in the Dockerfile.
-   `FROM` can appear multiple times within a single Dockerfile in order to create multiple images. Simply make a note of the last image ID output by the commit before each new `FROM` command.
-   The `tag` or `digest` values are optional. If you omit either of them, the builder assumes a `latest` by default. The builder returns an error if it cannot match the `tag` value.


### MAINTAINER

Usage:

-   `MAINTAINER <name>`

The `MAINTAINER` instruction allows you to set the Author field of the generated images.


### RUN

Usage:

-   `RUN <command>` (shell form, the command is run in a shell, which by default is `/bin/sh -c` on Linux or `cmd /S /C` on Windows)
-   `RUN ["<executable>", "<param1>", "<param2>"]` (exec form)

Information:

-   The exec form makes it possible to avoid shell string munging, and to `RUN` commands using a base image that does not contain the specified shell executable.
-   The default shell for the shell form can be changed using the `SHELL` command.
-   Normal shell processing does not occur when using the exec form. For example, `RUN ["echo", "$HOME"]` will not do variable substitution on `$HOME`.

### CMD

Usage:

-   `CMD ["<executable>","<param1>","<param2>"]` (exec form, this is the preferred form)
-   `CMD ["<param1>","<param2>"]` (as default parameters to ENTRYPOINT)
-   `CMD <command> <param1> <param2>` (shell form)

Information:

-   The main purpose of a `CMD` is to provide defaults for an executing container. These defaults can include an executable, or they can omit the executable, in which case you must specify an `ENTRYPOINT` instruction as well.
-   There can only be one `CMD` instruction in a Dockerfile. If you list more than one `CMD` then only the last `CMD` will take effect.
-   If `CMD` is used to provide default arguments for the `ENTRYPOINT` instruction, both the `CMD` and `ENTRYPOINT` instructions should be specified with the JSON array format.
-   If the user specifies arguments to `docker run` then they will override the default specified in `CMD`.
-   Normal shell processing does not occur when using the exec form. For example, `CMD ["echo", "$HOME"]` will not do variable substitution on `$HOME`.

### LABEL

Usage:

-   `LABEL <key>=<value> [<key>=<value> ...]`

Information:

-   The `LABEL` instruction adds metadata to an image.
-   To include spaces within a `LABEL` value, use quotes and backslashes as you would in command-line parsing.
-   Labels are additive including `LABEL`s in `FROM` images.
-   If Docker encounters a label/key that already exists, the new value overrides any previous labels with identical keys.
-   To view an image's labels, use the `docker inspect` command. They will be under the `"Labels"` JSON attribute.


### EXPOSE

Usage:

-   `EXPOSE <port> [<port> ...]`

Information:

-   Informs Docker that the container listens on the specified network port(s) at runtime.
-   `EXPOSE` does not make the ports of the container accessible to the host.


### ENV

Usage:

-   `ENV <key> <value>`
-   `ENV <key>=<value> [<key>=<value> ...]`

Information:

-   The `ENV` instruction sets the environment variable `<key>` to the value `<value>`.
-   The value will be in the environment of all "descendant" Dockerfile commands and can be replaced inline as well.
-   The environment variables set using `ENV` will persist when a container is run from the resulting image.
-   The first form will set a single variable to a value with the entire string after the first space being treated as the `<value>` - including characters such as spaces and quotes.

### ADD

Usage:

-   `ADD <src> [<src> ...] <dest>`
-   `ADD ["<src>", ... "<dest>"]` (this form is required for paths containing whitespace)

Information:

-   Copies new files, directories, or remote file URLs from `<src>` and adds them to the filesystem of the image at the path `<dest>`.
-   `<src>` may contain wildcards and matching will be done using Go's filepath.Match rules.
-   If `<src>` is a file or directory, then they must be relative to the source directory that is being built (the context of the build).
-   `<dest>` is an absolute path, or a path relative to `WORKDIR`.
-   If `<dest>` doesn't exist, it is created along with all missing directories in its path.


### COPY

Usage:

-   `COPY <src> [<src> ...] <dest>`
-   `COPY ["<src>", ... "<dest>"]` (this form is required for paths containing whitespace)

Information:

-   Copies new files or directories from `<src>` and adds them to the filesystem of the image at the path `<dest>`.
-   `<src>` may contain wildcards and matching will be done using Go's filepath.Match rules.
-   `<src>` must be relative to the source directory that is being built (the context of the build).
-   `<dest>` is an absolute path, or a path relative to `WORKDIR`.
-   If `<dest>` doesn't exist, it is created along with all missing directories in its path.


### ENTRYPOINT

Usage:

-   `ENTRYPOINT ["<executable>", "<param1>", "<param2>"]` (exec form, preferred)
-   `ENTRYPOINT <command> <param1> <param2>` (shell form)

Information:

-   Allows you to configure a container that will run as an executable.
-   Command line arguments to `docker run <image>` will be appended after all elements in an exec form `ENTRYPOINT` and will override all elements specified using `CMD`.
-   The shell form prevents any `CMD` or run command line arguments from being used, but the `ENTRYPOINT` will start via the shell. This means the executable will not be PID 1 nor will it receive UNIX signals. Prepend `exec` to get around this drawback.
-   Only the last `ENTRYPOINT` instruction in the Dockerfile will have an effect.


### VOLUME

Usage:

-   `VOLUME ["<path>", ...]`
-   `VOLUME <path> [<path> ...]`

Creates a mount point with the specified name and marks it as holding externally mounted volumes from native host or other containers.


### USER

Usage:

-   `USER <username | UID>`

The `USER` instruction sets the user name or UID to use when running the image and for any `RUN`, `CMD` and `ENTRYPOINT` instructions that follow it in the Dockerfile.


### WORKDIR

Usage:

-   `WORKDIR </path/to/workdir>`

Information:

-   Sets the working directory for any `RUN`, `CMD`, `ENTRYPOINT`, `COPY`, and `ADD` instructions that follow it.
-   It can be used multiple times in the one Dockerfile. If a relative path is provided, it will be relative to the path of the previous `WORKDIR` instruction.


### ARG

Usage:

-   `ARG <name>[=<default value>]`

Information:

-   Defines a variable that users can pass at build-time to the builder with the `docker build` command using the `--build-arg <varname>=<value>` flag.
-   Multiple variables may be defined by specifying `ARG` multiple times.
-   It is not recommended to use build-time variables for passing secrets like github keys, user credentials, etc. Build-time variable values are visible to any user of the image with the docker history command.
-   Environment variables defined using the `ENV` instruction always override an `ARG` instruction of the same name.
-   Docker has a set of predefined `ARG` variables that you can use without a corresponding ARG instruction in the Dockerfile.
    -   `HTTP_PROXY` and `http_proxy`
    -   `HTTPS_PROXY` and `https_proxy`
    -   `FTP_PROXY` and `ftp_proxy`
    -   `NO_PROXY` and `no_proxy`


### ONBUILD

Usage:

-   `ONBUILD <Dockerfile INSTRUCTION>`

Information:

-   Adds to the image a trigger instruction to be executed at a later time, when the image is used as the base for another build. The trigger will be executed in the context of the downstream build, as if it had been inserted immediately after the `FROM` instruction in the downstream Dockerfile.
-   Any build instruction can be registered as a trigger.
-   Triggers are inherited by the "child" build only. In other words, they are not inherited by "grand-children" builds.
-   The `ONBUILD` instruction may not trigger `FROM`, `MAINTAINER`, or `ONBUILD` instructions.

### STOPSIGNAL

Usage:

-   `STOPSIGNAL <signal>`

The `STOPSIGNAL` instruction sets the system call signal that will be sent to the container to exit. This signal can be a valid unsigned number that matches a position in the kernel's syscall table, for instance `9`, or a signal name in the format SIGNAME, for instance `SIGKILL`.


### HEALTHCHECK

Usage:

-   `HEALTHCHECK [<options>] CMD <command>` (check container health by running a command inside the container)
-   `HEALTHCHECK NONE` (disable any healthcheck inherited from the base image)

Information:

-   Tells Docker how to test a container to check that it is still working
-   Whenever a health check passes, it becomes `healthy`. After a certain number of consecutive failures, it becomes `unhealthy`.
-   The `<options>` that can appear are...
    -   `--interval=<duration>` (default: 30s)
    -   `--timeout=<duration>` (default: 30s)
    -   `--retries=<number>` (default: 3)
-   The health check will first run `interval` seconds after the container is started, and then again `interval` seconds after each previous check completes. If a single run of the check takes longer than `timeout` seconds then the check is considered to have failed. It takes `retries` consecutive failures of the health check for the container to be considered `unhealthy`.
-   There can only be one `HEALTHCHECK` instruction in a Dockerfile. If you list more than one then only the last `HEALTHCHECK` will take effect.
-   `<command>` can be either a shell command or an exec JSON array.
-   The command's exit status indicates the health status of the container.
    -   `0`: success - the container is healthy and ready for use
    -   `1`: unhealthy - the container is not working correctly
    -   `2`: reserved - do not use this exit code
-   The first 4096 bytes of stdout and stderr from the `<command>` are stored and can be queried with `docker inspect`.
-   When the health status of a container changes, a `health_status` event is generated with the new status.

### SHELL

Usage:

-   `SHELL ["<executable>", "<param1>", "<param2>"]`

Information:

-   Allows the default shell used for the shell form of commands to be overridden.
-   Each `SHELL` instruction overrides all previous `SHELL` instructions, and affects all subsequent instructions.
-   Allows an alternate shell be used such as `zsh`, `csh`, `tcsh`, `powershell`, and others.


# References
https://docs.docker.com/get-started/overview/
https://docs.docker.com/engine/reference/builder/
