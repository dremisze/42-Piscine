/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:54:52 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/27 21:48:43 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <strings.h>
#include <cstring>

#define MAGENTA "\x1b[35m"
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define RESET "\x1b[0m"

void test_ft_isdigit()
{
	int a = 'a';
	int original = isdigit(a) > 0;
	int my = ft_isdigit(a);
	printf(MAGENTA "ft_isdigit (%c) " RESET "%s\n", a, (original == my) ? GREEN "SUCCESS" : RED "FAIL");

	int b = '1';
	original = isdigit(b) > 0;
	my = ft_isdigit(b);
	printf(MAGENTA "ft_isdigit (%c) " RESET "%s\n", b, (original == my) ? GREEN "SUCCESS" : RED "FAIL");
}
void test_ft_atoi()
{
	char *a = "123";
	int original = atoi(a);
	int my = ft_atoi(a);
	printf(MAGENTA "ft_atoi (%s) " RESET "%s\n", a, (original == my) ? GREEN " SUCCESS" : RED "FAIL");
	printf("my = %d, original = %d\n", ft_atoi(a), atoi(a));

	a = "-123";
	original = atoi(a);
	my = ft_atoi(a);
	printf(MAGENTA "ft_atoi (%s) " RESET "%s\n", a, (original == my) ? GREEN " SUCCESS" : RED "FAIL");
	printf("my = %d, original = %d\n", ft_atoi(a), atoi(a));

	a = "123fa";
	original = atoi(a);
	my = ft_atoi(a);
	printf(MAGENTA "ft_atoi (%s) " RESET "%s\n", a, (original == my) ? GREEN " SUCCESS" : RED "FAIL");
	printf("my = %d, original = %d\n", ft_atoi(a), atoi(a));

	a = "  asd s-1da23da";
	original = atoi(a);
	my = ft_atoi(a);
	printf(MAGENTA "ft_atoi (%s) " RESET "%s\n", a, (original == my) ? GREEN " SUCCESS" : RED "FAIL");
	printf("my = %d, original = %d\n", ft_atoi(a), atoi(a));
	puts("");
}
void print_bytes_as_hex(char *str, size_t len)
{
	size_t i = 0;
	while (i < len)
	{
		printf("%02x ", (unsigned char)str[i]);
		i++;
	}
	puts("");
}

void test_ft_bzero()
{
	char str1[] = "abcdef";
	bzero(str1, 1);
	printf(MAGENTA "After bzero: " RESET "%s\n", str1);
	print_bytes_as_hex(str1, sizeof(str1));

	char str2[] = "abcdef";
	ft_bzero(str2, 2);
	printf(MAGENTA "After ft_bzero: " RESET "%s\n", str2);
	print_bytes_as_hex(str2, sizeof(str2));
	puts("");
}
void test_ft_isalnum()
{
	int a = 'a';
	int original = isalnum(a) > 0;
	int my = ft_isalnum(a);
	printf(MAGENTA "ft_isalnum (%c) " RESET "%s\n", a, (original == my) ? GREEN "SUCCESS" : RED "FAIL");

	int b = '1';
	original = isalnum(b) > 0;
	my = ft_isalnum(b);
	printf(MAGENTA "ft_isalnum (%c) " RESET "%s\n", b, (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_isalpha()
{
	int a = 'a';
	int original = isalpha(a) > 0;
	int my = ft_isalpha(a);
	printf(MAGENTA "ft_isalpha (%c) " RESET "%s\n", a, (original == my) ? GREEN "SUCCESS" : RED "FAIL");

	int b = '2';
	original = isalpha(b) > 0;
	my = ft_isalpha(b);
	printf(MAGENTA "ft_isalpha (%c) " RESET "%s\n", b, (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_isascii()
{
	int a = 'a';
	int original = __isascii(a);
	int my = ft_isascii(a);
	printf(MAGENTA "ft_isascii (%c) " RESET "%s\n", a, (original == my) ? GREEN "SUCCESS" : RED "FAIL");

	int b = '1';
	original = __isascii(b);
	my = ft_isascii(b);
	printf(MAGENTA "ft_isascii (%c) " RESET "%s\n", b, (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_isprint()
{
	int a = 'a';
	int original = isprint(a) > 0;
	int my = ft_isprint(a);
	printf(MAGENTA "ft_isprint (%c) " RESET "%s\n", a, (original == my) ? GREEN "SUCCESS" : RED "FAIL");

	int b = '2';
	original = isprint(b) > 0;
	my = ft_isprint(b);
	printf(MAGENTA "ft_isprint (%c) " RESET "%s\n", b, (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_memcpy()
{
	char tab1[] = "Hello";
	char tab2[] = "world";
	int a = 2;
	int original = memcpy 
}


int main()
{
	test_ft_isdigit();
	test_ft_atoi();
	test_ft_bzero();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_memcpy();

	return 0;
}