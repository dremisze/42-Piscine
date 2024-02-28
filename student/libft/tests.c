/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:54:52 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/28 18:54:56 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>

#define MAGENTA "\x1b[35m"
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
/*
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
	int a = '\t';
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
	char src[10] = "123456789";
	char dest1[10];
	char dest2[10];
	memcpy(dest1, src, 10);
	ft_memcpy(dest2, src, 10);
	printf(MAGENTA "ft_memcpy " RESET "%s\n", (memcmp(dest1, dest2, 10) == 0) ? GREEN "SUCCESS" : RED "FAIL");
}
void test_ft_strlen()
{
	char str[20] = "123456789";
	int original = strlen(str);
	int my = ft_strlen(str);
	printf(MAGENTA "ft_strlen " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
}
void test_ft_strncmp()
{
	char str[7] = "Warsaw";
	char str2[7] = "Warsaw";
	int original = strncmp(str, str2, 7);
	int my = ft_strncmp(str, str2, 7);
	printf(MAGENTA "ft_strncmp " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");

	char str3[7] = "Warsaw";
	char str4[7] = "Warsaw";
	original = strncmp(str3, str4, 4);
	my = ft_strncmp(str3, str4, 4);
	printf(MAGENTA "ft_strncmp " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
}
void test_ft_strnstr()
{
	char str1[10] = "Warsaw";
	char str2[10] = "Warsaw";
	char result[10] = "Warsaw";
	printf(MAGENTA "ft_strnstr " RESET "%s\n", ((strcmp(result, ft_strnstr(str1, str2, 10))) == 0) ? GREEN "SUCCESS" : RED "FAIL");

}
void test_ft_tolower()
{
	int a = 'a';
	int original = tolower(a);
	int my = ft_tolower(a);
	printf(MAGENTA "ft_tolower " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
}
void test_ft_toupper()
{
	int a = 'a';
	int original = toupper(a);
	int my = ft_toupper(a);
	printf(MAGENTA "ft_toupper " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
}
void test_ft_strchr()
{
	char arr[] = "Hello";
	int a = 'a';
	char *orginal = strchr(arr, a);
	char *my = ft_strchr(arr, a);
	printf(MAGENTA "ft_strchr " RESET "%s\n", (orginal == my) ? GREEN "SUCCESS" : RED "FAIL"); 
}
*/void test_ft_strrchr()
{
	char tab[] = "Hello";
	int i = 'a';
	char *original = strrchr(tab, i);
	char *my = ft_strrchr(tab, i);
	printf(MAGENTA "ft_strrchr " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
}

int main()
{
	/*test_ft_isdigit();
	test_ft_atoi();
	test_ft_bzero();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_memcpy();
	// test_ft_memchr();
	// test_ft_memcmp();
	// test_ft_memset();
	// test_ft_strlcat();
	test_ft_strlen();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_tolower();
	test_ft_toupper();
	test_ft_strchr();*/
	test_ft_strrchr();
	
	

	return 0;
}
