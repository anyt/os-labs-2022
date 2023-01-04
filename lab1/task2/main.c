#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  int pid = fork();
  if (pid == 0) {
    execvp(argv[1], argv + 1);

    return 1;
  } else {
    int status;
    waitpid(pid, &status, 0);

    if (WIFEXITED(status)) {
      int exit_code = WEXITSTATUS(status);
      if (exit_code == 0) {
        printf("Success!\n");
      } else {
        printf("Failed, exit code = %d\n", exit_code);
      }
    } else {
      printf("Failed\n");
    }
  }

  return 0;
}
