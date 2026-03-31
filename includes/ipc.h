#ifndef IPC_H
#define IPC_H

#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/shm.h>
#include <sys/sem.h>

typedef struct {
    long mtype;
    int plane_id;
    int operation;
    int fuel;
} message_t;

typedef struct {
    int runway_free;
    int weather_status;
} shared_data_t;

#endif