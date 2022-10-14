#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv){
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || i==n-1 || i==j || i==n-j-1 || (i>n/2 && i/2>abs(n/2-j)))
            printf("*\t");
            else
            printf("\t");
        }
        printf("\n");
    }
   
}