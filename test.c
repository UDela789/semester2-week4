#include <stdio.h>

int main(){
    int a[10] = {5,1,2,3,4,5,6,7,8,9};

    printf("line 1: %d\n",*a);
    printf("line 2: %d\n",a[0]);
    //printf("line 3: %d\n",&a);
    //printf("line 4: %d\n",*a[0]);

    return 0;
}