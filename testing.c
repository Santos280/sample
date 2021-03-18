
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,count=0;
        int count2=0;
        long long int b;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%lld",&b);
            if(b%2==1)
            count+=1;
            else
            count2=1;
        }
        if(count%2==0)
        printf("1\n");
        else if(count==1 && count2==1)
        printf("1\n");
        else if(count2==0)
        printf("2\n");
        else
        printf("1\n");
    }
}
/*
int main()
{
	int n,a[1000];
    scanf("%d",&n);
    n+=1;
    while(1)
    {
        if(n%3==0)
        n+=1;
        int a[100];
        int num=n,count=0;
        while(num!=0)
        {
            a[count]=num%10;
            num/=10;
            count+=1;
        }
        int flag=0;
        for(int i=0;i<count;i++)
        {
            if(a[i]==3)
            {
            flag=1;
            a[i]+=1;
            int j=i-1;
            while(j>=0)
            {
                a[j]=0;
                j--;
            }
            while(a[i]==10)
            {
                a[i]=0;
                a[i+1]=a[i+1]+1;
                i++;
                if(i>count)
                count=i;
            }
            break;
            }
        }
        n=0;
        for(int i=count-1;i>=0;i--)
        {
           n=n+a[i];
           n=n*10;
        }
        n=n/10;
        if(n%3!=0)
        break;
    }
    printf("%d",n);
return 0;

    }
*/
