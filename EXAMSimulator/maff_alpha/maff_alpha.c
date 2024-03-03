#include <unistd.h>

void maff_alpha(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}
int main()
{
	maff_alpha();
	return (0);
}
