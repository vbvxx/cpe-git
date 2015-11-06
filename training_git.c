#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void message(){
    printf("SIGINT reçu\n");
    exit(1);
}

int main()
{
    signal(SIGINT,message);
    for(;;)
    {
        printf("infini 1\n");
        printf("infini 2\n");

    }
    return 0;
}
