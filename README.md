This project has been created as part of the 42 curriculum by anasimi 

Description

The goal of this project is to to reproduce the behaviour of the standard function of printf() of the <stdio.h> library.
our function should handle the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign
the rest of the descriptions of the printf() like:
F,g,G,a,A,e,E,f,F,o,n are not coverd by this project.

Instruction

We should first make a simple main.c file that should contain a the main function in order to test the code and then add that in the make file and uncomment the commented section of the make file and comment the next line of the commented line. once the programme is compiled the we can then test our function and compare with the standard function of the stdio.h library.

Resources 

https://www.ibm.com/docs/fr/i/7.6.0?topic=lf-va-arg-va-copy-va-end-va-start-handle-variable-argument-list
https://koor.fr/C/cstdarg/va_list.wp
https://hackernoon.com/what-is-va_list-in-c-exploring-the-secrets-of-ft_printf
https://en.cppreference.com/w/c/variadic/va_list.html
https://www.geeksforgeeks.org/c/format-specifiers-in-c/
