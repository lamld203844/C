#include<stdio.h>
#include<conio.h>
#define f(x,y,i) for(int i=x;i<y;i++)
void sieve_eratosthenes(int *check,int n){
    f(2,n,i) check[i]=1;         //Step 1:Assign to all of numbers are prime
    f(2,n+1,i) {               //Step 2:If 
        if(check[i]) {
            for(int j=2;(i*j)<n;j++) check[i*j]=0;
        }
    }
}
int main(){
    int n;
    printf("Fill in n: "); scanf("%d",&n);
    int check[n];
    sieve_eratosthenes(check,n);
    f(2,n,i) {
        if(check[i]) printf("\t%d",i);
    }
    return 0;
    getch();
}
