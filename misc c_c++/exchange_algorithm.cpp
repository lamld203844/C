#include<stdio.h>

void swap_1(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int a,b;
    printf("Nhap a: ");scanf("%d",&a);
    printf("\nNhap b: ");scanf("%d",&b);
    swap_1(&a,&b);
    printf("\n Alter swap\n a = %d\tb = %d",a,b);
    return 0;
}