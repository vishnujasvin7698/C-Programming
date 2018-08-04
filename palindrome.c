    #include<stdio.h>
    int main()
     {
    int num,r,sum=0,temp;
    scanf("%d",&num);
    temp=num;
        while(num)
        {
         r=num%10;
         num=num/10;
         sum=sum*10+r;
        }
        if(temp==sum)
             printf("yes");
        else
             printf("no");
     
        return 0;
    }


