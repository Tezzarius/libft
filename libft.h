/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:56:49 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/22 17:39:11 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_dll
{
	int				content;
	struct s_dll	*prev;
	struct s_dll	*next;
}	t_dll;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);

char	**ft_split(char const *s, char c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_printf(const char *conv, ...);
int		ft_printf_char(int c);
int		ft_printf_hex(unsigned long n, const char format);
int		ft_printf_number(int n);
int		ft_printf_pointer(void *ptr);
int		ft_printf_string(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

void	ft_dlladd_beginning(t_dll **tail, int value);
void	ft_dlladd_end(t_dll **head, int value);
void	ft_dlldeallocate(t_dll **tail, t_dll **head);
t_dll	*ft_dllfind_node_rec(t_dll *node, int value);
t_dll	*ft_dllfind_node(t_dll *tail, int value);
void	ft_dllinit(t_dll **tail, t_dll **head, int value);
void	ft_dllinsert_after(t_dll *node, int value);
void	ft_dlloutput_backward(t_dll *head);
void	ft_dlloutput_forward(t_dll *tail);
void	ft_dllremove_node(t_dll *node);
void	ft_dllreverse(t_dll **tail, t_dll **head);

char	*get_next_line(int fd);

#endif
