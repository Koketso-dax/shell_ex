### Process creation and exercution
- We can run concurrent code across different processes
- This is archived by creating a number of child processes and writing logic for each one by using a conditional
set to exercute when we are in the correct process.
- `fork()` is used to create a new process these are created in multiples of 2.
- `pipe()` is used to transfer data between processes.
- `getppid()` returns the id of the parent process.
- getpid()` returns the current process id..
