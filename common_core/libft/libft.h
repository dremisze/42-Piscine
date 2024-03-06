/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:23:12 by dremisze          #+#    #+#             */
/*   Updated: 2024/03/06 19:01:53 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
/*
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

int			ft_toupper(int i);
int			ft_tolower(int i);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
size_t		ft_strlen(const char *str);
int			ft_isprint(int i);
int			ft_isdigit(int i);
int			ft_isascii(int i);
int			ft_isalpha(int i);
int			ft_isalnum(int i);
int			ft_atoi(char *str);
char		*ft_strnstr(const char *big, const char *litlle, unsigned int len);
char		*ft_strcpy(char *dest, char *src);
void		ft_bzero(void *s, size_t n);
char		*ft_strrchr(const char *str, int ch);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *str, int z);
void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
void		*memchr(const void *s, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t n);
// ft_memcmp
// ft_calloc
// ft_strdup
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

#endif 