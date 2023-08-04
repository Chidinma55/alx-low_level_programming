#include "main.h"
/**
 * _isalpha - program checks for alphabetics character
 * @c: the character to be checked
 * Return: 1 if c is a letter and returns 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
