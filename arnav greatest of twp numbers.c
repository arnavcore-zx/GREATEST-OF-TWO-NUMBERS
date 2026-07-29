#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of First Number:");
    scanf("%i",&a);
    printf("Enter the value of Second Number:");
    scanf("%i",&b);
    if (a>b){
        printf("The Greatest Number is:%i",a);
    }
    else {
        printf("The Greatest Number is:%i",b);
    }
    return 0;
}
