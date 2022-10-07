#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv){
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==0 || j==n-1 || (i>=n/2 && (i==j || i==n-j-1)))
            printf("*\t");
            else
            printf("\t");
        }
        printf("\n");
    }
   
}