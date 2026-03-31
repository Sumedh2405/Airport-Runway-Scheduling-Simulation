#include "../include/common.h"
#include "../include/ipc.h"

int main() {
    int shmid = shmget(SHM_KEY, sizeof(shared_data_t), 0666 | IPC_CREAT);
    shared_data_t *data = (shared_data_t*) shmat(shmid, NULL, 0);

    while (1) {
        data->weather_status = rand() % 4;

        printf("Weather updated: %d\n", data->weather_status);

        sleep(5);
    }
}