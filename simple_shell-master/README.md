# Simple_Shell
----
!["Holberton Logo"](https://www.holbertonschool.com/holberton-logo-twitter-card.png)

## What is Simple shell? 💻

This is a simple implementation of  command-line interpreter for the Unix operating system created by holberton students **Andres Cortes** and **Jhonnyer Otalvaro**. 

See [Unix Shell](https://en.wikipedia.org/wiki/Unix_shell) 📖

<h2>Learning Objectives</h2>
<p> At the end of this project, we are expected to be able to explain to anyone, <strong> whitout the help of Google </strong>:</p>

<h3>General</h3>

<ul>
<li>Who designed and implemented the original Unix operating system</li>
<li>Who wrote the first version of the UNIX shell</li>
<li>Who invented the B programming language (the direct predecessor to the C programming language)</li>
<li>Who is Ken Thompson</li>
<li>How does a shell work</li>
<li>What is a pid and a ppid</li>
<li>How to manipulate the environment of the current process</li>
<li>What is the difference between a function and a system call</li>
<li>How to create processes</li>
<li>What are the three prototypes of <code>main</code></li>
<li>How does the shell use the <code>PATH</code> to find the programs</li>
<li>How to execute another program with the <code>execve</code> system call</li>
<li>How to suspend the execution of a process until one of its children terminates</li>
<li>What is <code>EOF</code> / &ldquo;end-of-file&rdquo;?</li>
</ul>

<h2>Requirements and Use</h2>📌

<h3>General</h3>
<ul>
<li>The allowed editors for this project are: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All the files will be compiled on Ubuntu 14.04 LTS</li>
<li>The C programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Our code is verified using the <code>Betty</code> style. It is checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>The created shell should not have any memory leaks</li>
<li>Is not allowed to use more than 5 functions per file</li>
<li>All the header files are include guarded</li>
</ul>

<h2>More Info</h2>

<h3>List of allowed functions and system calls to create the shell</h3>

<ul>
<li><code>access</code> (man 2 access)</li>
<li><code>chdir</code> (man 2 chdir)</li>
<li><code>close</code> (man 2 close)</li>
<li><code>closedir</code> (man 3 closedir)</li>
<li><code>execve</code> (man 2 execve)</li>
<li><code>exit</code> (man 3 exit)</li>
<li><code>_exit</code> (man 2 _exit)</li>
<li><code>fflush</code> (man 3 fflush)</li>
<li><code>fork</code> (man 2 fork)</li>
<li><code>free</code> (man 3 free)</li>
<li><code>getcwd</code> (man 3 getcwd)</li>
<li><code>getline</code> (man 3 getline)</li>
<li><code>isatty</code> (man 3 isatty)</li>
<li><code>kill</code> (man 2 kill)</li>
<li><code>malloc</code> (man 3 malloc)</li>
<li><code>open</code> (man 2 open)</li>
<li><code>opendir</code> (man 3 opendir)</li>
<li><code>perror</code> (man 3 perror)</li>
<li><code>read</code> (man 2 read)</li>
<li><code>readdir</code> (man 3 readdir)</li>
<li><code>signal</code> (man 2 signal)</li>
<li><code>stat</code> (__xstat) (man 2 stat)</li>
<li><code>lstat</code> (__lxstat) (man 2 lstat)</li>
<li><code>fstat</code> (__fxstat) (man 2 fstat)</li>
<li><code>strtok</code> (man 3 strtok)</li>
<li><code>wait</code> (man 2 wait)</li>
<li><code>waitpid</code> (man 2 waitpid)</li>
<li><code>wait3</code> (man 2 wait3)</li>
<li><code>wait4</code> (man 2 wait4)</li>
<li><code>write</code> (man 2 write)</li>
</ul>

## Files 📋

|   **File**   |   **Description**   |
| -------------- | --------------------- |
| [main.c](./main.c) | the main function |
| [shell.h](./shell.h) | header file |
| [execute.c ](./execute.c) | create a new proces who excecute the command user typed |
| [getline.c ](./getline.c) | to recibe what user type in stdin |
| [token.c](./token.c) |  create tokens from what user typed |
| [_getenv.c](./_getenv.c) | find variable in enviroment variables |
| [_strcat.c](./_strcat.c) | will concatenate two strings |
| [_strcmp.c](./_strcmp.c) | compare two strings |
| [_strcpy.c](./_strcpy.c) | copy string |
| [_strdup.c](./_strdup.c) | to duplicate string |
| [_strlen.c](./_strlen.c) | to know the length of string |
| [_strncmp.c](./_strncmp.c) | compare the first n letters of two strings |
| [_which.c](./_which.c) | find the path where is the command typed |
| [tokenpath.c](./tokenpath.c) | create tokens from what user typed |

## Installation 🚀
Clone the repository. Compile the ".c" files. Run executable.
```
$ git clone https://github.com/Jhonierk/test-simple_shell
```
## Compilation 💻

Enter the following command to compile:
` $ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh `

## Usage

1. Enter custom shell by typing "./hsh". You should be prompted with a ($).
2. Type a command of your liking and press "Enter".
3. Appropriate output will appear.
4. Prompt reappears and awaits your next command.
5. Exit shell by typing "exit"

## Example

Interactive Mode
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

Non-interactive Mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Authors ✒️

* [**Andres Cortes**](https://github.com/Andrescortes23)
* [**Jhonnyer Otalvaro**](https://github.com/Jhonierk)
