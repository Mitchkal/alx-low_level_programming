#include "main.h"

/**
 * find_root - find square root of n, starting with smallest possible, 0
 * @n: the number
 * @root: check thes root
 * Return: natural square root, or -1 if not natural
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
* _sqrt_recursion - finds natural square root of number
* @n : the number
* Return: the find root function
*/

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
