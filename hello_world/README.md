C - Hello, World
================
## 0. Preprocessor 
Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

<!-- Output -->

	julien@ubuntu:~/c/$ cat main.c 
	#include <stdio.h>

	/**
	 * main - Entry point
	 *
	 * Return: Always 0 (Success)
	 */
	int main(void)
	{
	    return (0);
	}
	julien@ubuntu:~/c/$ export CFILE=main.c
	julien@ubuntu:~/c/$ ./0-preprocessor 
	julien@ubuntu:~/c/$ tail c
	# 942 "/usr/include/stdio.h" 3 4

	# 2 "main.c" 2


	# 3 "main.c"
	int main(void)
	{
	 return (0);
	}
	julien@ubuntu:~/c/$ 

Filename: **0-preprocessor**
