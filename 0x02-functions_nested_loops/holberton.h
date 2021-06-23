int print_holberton()
{
	char holberton[9] = {"H","o","l","b","e","r","t","o","n"};
	for (int i=0;i<10;i++)
	{
		_putchar(holberton[i]);
	}
	return (0);
}

void print_alphabet(void)
{
	for (int i=97;i<123;i++)
	{
		_putchar("%c", i);
	}
}

void print_alphabet_x10(void)
{
	do {
		int r=0;
		for (int i=97;i<123;i++)
		{
			_putchar("%c", i);
		}
		r++;
	} while (r<11)
}

int _islower(int c)
{
	char a;
	c='a';
	if (123>c>96)
	{
		return (1);
	}
	else if (91>c>64)
	{
		return (0);
	}
	else
	{
		return (2);
	}
}

int _isalpha(int c)
{
	char a;
	c='a';
	if (123>c>64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int print_sign(int n)
{
	if (n>0)
	{
		_putchar("+");
		return (1);
	}
	else if (n=0)
	{
		_putchar("0");
		return (0);
	}
	else (n<0)
	{
		_putchar("-");
		return (-1);
	}
}

int _abs(int n)
{
	int a;
	if (n>0)
	{
		a = n;
	}
	else if (n=0)
	{
		a = 0;
	}
	else (n<0)
	{
		a = -n;
	}
	return (a);
}

int print_last_digit(int n)
{
	int temp;
	if (n<=9)
	        temp = n;
	else
	{
		temp = n % 100;
		if (temp <= 9)
		{
			return (temp);
		}
	}
	return (temp);
}

void jack_bauer(void)
{
	for (int hr = 0; hr<24; hr++)
	{
		for (int min = 0; min<60; min++)
		{
			_putchar("%d", hr);
			_putchar(";");
			_putchar("%d", min);
			_putchar("\n");
		}
	}
}

void times_table(void)
{
	for (int n=0; n<10; n++)
	{
		_putchar("/n");
		for (int m=0; m<10; m++)
		{
			int temp = n * m;
		}
	}
}

int add(int a, int b)
{
	int result = a + b;
	return (result);
}

void print_to_98(int n)
{
	for (int m = n; m<99; m++)
	{
		_putchar("%d" , m);
		_putchar(" ");
	}
}
