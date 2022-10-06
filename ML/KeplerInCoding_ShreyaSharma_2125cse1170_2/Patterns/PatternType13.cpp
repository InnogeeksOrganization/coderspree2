#include <cstdio>
#include <cmath>

int main()
{
    int n;
    scanf("%d",&n);
    printf("1\n1\t1\n");
    int a[n];
    a[0]=1;
    a[1]=1;
    int temp=1;

    for(int i=2; i<n; i++)
    {
        a[i]=1;
       for(int j=1; j<i; j++)
       {
           int m=a[j]; 
           a[j]=a[j]+temp;
           temp=m;
            
       }
       for(int j=0; j<=i; j++)
       {
            printf("%d\t",a[j]);
       }
       printf("\n");
    
    }
    return 0;
   
}