#include "../include/common.h"
#include "../include/ipc.h"

void run_plane(int id) {
    int msgid = msgget(MSG_KEY, 0666);

    message_t msg;

    // Wait for permission
    msgrcv(msgid, &msg, sizeof(msg), id, 0);

    printf("Plane %d got runway access\n", id);

    sleep(3);

    printf("Plane %d completed operation\n", id);
}