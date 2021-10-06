
// #include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
   while (*str && *str != (c))
       str++;
    if (*str == (c))
        return ((char *) str);
    return (0);
}

// int main(void)
// {
//     char *answer;
//     answer = ft_strrchr("hello abba", 97);
//     printf("%s", answer);
//     // char a = 97;
//     // printf("%c", a);
// }