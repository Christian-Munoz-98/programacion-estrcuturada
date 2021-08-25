// a++ -----> a = a+1
// a-- -----> a = a-1

#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=9,b=9;
    printf("a = %i, b = %i\n",a,b);

    a++;
    b++;

    printf("a = %i, b= %i\n",a,b);

    return 0;
}
