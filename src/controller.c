#include "../include/common.h"
#include "../include/ipc.h"

int main() {
    int msgid = msgget(MSG_KEY, 0666 | IPC_CREAT);

    message_t msg;

    while (1) {
        msgrcv(msgid, &msg, sizeof(msg), 1, 0);

        printf("Controller received plane %d request\n", msg.plane_id);

        sleep(1);

        // Send permission
        msg.mtype = msg.plane_id;
        msgsnd(msgid, &msg, sizeof(msg), 0);

        printf("Runway assigned to plane %d\n", msg.plane_id);
    }
}