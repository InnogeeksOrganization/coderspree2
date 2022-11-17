#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++) 
      {
        if (i == j)     
          printf("*\t");
        else            
          printf("\t");
      }
        cout<<endl;;   
    }
    getch();
  }