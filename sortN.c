#include<stdio.h>
int main()
{
        int n,i,j,s,a[30];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
         }
         for(i=0;i<n;++i)
         {
                for(j=i+1;j<n;++j)
                {
                       if(a[i]>a[j])
                       {
                                s=a[i];
                                a[i]=a[j];
                                a[j]=s;
                       }
                 }
                 
        }
       for(i=0;i<n;++i)
       {
                printf("%d\t",a[i]);
       }
}
