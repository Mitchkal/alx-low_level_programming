/**
*print_line(int n) - prints a straight line
*@n: the length of the line
*
*/
void print_line(int n);
{
	int n = 1;
	int t = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		while (t <= n)
		{
			_putchar('_');
			t++;

		}
	}
	_putchar('\n');
	return (0);
}

