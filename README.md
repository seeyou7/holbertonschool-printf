Printf Project
july/2023 C21 by Saima RIAZ and Younes SABER

________________________________________

Description
The printf project is the coding of a function named "_printf()" that imitates to "printf()". This C language function is a powerful device for printing numbers and other things stored in variables. Locatedin the libraries. You can find some of the basic features and functions in the manual 3 of “printf() .
_printf() is a function that performs formatted output conversion and print data, but what means that. Please, read about the variadic functions and go back later.
Requirements
All files were compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
This code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Its prototype was defined following:
int _printf(const char *format, ...);

Where format contains a string that will be print. This strings is composed by n arguments that will be replace by n tags defined inside the string.



Return value is the amount of chars printed (program successfully), see this tables:
     Specifier	            Output
      
         c	Character
         s	String of characters
         %	Character
         d	Decimal base10
         i	Signed decimal integer


File Functions

File:	Description
main.h:	Header file
Include all function prototypes
Include structure of specifiers
_printf.C:Project function: _printf
Start the variadic list.
Iterates string format of entry and check for a module symbol (%). If the symbol is found then check ifthe next char match with one of the valid specifiers in the structure using the auxiliar function to compare ( get_func), in that case the respective function of these format is called.
For the characters that doesn't match any of the formats the function ignores the module symbole and print it as a string.
In case that the module symbole is not found, print the each character normally.
functionsbis.c	Auxiliar functions
print_char: print character using list variable.
print_string: pint strings, if string is null it pirnts (null)
print_decimal: print decimal numbers base.

Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.
I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.
c : converts input into a character
s : converts input into a string
Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:
d : converts input into a base 10 integer
i : converts input into an integer
Just because it's in print doesn't mean it's the gospel

Create a man page for your function




![FLOWCHART](https://zupimages.net/up/23/30/pbpa.png)



