#include<stdio.h>
#include<math.h>
int main()
{
        int a[30];
        int n,t,i,min;
        scanf("%d",&n); 
        scanf("%d",&t);
        for(i=1;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        min=a[0];
        for(i=1;i<n;i++)
        {
              if(a[i]<min)
              {
                min=a[i];
              }
              
        }
        printf("%d",min);
        return 0;
}
