#include "../include/common.h"

int main() {
    pid_t controller, generator, weather, logger;

    controller = fork();
    if (controller == 0) {
        execl("./controller", "controller", NULL);
    }

    generator = fork();
    if (generator == 0) {
        execl("./plane_generator", "plane_generator", NULL);
    }

    weather = fork();
    if (weather == 0) {
        execl("./weather", "weather", NULL);
    }

    logger = fork();
    if (logger == 0) {
        execl("./logger", "logger", NULL);
    }

    // Wait for children
    wait(NULL);
    return 0;
}