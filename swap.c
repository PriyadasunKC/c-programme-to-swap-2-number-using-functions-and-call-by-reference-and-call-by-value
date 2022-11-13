#include <stdio.h>

void pchange(int * a, int * b);
void change(int a, int b);

int main(){
    
    int n1,n2;
    int * ptr1 = &n1; int * ptr2 = &n2;
    
    scanf("%d %d",&n1,&n2);
    printf("Before Swap,\nn1 : %d and n2 : %d\n",n1,n2);
    
    pchange(ptr1,ptr2);
    change(n1,n2);
    
    return 0;
}

void pchange(int * a, int * b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nSwap by call by rererence method\n");
    printf("n1 : %d and n2 : %d",*a,*b);
    temp = *b;
    *b = *a;
    *a = temp;
}

void change(int a, int b){
    
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("\nSwap by call by value method\n");
    printf("n1 : %d and n2 : %d",a,b);
}
