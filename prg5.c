#include<stdio.h>
int main(){
    int i,n;
    double term,sum,sign=1;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("sun is : %.3lf",sum);
    return 0;
}