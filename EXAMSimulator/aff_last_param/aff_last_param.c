#include <unistd.h>

int mystr(char *str)
{
	int len = 0;
	{
		while (str[len] != '\0')
		{
			len++;
		}
	return len;
	}
}

int main(int argc, char *argv[])
{
	if (argc > 1) 
	{
		char *ostatni = argv[argc - 1];
		int length = mystr(ostatni);
		write(1, ostatni, length);
	}
	write(1, "\n", 1);
}
