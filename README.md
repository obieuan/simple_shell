# Simple Shell

---

Release date April 12, 2022

---

## Table of Contents

### - Introduction

- What is Shell?
- What is for?

### - Project information

- Tasks
- General requirements
- Allowed functions

### - Documentation

- Instalation

### - Authors

---
## Introduction



### What is Shell?

A shell is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type `sh` (Bourne Shell) will be developed. Users typically interact with a shell using a terminal emulator that is used for entering data into and displaying or printing data from, a computer or a computing system.

### What is for?

This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at `/bin/sh`.

---

## Tasks

#### 0. README, man, AUTHORS
- Write a README
- Write a man for your shell
- You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

#### 1. Betty would be proud
- Write a beautiful code that passes the Betty checks

#### 2. Simple shell 0.1
Write a UNIX command line interpreter.
- Usage: simple_shell

Your Shell should:
- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- You have to handle the “end of file” condition (Ctrl+D)

You don’t have to:

- use the `PATH`
- implement built-ins
- handle special characters : ", ', \`, \\, *, &, #
- be able to move the cursor
- handle commands with arguments

#### 3. Simple shell 0.2
Simple shell 0.1 +
- Handle command lines with arguments

#### 4. Simple shell 0.3
Simple shell 0.2 +
- Handle the `PATH`
- `fork` must not be called if the command doesn’t exis`

#### 5. Simple shell 0.4
Simple shell 0.3 +
- Implement the exit built-in, that exits the shell
- Usage: exit
- You don’t have to handle any argument to the built-in exit

#### 6. Simple shell 1.0
Simple shell 0.4 +
- Implement the env built-in, that prints the current environment

### General Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to

### Allowed functions
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (_ _xstat) (man 2 stat)
- lstat (_ _lxstat) (man 2 lstat)
- fstat (_ _fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

---

## Documentation

### Instalation

- Clone this repository: `https://github.com/obieuan/simple_shell`
- Change directories into the repository: `cd simple_shell`
- Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- Run the shell in interactive mode: `./hsh`
- Or run the shell in non-interactive mode: example `echo "Hey there!" | ./hsh`

---
## AUTHORS
Jaasiel G. López Mojica [GitHub](https://github.com/jasglm)
Gabriel Enrique Euan Valle [GitHub](https://github.com/obieuan)