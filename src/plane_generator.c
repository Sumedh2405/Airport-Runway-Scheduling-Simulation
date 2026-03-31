#include "../include/common.h"
#include "../include/ipc.h"

int main() {
    int msgid = msgget(MSG_KEY, 0666 | IPC_CREAT);

    while (1) {
        pid_t pid = fork();

        if (pid == 0) {
            int id = rand() % 1000;

            message_t msg;
            msg.mtype = 1;
            msg.plane_id = id;
            msg.operation = rand() % 2 + 1;
            msg.fuel = rand() % 100;

            msgsnd(msgid, &msg, sizeof(msg), 0);

            printf("Plane %d created\n", id);
            exit(0);
        }

        sleep(2);
    }
}