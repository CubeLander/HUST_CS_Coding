#include <stdio.h>
#include <math.h>

int main(void){
    long n,m;
    scanf("%ld %ld",&n,&m);
    long i = 1;
    while(pow(i,m) <= n){
        i++;
    }
    printf("%ld",i - 1);
    return 0;
}