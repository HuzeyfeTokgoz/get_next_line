#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int     fd;
    char    *line;
    int     i = 1;

    fd = open("test.txt", O_RDONLY | O_CREAT, 0777);
    
    // Sonsuz döngü: Satır NULL gelene kadar (dosya bitene kadar) dön
    while (1)
    {
        line = get_next_line(fd);
        if (line == NULL)
            break; // Dosya bitti, döngüden çık
        
        printf("%d. Satir: %s", i, line);
        
        free(line); // İşin bitince o satırı temizle
        i++;
    }
    close(fd);
    return (0);
}