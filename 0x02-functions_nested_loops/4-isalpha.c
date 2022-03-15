#include "main.h"
/**
 * _isalpha- check if the given ASCII code  is a letter, lowercase or uppercase
 * @c: a character in ASCII code
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
  for ((c >= 65 && c <= 90) || ( c >= 97 && c <= 122)) 
  {
	  return (1);
  }
  return (0);
}
