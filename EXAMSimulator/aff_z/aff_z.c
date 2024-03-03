#include <unistd.h>
void aff_z()
{
	write(1, "z\n", 2);
}

int main()
{
	aff_z();
	return 0;
}
