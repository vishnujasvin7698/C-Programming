#include<stdio.h> 
int main()
{
int m1,m2,rem,i;
scanf("%d",&m1);
scanf("%d",&m2);
    for(i=m1; i<=m2; i++)
    {
        rem = i % 2;
        if(rem == 0)
    
        printf("\n  %d",i);
    
    }

return 0; 
} 


