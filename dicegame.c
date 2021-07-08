#include <stdio.h>
#include <stdlib.h>

int main(){
    int die, total=0;
    
    printf("Rolling the dice...\n");
    die = rand()%6+1;
    printf("Die 1:%d\n", die);
    total+=die;

    die = rand()%6+1;
    printf("Die 2:%d\n", die);
    total+=die;

    printf("Total value:%d\n", total);

    return 0;
}