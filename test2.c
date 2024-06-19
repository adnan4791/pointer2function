#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struktur.h"
void fungsiku();

int main() {
    char *data = "Hello World";
    taskp my_task = (taskp) malloc(sizeof(task_t) + strlen(data) + 8);
    my_task->my_function = fungsiku;
    strcpy(my_task->data,data);
    //my_task->data =  data;
    my_task->my_function(data);
    printf("%d\n",(int)sizeof(my_task));
    return 0;
}
void fungsiku(void *args) {
    taskp my_task = (taskp) args;
    printf("%s\n",my_task->data);
}