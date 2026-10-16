#include "libft.h"
#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

#include <stdio.h>
#include <fcntl.h>
int main()
    {
        int fd = open("test.txt", O_WRONLY | O_APPEND);
        ft_putchar_fd('A', fd);
        close(fd);
    }
