#include "../include/common.h"
#include <fcntl.h>

int main() {
    int fd = open("airport_log.txt", O_CREAT | O_WRONLY | O_APPEND, 0666);

    while (1) {
        char buffer[100];

        sprintf(buffer, "Log entry at %ld\n", time(NULL));

        write(fd, buffer, strlen(buffer));

        sleep(3);
    }

    close(fd);
}