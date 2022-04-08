# Ruby Robocop

RuboCop is a Ruby static code analyzer (a.k.a. linter) and code formatter. Out of the box it will enforce many of the guidelines outlined in the community Ruby Style Guide. Apart from reporting the problems discovered in your code, RuboCop can also automatically fix many of them for you.

RuboCop is extremely flexible and most aspects of its behavior can be tweaked via various configuration options.

Patreon OpenCollective OpenCollective Tidelift

Working on RuboCop is often fun, but it also requires a great deal of time and energy.

Please consider financially supporting its ongoing development.

Installation
RuboCop's installation is pretty standard:

$ gem install rubocop
If you'd rather install RuboCop using bundler, add a line for it in your Gemfile (but set the require option to false, as it is a standalone tool):

gem 'rubocop', require: false
RuboCop is stable between major versions, both in terms of API and cop configuration. We aim to ease the maintenance of RuboCop extensions and the upgrades between RuboCop releases. All big changes are reserved for major releases. To prevent an unwanted RuboCop update you might want to use a conservative version lock in your Gemfile:

gem 'rubocop', '~> 1.26', require: false
See our versioning policy for further details.

Quickstart
Just type rubocop in a Ruby project's folder and watch the magic happen.

$ cd my/cool/ruby/project
$ rubocop

# References
https://github.com/rubocop/rubocop
