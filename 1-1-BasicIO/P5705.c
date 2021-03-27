#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a;
    scanf("%f",&a);
    int b = a * 10;
    a = 0;
    for(int i = 0;i < 4;i++){
        a += (b / 1000)%10;
        a /= 10;
        b *= 10;
    }
    a *= 10;
    printf("%.3f",a);
    return 0;
}