# 0x0B. SSH

DevOps
SSH

SysAdmin
Security


### Table of Contents

1. [Getting Started](#getting-started)
    * [Server Information](#server-information)
    * [Server Environment](#server-environment)
2. [Resources](#resources)
    * [Read or Watch](#read-or-watch)
    * [Reference Materials](#reference-materials)
    * [Man or Help](#man-or-help)
3. [Learning Objectives](#learning-objectives)
    * [General](#general)
    * [Copyright and Plagiarism](#copyright-and-plagiarism)
4. [Requirements](#requirements)
    * [General](#general)
    * [Tasks](#tasks)
5. [Task Descriptions](#task-descriptions)
    * [Task 0: Use a Private Key](#task-0-use-a-private-key)
    * [Task 1: Create an SSH Key Pair](#task-1-create-an-ssh-key-pair)
    * [Task 2: Client Configuration File](#task-2-client-configuration-file)
    * [Task 3: Let me in!](#task-3-let-me-in)
6. [Copyright and License](#copyright-and-license)

## Getting Started

### Server Information

To access the remote server, please refer to the "my servers" section of the intranet. Each line contains the IP address and username required for establishing an SSH connection.

### Server Environment

The server is configured with an Ubuntu 20.04 LTS environment. It is important to understand the basics of server architecture and its role in various applications.

## Resources

### Read or Watch

* [What is a (physical) server - text](https://www.example.com)
* [What is a (physical) server - video](https://www.example.com)
* [SSH essentials](https://www.example.com)
* [SSH Config File](https://www.example.com)
* [Public Key Authentication for SSH](https://www.example.com)
* [How Secure Shell Works](https://www.example.com)
* [SSH Crash Course (Long, but highly informative. Watch this if configuring SSH is still confusing. It may be helpful to watch at x1.25 speed or above.)](https://www.example.com)

### Reference Materials

* [Understanding the SSH Encryption and Connection Process](https://www.example.com)
* [Secure Shell Wiki](https://www.example.com)
* [IETF RFC 4251 (Description of the SSH Protocol)](https://www.example.com)
* [Internet Engineering Task Force](https://www.example.com)
* [Request for Comments](https://www.example.com)

### Man or Help

* `ssh`
* `ssh-keygen`
* `env`

## Learning Objectives

### General

Through this project, you will gain knowledge and skills in the following areas:

* Understanding the concept of a server and its role in different contexts
* Familiarity with SSH and its significance in secure remote connections
* Generating an SSH RSA key pair for secure authentication
* Establishing an SSH connection to a remote host using RSA keys
* Understanding the advantages of using `#!/usr/bin/env bash` over `/bin/bash`


## Requirements

### General

* Allowed editors: `vi`, `vim`, `emacs`
* All files will be interpreted on Ubuntu 20.04 LTS
* All files should end with a new line
* A `README.md` file, at the root of the project folder, is mandatory
* All Bash script files must be executable
* The first line of all Bash scripts should be exactly `#!/usr/bin/env bash`
* The second line of all Bash scripts should be a comment explaining the purpose of the script

## Task Descriptions

### Task 0: Use a Private Key

Write a Bash script that uses `ssh` to connect to your server using the private key `~/.ssh/school` with the user `ubuntu`.

* Only use `ssh` single-character flags
* Do not use the `-l` flag
* Passphrase protection for the private key is not required in this task

### Task 1: Create an SSH Key Pair

Write a Bash script that creates an RSA key pair.

* The name of the created private key must be `school`
* The key is to be created with 4096 bits
* The private key must be protected by the passphrase `betty`

### Task 2: Client Configuration File

Your local machine should have an SSH configuration file for the local SSH client. Let's configure it to meet our needs so that connecting to a server doesn't require typing a password. Please share your SSH client configuration in your answer file.

* The SSH client configuration must be set to use the private key `~/.ssh/school`
* The SSH client configuration must refuse authentication using a password

### Task 3: Let me in!

After successfully connecting to your server, we would like to join the party as well. Please add the provided SSH public key to your server, allowing us to connect using the `ubuntu` user.

ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQDNdtrNGtTXe5Tp1EJQop8mOSAuRGLjJ6DW4PqX4wId/Kawz35ESampIqHSOTJmbQ8UlxdJuk0gAXKk3Ncle4safGYqM/VeDK3LN5iAJxf4kcaxNtS3eVxWBE5iF3FbIjOqwxw5Lf5sRa5yXxA8HfWidhbIG5TqKL922hPgsCGABIrXRlfZYeC0FEuPWdr6smOElSVvIXthRWp9cr685KdCI+COxlj1RdVsvIo+zunmLACF9PYdjB2s96Fn0ocD3c5SGLvDOFCyvDojSAOyE70ebIElnskKsDTGwfT4P6jh9OBzTyQEIS2jOaE5RQq4IB4DsMhvbjDSQrP0MdCLgwkN

## Copyright and License

© Festo. This project is licensed under the MTI License. For more details, refer to the [LICENSE](LICENSE) file.
