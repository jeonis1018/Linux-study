#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    fd = creat("test2.txt", 0644);
    if (fd == -1) {
        perror("creat");
        return 1;
    }

    return 0;
}