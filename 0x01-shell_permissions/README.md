# **SHELL PERMISSION**

## What is Shell permission

* In a Unix or Linux operating system, a shell permission determines the level of access a user or a group has to a particular file or directory.

* There are three types of shell permissions: read (r), write (w), and execute (x), and there are three groups of users for which these permissions can be set: owner (user), group, and others.

### *Here are some examples of how shell permissions work*:

1. ls -l command lists the files and directories in a folder and displays their permissions. For example, the following output shows that the user has read and write access to the file example.txt, and the group and others have only read access: **-rw-r--r-- 1 user group 0 Mar  7 10:00 example.txt**


2. To change the permissions of a file or directory, you can use the chmod command. For example, the following command gives the owner read, write, and execute permissions, and the group and others only read and execute permissions: **chmod 755 example.txt**.

3. To give a user or a group ownership of a file or directory, you can use the chown command. For example, the following command gives the user john ownership of the file example.txt: **chown john example.txt**.

4. To give a user or a group access to a file or directory that they don't own, you can use the chgrp command. For example, the following command gives the group staff access to the file example.txt: **chgrp staff example.txt**.

* *In summary, shell permissions are an important aspect of Unix and Linux operating systems, as they allow users to control who can access and modify their files and directories*.





