#include <stdio.h>

int main()
{
    int n,num,rem,res=0;
      scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        rem=num%10;
        res+=rem*rem*rem;
        num/=10;
    }
    if(res==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
