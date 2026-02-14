#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int     fd1, fd2, fd3;
    char    *line;

    fd1 = open("file1.txt", O_RDONLY);
    fd2 = open("file2.txt", O_RDONLY);
    fd3 = open("file3.txt", O_RDONLY);

    // 1. TUR: Her dosyadan 1. satırı oku
    line = get_next_line(fd1);
    printf("FD1: %s", line); // Beklenen: Dosya 1 - Satir 1
    free(line);

    line = get_next_line(fd2);
    printf("FD2: %s", line); // Beklenen: Dosya 2 - Satir A
    free(line);

    line = get_next_line(fd3);
    printf("FD3: %s", line); // Beklenen: Dosya 3 - Satir X
    free(line);

    // 2. TUR: Her dosyadan 2. satırı oku (Kaldığı yerden devam etmeli!)
    line = get_next_line(fd1);
    printf("FD1: %s", line); // Beklenen: Dosya 1 - Satir 2
    free(line);

    line = get_next_line(fd2);
    printf("FD2: %s", line); // Beklenen: Dosya 2 - Satir B
    free(line);

    line = get_next_line(fd3);
    printf("FD3: %s", line); // Beklenen: Dosya 3 - Satir Y
    free(line);

    close(fd1);
    close(fd2);
    close(fd3);
    return (0);
}