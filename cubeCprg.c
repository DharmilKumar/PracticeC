
//Prog 1
#include <stdio.h>
int main()
{
        int a,c,i;
        printf("Enter Value  :::: ");
        scanf("%d",&a);
        
        for(i=1;i<=a;i++){
            c=i*i*i;
            printf("Cube is %d \n",c);
        }
        return 0;
}