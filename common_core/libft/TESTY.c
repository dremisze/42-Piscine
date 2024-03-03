/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TESTY.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:54:52 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/03 13:45:57 by dremisze         ###   ########.fr       */
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
	puts("");
}
void test_ft_strlen()
{
	char str[20] = "123456789";
	int original = strlen(str);
	int my = ft_strlen(str);
	printf(MAGENTA "ft_strlen " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_strncmp()
{
	char str[7] = {0x80, 0};
	char str2[7] = {0x81, 0};
	int original = strncmp(str, str2, 2);
	int my = ft_strncmp(str, str2, 2);
	printf(MAGENTA "ft_strncmp " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");

	char str3[10] = "Warsa\\0w";
	char str4[10] = "Warsa\\2w";
	original = strncmp(str3, str4, 10);
	my = ft_strncmp(str3, str4, 10);
	printf(MAGENTA "ft_strncmp " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_strnstr()
{
	char str1[10] = "Warsaw";
	char str2[10] = "Warsaw";
	char result[10] = "Warsaw";
	printf(MAGENTA "ft_strnstr " RESET "%s\n", strcmp(result, ft_strnstr(str1, str2, 10)) == 0 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");

}
void test_ft_tolower()
{
	int a = 'a';
	int original = tolower(a);
	int my = ft_tolower(a);
	printf(MAGENTA "ft_tolower " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_toupper()
{
	int a = 'a';
	int original = toupper(a);
	int my = ft_toupper(a);
	printf(MAGENTA "ft_toupper " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
*/
void test_ft_strchr()
{
	char arr[] = "'\0'";
	int a = 'a';
	char *orginal = strchr(arr, a);
	char *my = ft_strchr(arr, a);
	printf(MAGENTA "ft_strchr " RESET "%s\n", (orginal == my) ? GREEN "SUCCESS" : RED "FAIL"); 
	puts("");

	
	char str1[] = "Hello, World!";
	char ch1 = 'W';
	char *original1 = strchr(str1, ch1);
	char *mine1 = ft_strchr(str1, ch1);
	printf(MAGENTA "ft_strchr Test 1: " RESET "%s\n", (original1 == mine1) ? GREEN "SUCCESS" : RED "FAIL"); 
	puts("");

	char str2[] = "Hello, World!";
	char ch2 = 'x';
	char *original2 = strchr(str2, ch2);
	char *mine2 = ft_strchr(str2, ch2);
	printf(MAGENTA "ft_strchr Test 2: " RESET "%s\n", (original2 == mine2) ? GREEN "SUCCESS" : RED "FAIL"); 
	puts("");

	char str3[] = "Hello, World!";
	char ch3 = 'H';
	char *original3 = strchr(str3, ch3);
	char *mine3 = ft_strchr(str3, ch3);
	printf(MAGENTA "ft_strchr Test 3: " RESET "%s\n", (original3 == mine3) ? GREEN "SUCCESS" : RED "FAIL"); 
	puts("");

	char str4[] = "Hello, World!";
	char ch4 = '\0';
	char *original4 = strchr(str4, ch4);
	char *mine4 = ft_strchr(str4, ch4);
	printf(MAGENTA "ft_strchr Test 4: " RESET "%s\n", (original4 == mine4) ? GREEN "SUCCESS" : RED "FAIL"); 
	puts("");

	char str5[] = "";
	char ch5 = 'H';
	char *original5 = strchr(str5, ch5);
	char *mine5 = ft_strchr(str5, ch5);
	printf(MAGENTA "ft_strchr Test 5: " RESET "%s\n", (original5 == mine5) ? GREEN "SUCCESS" : RED "FAIL"); 
	puts("");
}
/*
void test_ft_strrchr()
{
	char tab[] = "Hello";
	int i = 'a';
	char *original = strrchr(tab, i);
	char *my = ft_strrchr(tab, i);
	printf(MAGENTA "ft_strrchr " RESET "%s\n", (original == my) ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void	test_ft_strlcat()
{
	size_t i = 30;
	char dtab1[30] = "42 ";
	char stab2[7] = "Warsaw";
	size_t dtab_stab = strlen(dtab1) + strlen(stab2);
	printf(MAGENTA "ft_strlcat " RESET "%s\n", ft_strlcat(dtab1, stab2, i) == dtab_stab ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
	
	i = 6;
	char dtab3[30] = "42 ";
	char stab4[30] = "Warsaw";
	size_t dtab_stab2 = strlen(dtab3) + strlen(stab4);
	printf(MAGENTA "ft_strlcat " RESET "%s\n", ft_strlcat(dtab3, stab4, i) == dtab_stab2 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
void test_ft_memset()
{
	int j = 4, i = 4;
	int k = 'x', x = 'x';
	char str[10] = "42 Warsaw";
	char str2[10] = "42 Warsaw";
	printf(MAGENTA "ft_memset " RESET "%s\n", memcmp(memset(str, x, i), ft_memset(str2, k, j), i) == 0 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");

}
void test_ft_memmove()
{
	char src[10] = "42 Warsaw";
	char dest1[10] = "42 Warsaw";
	char dest2[10] = "42 Warsaw";
	size_t i = 4;
	memmove(dest1, src, i);
	ft_memmove(dest2, src, i);
	printf(MAGENTA "ft_memmove " RESET "%s\n", memcmp(dest1, dest2, 10) == 0 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
	
	char overlap_src[15] = "Hello, World!";
	char overlap_dst1[15] = "Hello, World!";
	char overlap_dst2[15] = "Hello, World!";
	size_t n_overlap1 = 5;
	memmove(overlap_dst1 + 2 , overlap_src + 4, n_overlap1);
	ft_memmove(overlap_dst2 + 2 , overlap_src + 4, n_overlap1);
	printf(MAGENTA "ft_memmove " RESET "%s\n", memcmp(overlap_dst1, overlap_dst2, 15) == 0 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");

	char overlap_src2[15] = "Goodbye, Earth!";
	char dest_overlap3[15] = "Goodbye, Earth!";
	char dest_overlap4[15] = "Goodbye, Earth!";
	size_t n_overlap2 = 5;
	memmove(dest_overlap3 + 4, overlap_src2 + 2, n_overlap2);
	ft_memmove(dest_overlap4 + 4, overlap_src2 + 2, n_overlap2);
	printf(MAGENTA "ft_memmove " RESET "%s\n", memcmp(dest_overlap3, dest_overlap4, 15) == 0 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");

	char big_src[1000];
	memset(big_src, 'A', sizeof(big_src));
	char big_dest1[1000];
	char big_dest2[1000];
	size_t big_len = 1000;
	memmove(big_dest1, big_src, big_len);
	ft_memmove(big_dest2, big_src, big_len);
	printf(MAGENTA "ft_memmove " RESET "%s\n", memcmp(big_dest1, big_dest2, big_len) == 0 ? GREEN "SUCCESS" : RED "FAIL");
	puts("");
}
*/

int main()
{
	
	// test_ft_isdigit();
	// test_ft_atoi();
	// test_ft_bzero();
	// test_ft_isalnum();
	// test_ft_isalpha();
	// test_ft_isascii();
	// test_ft_isprint();
	// test_ft_memcpy();
	// test_ft_memchr();
	// test_ft_memcmp();
	// ft_calloc
	// ft_strdup
	// ft_strlcpy;
	// test_ft_strlen();
	// test_ft_strncmp();
	// test_ft_strnstr();
	// test_ft_tolower();
	// test_ft_toupper();
	test_ft_strchr();
	// test_ft_strrchr();
	// test_ft_strlcat();
	// test_ft_memset();
	// test_ft_memmove();
	// ADDITIONAL FUNCTION
	// ft_substr
	// ft_strjoin
	// ft_strtrim
	// ft_split
	// ft_itoa
	// ft_strmapi
	// ft_striteri
	// ft_putchar_fd
	// ft_putstr_fd
	// ft_putnbr_fd
	// BONUS
	// ft_lstnew
	// ft_lstadd_front
	// ft_lstsize
	// ft_lstlast
	// ft_lstadd_back
	// ft_lstdelone
	// ft_lstclear
	// ft_lstiter
	// ft_lstmap


	return 0;
}
