/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:02:04 by jchen             #+#    #+#             */
/*   Updated: 2016/04/15 18:45:22 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstcountnb(t_list *lst, int nb);
void				ft_lstprint(t_list *lst);
void				ft_lstpushnb(t_list **lst, int nb);
void				ft_strpush(char **str, char c);
char				*ft_mallocncopy(const char *str, unsigned int size);
int					ft_cut_str(char **str, char c);
t_list				*ft_lststrsplit(char *str, char c);
int					ft_lstcount(t_list *lst);
void				ft_lstpush(t_list **alst, t_list *news);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *news);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char*));
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putchar(char c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int n);
char				*ft_itoa_base(unsigned int n, int maj);
char				*ft_itoa_base_p(void *n, int maj);
char				*ft_itoa_base_oct(unsigned int n);
char				*ft_itoa_long(long int n);
char				*ft_itoa_unsigned(unsigned int n);
char				*ft_itoa_unsigned_long(unsigned long long int n);
char				*ft_itoa_base_l(long unsigned int n, int maj);
char				*ft_itoa_base_oct_l(long unsigned int n);
char				*ft_itoa_base_char(unsigned char n, int maj);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_atoi(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strnstr(const char *src1, const char *src2, size_t len);
char				*ft_strstr(const char *src1, const char *src2);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcpy(char *dst, const char *src);
void				ft_putstr(const char *str);
size_t				ft_strlen(const char *str);
size_t				ft_strlen_wchar(wchar_t *str);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strdup(const char *s1);

#endif
