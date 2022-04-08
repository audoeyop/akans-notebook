# Git configuration

Set the name that will be attached to your commits and tags.
```
$ git config --global user.name “Your Name”
```

Set the e-mail address that will be attached to your commits and tags.
```
$ git config --global user.email "you@example.com"
```

Enable some colorization of Git output.
```
$ git config --global color.ui auto
```

After running `git config` commands similar to the ones above, you will see a file named `.gitconfig` in your home directory. You can add/edit/remove git configurations directly from this file or run `git config` to make additions/changes.

```
% cat ~/.gitconfig
[user]
	name = Akaninyene Udoeyop
	email = audoeyop@gmail.com
```

# Starting A Project

Create a new local repository. If [project name] is provided, Git will
create a new directory name [project name] and will initialize a
repository inside it. If [project name] is not provided, then a new
repository is initialized in the current directory.
```
$ git init [project name]
```

Downloads a project with the entire history from the remote repository.
```
$ git clone [project url]
```

# Day-To-Day Work
Displays the status of your working directory. Options include new,
staged, and modified files. It will retrieve branch name, current commit
identifier, and changes pending commit.
```
$ git status
```

Add a file to the staging area. Use in place of the full file path to add all
changed files from the current directory down into the directory tree.
```
$ git add [file]
```

Show changes between working directory and staging area.
```
$ git diff [file]
```

Shows any changes between the staging area and the repository.
```
$ git diff --staged [file]
```


Discard changes in working directory. This operation is unrecoverable.
```
$ git checkout -- [file]
```
Revert your repository to a previous known working state.
```
$ git reset [file]
```
Create a new commit from changes added to the staging area.
```
$ git commit
```
or...
```
git commit -m "commit message"
```

# Types of git objects

Once a repo is initialized or cloned, you will see a directory named `.git` in the home directory of your project. The folder contains configurations and objects associated with your git project. You should be familiar with the purpose of each of these files/directories.
```
% ls .git
COMMIT_EDITMSG	HEAD		config		hooks		info		objects
FETCH_HEAD	ORIG_HEAD	description	index		logs		refs
```
```
4 sub-directories:
hooks/ : scripts to perform actions & validations
info/ : exclude file for ignored patterns
objects/ : all "objects"/"blobs"
refs/ : pointers to commit objects

4 files:
HEAD : current branch
config : configuration options
description: repository name
index : staging area
Here "object" includes:
```

Git stores different types of objects in .git/objects. The object types are:

- commit;
- tree;
- blob;
- annotated tag.

Here we make examples of each of these object types in a new repository.

First we make the working tree and initialize the repository:
```
$ mkdir example_repo
$ cd example_repo
$ git init
```
Initialized empty Git repository in <repository_path>/.git/
Next we make an example commit:
```
$ echo "An example file" > example_file.txt
$ git add example_file.txt
$ git commit -m "An example commit"
[main (root-commit) c3c31f1] An example commit
 1 file changed, 1 insertion(+)
 create mode 100644 example_file.txt
```
There should now be three objects in the directory .git/objects, one storing the backup of example_file.txt, one storing the directory listing for the commit, and one storing the commit message:
```
objects
├── 2f
│   └── 781156939ad540b2434d012446154321e41e03 [32B]
├── 83
│   └── 207f0274383b4a79ff6d6c297e95204ba961bc [60B]
├── c3
│   └── c31f13485ff3aecfba7550dd86b193b82d6131 [135B]
├── info
└── pack
```

## Commit object type
The commit object contains the directory tree object hash, parent commit hash, author, committer, date and message.

Git log will show us the hash for the commit message:
```
$ git log
commit c3c31f13485ff3aecfba7550dd86b193b82d6131
Author: Matthew Brett <matthew.brett@gmail.com>
Date:   Sat Oct 2 10:25:52 2021 +0100

    An example commit
```

Note: `git cat-file` can be used to show the contents of the hashed files in .git/objects, but cat-file is a relatively obscure git command that you will probably not need in your daily git work.

`git cat-file -t` shows us the type of the object represented by a particular hash:
```
$ git cat-file -t c3c31f13485ff3aecfba7550dd86b193b82d6131
commit
```

`git cat-file -p` shows the contents of the file associated with this hash:
```
$ git cat-file -p c3c31f13485ff3aecfba7550dd86b193b82d6131
tree 83207f0274383b4a79ff6d6c297e95204ba961bc
author Matthew Brett <matthew.brett@gmail.com> 1633166752 +0100
committer Matthew Brett <matthew.brett@gmail.com> 1633166752 +0100

An example commit
```

## Tree object type
The commit contents gave us the hash of the directory listing for the commit. If we inspect this object, we find it is of type “tree” and contains the directory listing for the commit:
```
$ git cat-file -t 83207f0274383b4a79ff6d6c297e95204ba961bc
tree
```
```
$ git cat-file -p 83207f0274383b4a79ff6d6c297e95204ba961bc
100644 blob 2f781156939ad540b2434d012446154321e41e03	example_file.txt
```

The tree object contains one line per file or subdirectory, with each line giving file permissions, object type, object hash and filename. Object type is usually one of “blob” for a file or “tree” for a subdirectory 1.

## Blob object type
The directory listing gave us the hash of the stored of example_file.txt. This object is of type “blob” and contains the file snapshot:
```
$ git cat-file -t 2f781156939ad540b2434d012446154321e41e03
blob
```
```
$ git cat-file -p 2f781156939ad540b2434d012446154321e41e03
An example file
```
Blob is an abbreviation for “binary large object”. When we git add a file such as example_file.txt, git creates a blob object containing the contents of the file. Blobs are therefore the git object type for storing files.

## Tag object type
There is also a git type for annotated tags. We don’t have one of those yet, so let’s make one:
```
$ git tag -a first-commit -m "Tag pointing to first commit"
```

This gives us a new object in .git/objects:
```
objects
├── 2f
│   └── 781156939ad540b2434d012446154321e41e03 [32B]
├── 39
│   └── 2fbf08bc99b662867ac009b19eb032d56ab4c1 [146B]
├── 83
│   └── 207f0274383b4a79ff6d6c297e95204ba961bc [60B]
├── c3
│   └── c31f13485ff3aecfba7550dd86b193b82d6131 [135B]
├── info
└── pack
```
The object is of type “tag”:
```
$ git cat-file -t 392fbf08bc99b662867ac009b19eb032d56ab4c1
tag
```

The tag object type contains the hash of the tagged object, the type of tagged object (usually a commit), the tag name, author, date and message:
```
$ git cat-file -p 392fbf08bc99b662867ac009b19eb032d56ab4c1
object c3c31f13485ff3aecfba7550dd86b193b82d6131
type commit
tag first-commit
tagger Matthew Brett <matthew.brett@gmail.com> 1633166752 +0100

Tag pointing to first commit
```

Notice that the “object” the tag points to, via its hash, is the commit object, as we were expecting.

# Footnotes

1. The object types in a directory listing are almost invariably either “blob” or “tree”, but can also be “commit” for recording the commit of a git submodule - see How do git submodules work?.

# Reference
https://about.gitlab.com/images/press/git-cheat-sheet.pdf
https://matthew-brett.github.io/curious-git/git_object_types.html
