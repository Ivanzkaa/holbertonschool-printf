<head>
<h1>Printf</h1>
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
int main()
{
    char s[] = "The length of the string";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("The length of the string: %d", i);
    return (0);
}
<h4>Output</h4>
The length of the string: 24
<h3>Prototype</h3>
int _ printf(const char * format, ...);
<h3>Compilation</h3>
This is what we will use to compile the code
<br>
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format * .c
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
<tr>
<td>man_3_printf.c</td>
<td>Manpage for our functions</td>
</tr>
<tr>
<td>std_out.c</td>
<td>Standard output</td>
</tr>
</table>
<h3>Collaborators</h3>
<ul>
<li>Ivanzka Rodriguez</li>
<li>Jimmy Hernandez</li>
</ul>
</body>
