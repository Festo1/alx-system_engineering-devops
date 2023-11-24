# 0x0A. Configuration management

### Project Overview

This project aims to provide a hands-on introduction to configuration management using Puppet. You will be tasked with creating Puppet manifests to manage various aspects of an Ubuntu system, including installing software, configuring services, and managing files.

### Prerequisites

* A working Ubuntu 20.04 LTS environment
* A basic understanding of Linux commands
* Familiarity with programming concepts

### Requirements

* All files must be interpreted on Ubuntu 20.04 LTS
* All files must end with a newline character
* A `README.md` file must exist at the root of the project directory
* Puppet manifests must pass `puppet-lint` version 2.1.1 without any errors
* Puppet manifests must run without errors
* The first line of each Puppet manifest file must be a comment explaining the purpose of the manifest
* Puppet manifest files must have the `.pp` extension

### Installation Instructions

Before beginning the project, ensure you have the necessary tools installed on your Ubuntu system:

1. **Install Ruby and related packages:**

```bash
$ apt-get install -y ruby=1:2.7+1 --allow-downgrades
$ apt-get install -y ruby-augeas
$ apt-get install -y ruby-shadow
$ apt-get install -y puppet

$ gem install puppet-lint


Note: You do not need to attempt to upgrade Puppet versions. This project focuses on basic syntax, which is consistent across different Puppet versions.

### Project Resources

To enhance your understanding of configuration management and Puppet, consider exploring the following resources:

* [Intro to Configuration Management](https://www.digitalocean.com/community/tutorials/an-introduction-to-configuration-management)
* [Puppet resource type:file](https://puppet.com/docs/puppet/5.5/types/file.html)
* [Puppet’s Declarative Language: Modeling Instead of Scripting](https://puppet.com/blog/puppets-declarative-language-modeling-instead-of-scripting/)
* [Puppet lint](http://puppet-lint.com/)
* [Puppet emacs mode](https://github.com/voxpupuli/puppet-mode)

### Project Structure

The project directory should contain the following files:

* `README.md` (This file)
* `manifests/` (Directory containing Puppet manifests)
* `data/` (Directory containing data files for Puppet manifests)

### Contribution Guidelines

* Follow the specified coding style guidelines
* Use meaningful variable names and comments
* Include thorough documentation for your code
* Test your code thoroughly before submitting

### Additional Notes

* Ensure your Puppet manifests pass `puppet-lint` without any errors
* Make sure your Puppet manifests run without errors on an Ubuntu 20.04 LTS system
* Submit your project as a compressed zip file containing the project directory

&copy; FESTO
