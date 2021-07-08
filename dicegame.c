#include <stdio.h>
#include <stdlib.h>

int main(){
    int die, total=0;
    char name[30];
    
    printf("What is your name?\n>");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    
    printf("Rolling the dice...\n");
    die = rand()%6+1;
    printf("Die 1:%d\n", die);
    total+=die;

    die = rand()%6+1;
    printf("Die 2:%d\n", die);
    total+=die;

    printf("Total value:%d\n", total);

    if(total>7){
        printf("%s won!\n", name);
    }else{
        printf("%s lost!\n", name);
    }

    return 0;
}