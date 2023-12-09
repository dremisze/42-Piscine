#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		i = 0;
		while (argv[1][i] != '\0')
		{
			char ch = argv[1][i];
			int repeat = 1;
			if (ch >= 'a' && ch <= 'z')
			{
				repeat = ch - 'a' + 1;
			}
			else if (ch >= 'A' && ch <= 'Z')
			{
				repeat = ch - 'A' + 1;
			}
			int j;
			j = 0;
			while (j < repeat)
			{
				write(1, &ch, 1);
				j++;
			}
			i++;
		}
	}
	write(1,"\n", 1);
	return 0;
}
