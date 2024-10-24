#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// prototipos das funçoes 

int	ft_isalnum(int c);
int	ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_toupper(char c);
int	ft_tolower(char c);
int	ft_isdigit(int i);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int,char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_bzero(void *s, size_t n);







#endif