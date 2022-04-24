# Svn Cheatsheet

Here are the SVN commands that every developer and admin should know.

The svn admincreate command creates a new, empty repository.
```
svn admincreate
```

The svn import command commits an unversioned tree of files into a repository (and creates intermediate directories, if needed).
```
svn import
```

The svn checkout command checks out a working copy from the repository. This command is sometimes shortened to svn co.
```
svn checkout
```

The svn commit command sends your changes back to the SVN server.
```
svn commit
```

The svn add command will add a new file to the repository — but only after you've done a svn commit.
```
svn add
```

The svn delete command will delete a file from your working copy of the repository.
```
svn delete
```

The svn list command allows you to see a list of files in a repository without creating a working copy.
```
svn list
```

The svn diff command reveals the differences between your working copy and the copy in the master SVN repository.
```
svn diff
```

The svn status command prints the status of working copy files and directories.
```
svn status
```

The svn info command displays information about a local or remote item.
```
svn info
```

The svn log command shows log messages from the repository.
```
svn log
```

The svn move command moves a file from one directory to another (or renames it).
```
svn move
```

The svn merge command combines two different versions into your working copy.
```
svn merge
```

The svn revert command reverts changes in your working copy, as well as property changes. For example, you can use svn revert to undo svn add.
```
svn revert
```

The svn update command updates your working copy with changes from the repository.
```
svn update
```

The svn shelve command stores your changes without submitting them.
```
svn shelve
```

The svn help command provides a summary of available commands.
```
svn help
```
