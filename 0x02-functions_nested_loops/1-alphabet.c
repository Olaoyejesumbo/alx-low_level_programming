#include <stdio.h>
/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++
}
putchar('\n');
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
print_alphabet();
return (0);
}


