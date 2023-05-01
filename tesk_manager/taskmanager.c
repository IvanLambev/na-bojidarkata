#include <stdio.h>
#include <string.h>
#include "processes.h"

extern Process processes[5];
extern int processescount;
extern long long createnewprocess(char name[]);
extern void stopprocess(long long id);

int main()
{
    while (1)
    {
        int option;
        printf("\n Chose: \n");
        printf("1.Create process\n");
        printf("2.List processes\n");
        printf("3.Stop process\n");
        printf("4.Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            char name[30];
            printf("Enter process name: ");
            scanf("%s", &name);
            if (strlen(name) > 30)
            {
                printf("(-)Process name too long!Please give it shorter name!(-) \n");
                break;
            }
            else if (createnewprocess(name) == 0)
            {
                printf("(-)Maximum number of active processes reached! Stop one and try again!(-)\n");
                break;
            }
            else
                break;
        case 2:
            for (int i = 0; i < processescount; i++)
                printf("Process ID: %lld; Process name: %s\n", processes[i].id, processes[i].name);
            break;
        case 3:
            printf(" Enter ID of process to stop: ");
            long long stop_id;
            scanf("%lld", &stop_id);
            stopprocess(stop_id);
            break;
        case 4:
            return 0;
        default:
            printf("(-)Invalid option!(-)\n");
            break;
        }
    }
    return 0;
}