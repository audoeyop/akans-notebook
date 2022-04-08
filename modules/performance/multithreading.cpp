// https://www.softwaretestinghelp.com/multithreading-in-cpp/

// Compile: g++ multithreading.cpp -o multithreading -std=c++11
// Run ./multithreading

// https://www.quora.com/What-is-the-difference-between-the-thread-of-a-process-and-the-child-of-a-process-What-are-some-real-time-examples
// A process is an executing program. A process may have one or more threads.
//
// A child process is a process created by another process (the parent process). This technique is used in multitasking operating systems, and is sometimes called a sub-process or a sub-task. (A child process is a process too. Therefore a child process may have one or more threads too.)
//
// A thread is the basic unit to which the operating system allocates processor time. A thread can execute any part of the process code.
//
// The typical difference is that threads (of the same process) run in a shared memory space, while processes run in separate memory spaces.
//
// Examples:
//
// If you start Ms Word, it is a process. In Ms Word, you type some thing and it gets automatically saved. Now, you would have observed editing and saving happens in parallel. These are threads.
// If you start Paint, it is a process. In Paint it draw pictures by reading mouse movement. The program must give its full attention to the mouse input and draw at the same time. To do this two or more threads of the program will execute at the same time.
// [Advanced example] A JVM (Java Virtual Machine) runs in a single process and threads in a JVM share the heap belonging to that process. That is why several threads may access the same object. Threads share the heap and have their own stack space. This is how one thread’s invocation of a method and its local variables are kept thread safe from other threads. But the heap is not thread-safe and must be synchronized for thread safety.


#include <iostream>
#include <thread>
using namespace std;
#include <array>

#ifdef _WIN32
  #include <Windows.h>
#else
  #include <unistd.h>
#endif

void process_item(int seconds, int thread_number){

  cout << "Thread " << thread_number <<": Processing item for " << seconds << " seconds\n";

  // convert seconds to milliseconds
  int duration = seconds * 1000;

  // sleep function accepts time in milliseconds
  std::this_thread::sleep_for(std::chrono::milliseconds(duration));

  cout << "Thread " << thread_number <<": Finished Processing item for " << seconds << " seconds\n";

  return;
}

int main(int argc, char *argv[])
{

if(argc > 1){

  // begin processing task that takes 10 seconds
  process_item(10, 0);

  // begin processing task that takes 10 seconds
  process_item(2, 0);

  // begin processing task that takes 10 seconds
  process_item(7, 0);
}
else{

  // initialize thread1 to process a task that takes 10 seconds
  thread thread1(process_item, 10, 1);

  // initialize thread2 to process a task that takes 2 seconds
  thread thread2(process_item, 2, 2);

  // initialize thread3 to process a task that takes 7 seconds
  thread thread3(process_item, 7, 3);

  // Wait for thread1 to finish
  thread1.join();

  // Wait for thread2 to finish
  thread2.join();

  // Wait for thread3 to finish
  thread3.join();
}

return 0;
}
