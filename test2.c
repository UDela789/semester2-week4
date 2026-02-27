#include <stdio.h>
#include <stdlib.h>

int main(){
    int *kp = calloc( 10, sizeof(int) );

    //printf("line 1: %d\n",&kp);
    printf("line 2: %d\n",*kp);
    printf("line 3: %d\n",kp[0]);
    //printf("line 4: %d\n",kp);

    return 0;
}