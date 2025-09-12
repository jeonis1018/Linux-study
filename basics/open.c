#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    fd = open("./test1.txt", O_RDONLY);

    if (fd == -1) {
        perror("open");
        return 1;
    }

    close(fd);
    return 0;
}