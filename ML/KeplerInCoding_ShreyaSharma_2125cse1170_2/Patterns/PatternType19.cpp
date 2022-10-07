#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv){
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==n/2 || j==n/2 || (i==0 && j<n/2) || (i==n-1 && j>n/2) || (j==0 && i>n/2) || (j==n-1 && i<n/2))
            printf("*\t");
            else
            printf("\t");
        }
        printf("\n");
    }
   
}