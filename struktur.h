typedef void (*voidfunc)(void *);
typedef int (*intfunc)();

typedef struct task {
       voidfunc my_function;
       char data[1];
} task_t;

typedef struct task *taskp;

voidfunc my_function;


