#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struktur.h"
void fungsiku();

int main() {
    char *data = "Hello World";
    taskp my_task = (taskp) malloc(sizeof(task_t) + strlen(data));
    voidfunc my_func = fungsiku;
   // my_task->my_function = fungsiku;
   // strcpy(my_task->data,(char *)data);
   // my_task->my_function;
   my_func();
    return 0;
}
void fungsiku(char *args[]) {
    printf("Hello World\n");
}