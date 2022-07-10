<head>
<h1>printf.c</h1>
</head>
<body>
<h3>In this project we are creating our own printf functions and manpage writen in the C programming language. The functions the we create will produce an output of what the format specifies.</h3>
<ul>
<li>Our repository includes our main functions.</li>
<li>The header file in which contains our prototypes and a general knowlegde of the c program that we have learned.</li>
<li>In C programming language, printf() function is used to print the (“character, string, float, integer, octal and hexadecimal values”) onto the output screen.</li>
<li>We have to include “stdio.h” file in the C program to make use of the printf() library functions in C language.</li>
</ul>
<h3>Formating options</h3>
<table>
<tr>
<th>flag</th>
<th>functions</th>
</tr>
<tr>
<td>%c</td>
<td>character</td>
</tr
<tr>
<td>%d</td>
<td>decimal (integer) number (base 10)</td>
</tr>
<td>%e</td>
<td>expotential floting-point number</td>
<tr>
<td>%f</td>
<td>flotating-point number</td>
</tr>
<tr>
<td>%i</td>
<td>integer</td>
</tr>
<tr>
<td>%o</td>
<td>octal number</td>
</tr>
<tr>
<td>%s</td>
<td>a string of characters</td>
</tr>
<tr>
<td>%u</td>
<td>unisgned decimal (integer) number</td>
</tr>
<tr>
<td>%x</td>
<td>number in hexadecimal</td>
</tr>
<tr>
<td>%%</td>
<td>print a percent sign</td>
</tr>
<tr>
<td>\%</td>
<td>print a percent sign</td>
</tr>
</table>
<h3>Printf special characters</h3>
<table>
<tr>
<td>\a</td>
<td>audible alert</td>
</tr>
<tr>
<td>\b</td>
<td>backspace</td>
</tr>
<tr>
<td>\f</td>
<td>form feed</td>
</tr>
<tr>
<td>\n</td>
<td>newline</td>
</tr>
<tr>
<td>\r</td>
<td>carriage return</td>
</tr>
<tr>
<td>\t</td>
<td>tab</td>
</tr>
<tr>
<td>\v</td>
<td>vertical tab</td>
</tr>
<tr>
<td>\\</td>
<td>backlash</td>
</tr>
</table>
<h3>Example</h3>
<h4>Printing the length of a string</h4>
 #include <stdio.h>
<br>
int main()
<br>
{
    char s[] = "The lenght of the string.";
<br>
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
<h4>Output</h4>
Length of the string: 25
<h3>Files and their description</h3>
<table>
<tr>
<th>File</th>
<th>Description</th>
</tr>
<tr>
<td>strlen.c</td>
<td>This function prints out the lenght of a string</td>
</tr>
</table>
<h3>Project requirements</h3>
<h4>General</h4>
<ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called main.h</li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the putchar fucntion for this project</li>
</ul>
</body>
