#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int pid1, pid2, pid3, pid4, pid5, pid6, pid7;

    pid1 = getpid();
    pid2 = fork();

    if (pid2 == 0)
    {
        pid3 = fork();
        if (pid3 > 0)
        {
            sleep(5);
            exit(0);
        }
        else
        {
            sleep(5);
            exit(0);
        }
    }
    else
    {
        pid4 = fork();
        if (pid4 == 0)
        {
            pid5 = fork();
            if (pid5 > 0)
            {
                pid6 = fork();
                if (pid6 > 0)
                {
                    sleep(5);
                    exit(0);
                }
                else
                {
                    sleep(5);
                    exit(0);
                }
            }
            else
            {
                sleep(5);
                exit(0);
            }
        }
        else
        {
            pid7 = fork();
            if (pid7 > 0)
            {
                sleep(5);
                exit(0);
            }
            else
            {
                sleep(5);
                exit(0);
            }
        }
    }

    return 0;
}
