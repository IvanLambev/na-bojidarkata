#include <stdio.h>
#include "processes.h"
#include <limits.h>

Process processes[5];
int processescount = 0;

static long long nextprocessid()
{
    static long long id = 0;
    id++;
    if (id == LLONG_MAX)
        return 0;
    return id;
}

long long createnewprocess(char name[])
{
    if (processescount == 5)
        return 0;
    long long id = nextprocessid();
    processes[processescount].id = id;
    for (int i = 0; i < 30; i++)
    {
        processes[processescount].name[i] = name[i];
    }
    processescount++;
    return id;
}

void stopprocess(long long id)
{
    for (int i; i < processescount; i++)
    {
        if (processes[i].id == id)
        {
            for (int j = i; j < processescount - 1; j++)
                processes[j] = processes[j + 1];
            processescount--;
            return;
        }
    }
    return;
}