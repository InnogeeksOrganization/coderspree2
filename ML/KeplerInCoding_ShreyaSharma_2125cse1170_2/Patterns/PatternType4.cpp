#include <cstdio>

int main(int argc, char **argv){
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("\t");
        }
        for(int j=0; j<n-i; j++)
        {
            printf("*\t");
        }
        
        printf("\n");
    }
   
}