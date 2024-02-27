/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dremisze <dremisze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:23:12 by dremisze          #+#    #+#             */
/*   Updated: 2024/02/27 14:42:42 by dremisze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int			ft_toupper(int i);
int			ft_tolower(int i);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
int			ft_strlen(const char *str);
int			ft_isprint(int i);
int			ft_isdigit(int i);
int			ft_isascii(int i);
int			ft_isalpha(int i);
int			ft_isalnum(int i);
int			ft_atoi(char *str);
char		*ft_strnstr(const char *big, const char *litlle, unsigned int len);
char		*ft_strcpy(char *dest, char *src);
void		ft_bzero(void *s, unsigned int n);
// ft_strrchr
// ft_strlcat
// ft_strchr
// ft_memset
// ft_memmove
// ft_memcpy
// ft_memchr

#endif 