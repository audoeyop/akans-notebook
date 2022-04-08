# Gem

The `gem` command is used to install and manage RubyGems and dependencies. Gems are essentially ruby software packages.


## Finding Gems
The search command lets you find remote gems by name. You can use regular expression characters in your query:
```
$ gem search ^<gem_name>
```

If you see a gem you want more information on you can add the details option. You’ll want to do this with a small number of gems, though, as listing gems with details requires downloading more files:
```
$ gem search ^<gem_name>$ -d
```


## Installing Gems
The `install` command downloads and installs the gem and any necessary dependencies then builds documentation for the installed gems.
```
$ gem install <gem_name>
```

You can also install a gem from a `.gem` file.

```
$ gem install /path/to/file/<gem_name>.gem
```

Or from a network location.

```
$ gem install https://archive.corp.netruby/gems/<gem_name>.gem
```
## Gem Sources
The `gem` command searches for RubyGems in gem registries, or a `source`. The default source is `https://rubygems.org/`. To list/add/remove sources, use the commands below.
```
# list gem sources:
gem sources -l

# remove default gem source:
gem sources -r https://rubygems.org/

# add other gem sources:
gem sources -a https://ruby.taobao.org/
```


# Uninstalling Gems
In the example below, the drip command depends upon the rbtree gem which has an extension. Ruby installs the dependency rbtree and builds its extension, installs the drip gem, then builds documentation for the installed gems.
```
$ gem install drip
Fetching: rbtree-0.4.1.gem (100%)
Building native extensions.  This could take a while...
Successfully installed rbtree-0.4.1
Fetching: drip-0.0.2.gem (100%)
Successfully installed drip-0.0.2
Parsing documentation for rbtree-0.4.1
Installing ri documentation for rbtree-0.4.1
Parsing documentation for drip-0.0.2
Installing ri documentation for drip-0.0.2
Done installing documentation for rbtree, drip after 0 seconds
2 gems installed
```
The uninstall command removes the gems you have installed.
```
$ gem uninstall drip
```
If you uninstall a dependency of a gem RubyGems will ask you for confirmation.
```
$ gem uninstall rbtree

You have requested to uninstall the gem:
  rbtree-0.4.1

drip-0.0.2 depends on rbtree (>= 0)
If you remove this gem, these dependencies will not be met.
Continue with Uninstall? [yN]  n
```
## Fetching and Unpacking Gems
If you wish to audit a gem’s contents without installing it you can use the fetch command to download the .gem file then extract its contents with the unpack command.
```
$ gem fetch malice
Fetching: malice-13.gem (100%)
Downloaded malice-13
$ gem unpack malice-13.gem
Fetching: malice-13.gem (100%)
Unpacked gem: '.../malice-13'
$ more malice-13/README

Malice v. 13

DESCRIPTION

A small, malicious library.
```

You can also unpack a gem you have already installed, modify a few files, then use the modified gem in place of the installed one:
```
$ gem unpack rake
Unpacked gem: '.../rake-10.1.0'
$ vim rake-10.1.0/lib/rake/...
$ ruby -I rake-10.1.0/lib -S rake some_rake_task
```


# Bundler

Bundler is a dependency management tool available as a gem. You can install it through RubyGems which comes built-in from Ruby 1.9 with gem install bundler. Bundler will read the Gemfile for the list of gems need to be installed, fetches metadata from the source provided, resolves the dependencies of each gem, installs them and requires them while booting. Without bundler, we need to handle the installation and manage the dependencies manually.

Bundler is actually a gem. To install bundler, run:
```
gem install bundler
```

## Gemfile
A `Gemfile` is the standard way to organize dependencies in your application with bundler. A basic `Gemfile` will look like this:
```
source 'https://rubygems.org'

gem 'rack'
gem 'sinatra'
gem 'uglifier'
```
Notice the registry `source` that bundler will use to search for gems during installation. This can be changed to point to a different gem registry.

You can specify the versions of the gem you want as follows:

Match except on point release. Use only `1.5.X`
```
# Use a specific version.
gem 'sinatra', '1.4.7'
# Use at least a version or anything greater.
gem 'uglifier', '>= 1.3.0'
# Limits versions to a subset of the possible versions. So ~> 2.0.0 means ">= 2.0.0 and < 2.1.0"
gem 'rack', '~>2.0.0'
```
You can also pull gems straight from a git repo:
```
# pull a gem from github
gem 'sinatra', git: 'https://github.com/sinatra/sinatra.git'
# you can specify a sha
gem 'sinatra', git: 'https://github.com/sinatra/sinatra.git', sha: '30d4fb468fd1d6373f82127d845b153f17b54c51'
# you can also specify a branch, though this is often unsafe
gem 'sinatra', git: 'https://github.com/sinatra/sinatra.git', branch: 'master'
```
You can also group gems depending on what they are used for. For example:
```
group :development
    # This gem is only available in dev and test, not production.
    gem 'byebug'
end

group :production, :test do
    # This gem is only available in dev and test, not production.
    gem 'pg'
end

group :test, :test do
    # This gem is only available in dev and test, not production.
    gem 'rspec'
end
```
You can specify which platform certain gems should run on if you application needs to be able to run on multiple platforms. For example:
```
platform :jruby do
  gem 'activerecord-jdbc-adapter'
  gem 'jdbc-postgres'
end

platform :ruby do
  gem 'pg'
end
```
To install all the gems from a Gemfile do:
```
bundle install
```
To exclude environments from gem install
```
bundle install --without production
```
```
bundle install --without production --without test
```
To install gems for specific environments
```
bundle install --without production
```
```
bundle install --without production --without test
```
## Remove Unused Gems

When you remove gems from your Gemfile, this command will remove all unused gems in your bundler directory. This is useful when you have made many changes to your gem dependencies.
```
bundle clean
```

## Gemfile.lock
The Gemfile.lock file is generated after a successful `bundle install`. This file is where Bundler records the exact versions of gems and dependencies that were installed. This way, when the same library/project is loaded on another machine, running `bundle install` will look at the `Gemfile.lock` and install the exact same versions, rather than just using the Gemfile and installing the most recent versions.

Example of a Gemfile.lock :
```
GEM
  remote: https://rubygems.org/
  specs:
    actioncable (5.2.1)
      actionpack (= 5.2.1)
      nio4r (~> 2.0)
      websocket-driver (>= 0.6.1)
    actionmailer (5.2.1)
      actionpack (= 5.2.1)
      actionview (= 5.2.1)
      activejob (= 5.2.1)
      ...
      mail (~> 2.5, >= 2.5.4)
    activestorage (5.2.1)
      actionpack (= 5.2.1)
      activerecord (= 5.2.1)
      marcel (~> 0.3.1)

PLATFORMS
  ruby

DEPENDENCIES
  bootsnap (>= 1.1.0)
  byebug
  capybara (>= 2.15)
  ...
  rails (~> 5.2.1)
  rspec-rails

RUBY VERSION
   ruby 2.5.1p57

BUNDLED WITH
   1.16.3
```

## Bundle Config
Executing `bundle config list` will print a list of all bundler configuration for the current bundle, and where that configuration was set.

Executing `bundle config get <name>` will print the value of that configuration setting, and where it was set.

Executing `bundle config set <name> <value>`  will set that "global" configuration to the value specified for all bundles executed as the current user. The configuration will be stored in `~/.bundle/config`. If name already is set, name will be overridden and user will be warned.

Executing `bundle config set --local <name> <value>` will set that configuration in the directory for the local application. The configuration will be stored in `<project_root>/.bundle/config`. If `BUNDLE_APP_CONFIG` is set, the configuration will be stored in `$BUNDLE_APP_CONFIG/config`.

Executing `bundle config unset <name>` will delete the configuration in both local and global sources.

Executing `bundle config unset --global <name>` will delete the configuration only from the user configuration.

Executing `bundle config unset --local <name> <value>` will delete the configuration only from the local application.

A very common example, the mysql gem, requires Snow Leopard users to pass configuration flags to gem install to specify where to find the mysql_config executable.
```
gem install mysql -- --with-mysql-config=/usr/local/mysql/bin/mysql_config
```
Since the specific location of that executable can change from machine to machine, you can specify these flags on a per-machine basis.
```
bundle config set --global build.mysql --with-mysql-config=/usr/local/mysql/bin/mysql_config
```

## Bundle Exec
By default install bundler dependencies to the `vendor/bundle` directory. Default setting:
```
bundle config path vendor/bundle --global
```

Change default setting to move executables installed by bundler to .bin dir
```
bundle config bin .bin --global
```

NOTE: Add .bin to PATH, so that it would be possible to run commands without bundle exec
```
export PATH=".bin:$PATH"
```
To make gem command aware of application specific dependencies, create /usr/local/var/rbenv/vars with the following contents
```
GEM_PATH=vendor/bundle
```

`bundle exec` is a Bundler command to execute a script in the context of the current bundle (from your directory's Gemfile). Directories from your project are added to the search when `bundle exec` is used.

The following uses the `rake` file from `bin/rake` in the project directory not a system-wide version of rake..
```
bundle exec rake db:migrate
```

# References
https://guides.rubygems.org/rubygems-basics/
https://riptutorial.com/ruby/example/15763/using-a-gemfile-and-bundler
