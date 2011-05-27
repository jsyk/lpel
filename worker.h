#ifndef _WORKER_H_
#define _WORKER_H_



#include "task.h"





typedef struct {
  int node;
  int do_print_workerinfo;
} workercfg_t;


typedef struct workerctx_t workerctx_t;





void LpelWorkerInit( int size, workercfg_t *cfg);
void LpelWorkerCleanup( void);
void LpelWorkerRunTask( lpel_task_t *t);


void LpelWorkerDispatcher( lpel_task_t *t);
void LpelWorkerSpawn(void);
void LpelWorkerTaskWakeup( lpel_task_t *by, lpel_task_t *whom);
void LpelWorkerTerminate(void);
workerctx_t *LpelWorkerGetContext(int id);
lpel_task_t *LpelWorkerCurrentTask(void);

#endif /* _WORKER_H_ */
