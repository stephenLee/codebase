// Function call: pthread_create - create a new thread
// int pthread_create(pthread_t * thread, const pthread_attr_t * attr, void * (*start_routine) (void *), void *arg);
// attr set to NULL if default thread attributes are used.
// start_routine: point to the function to be threaded.
// arg: point to argument of function.

// Function call: pthread_join - wait for termination of another thread
// int pthread_join(pthread_t th, void **thread_return);

// Function call: pthread_exit - terminate the calling thread
// void pthread_exit(void *retval)


// Thread Synchronization
// mutexes - Mutual exclusion lock.
// pthread_mutex_lock(): acquire a lock on the specified mutex variable.
// pthread_mutex_unlock(): unlock a mutex variable.

// pthread_self() - return identifier of current thread

#include <stdio.h>
#include <pthread.h>

const int NTHREADS = 10;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void *thread_function(void *);
int counter = 0;

int main() {
  pthread_t thread_id[NTHREADS];
  int i, j;
  
  for (i=0; i < NTHREADS; i++) {
    pthread_create(&thread_id[i], NULL, thread_function, NULL);
  }

  for (j=0; j < NTHREADS; j++) {
    pthread_join(thread_id[j], NULL);
  }
  printf("Final counter variable: %d\n", counter);
  return 0;
}

void *thread_function(void *dummyPtr) {
  printf("Thread number %ld\n", pthread_self());
  pthread_mutex_lock(&mutex);
  counter++;
  pthread_mutex_unlock(&mutex);
}


