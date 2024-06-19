#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struktur.h"

int task_loop(int a, int b, taskp task, int grainsize);
void task_function(void *data);

int task_loop(int a, int b, taskp task, int grainsize) {
    if (a+grainsize >= b) {
        voidfunc taskfunc = task->my_function;
        void *data = task->data;
        for(int lb=a;lb<b;lb++)
            taskfunc(data);
    } 
    else {
        int m = (a+b)/2;
        task_loop(a,m,task,grainsize);
        task_loop(m,b,task,grainsize);
    }
}

void task_function(void *data) {
    char *envdata = (char *) data;
    printf("%s\n",envdata);
}

int main() {
    char *data = "Hello World\n";
    taskp tugas = (taskp) malloc(sizeof(task_t) + strlen(data));
    tugas->my_function = task_function;
    strcpy(tugas->data,data);
    task_loop(0,10,tugas,1);
    return 0;    
}
