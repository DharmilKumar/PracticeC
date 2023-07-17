#include<stdio.h>
int main() {

    int i,c,a;
    printf("Enter Number::: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        c=i*a;
        printf("%d x %d = %d \n",a,i,c);
    }
    return 0;
}