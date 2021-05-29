#include<stdio.h>
#include<stdlib.h>
void initialize(int *ptr,int n){
    ptr = (int*) malloc(n * sizeof(int));
    for(int i=0;i<n;i++ ){
        printf("\nEnter number%d: ",i);
        scanf("%d",ptr+i);
    }
    free(ptr);
}
int largest_array(int *ptr,int n){
    int max=*(ptr);
    for(int i=1;i<n;i++){
        if(max<*(ptr+i)) max=*(ptr+i);
    }
    return max;
}
int main(){
    int *ptr,n;
    printf("Enter number e of array: "); scanf("%d",&n);    
    initialize(ptr,n);
    int max=largest_array(ptr,n);
    
    printf("\nThe largest element of array if %d",max);
    return 0;
}