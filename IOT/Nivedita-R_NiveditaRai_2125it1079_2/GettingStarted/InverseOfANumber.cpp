#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
  int d = 0 , lo,m,i,j,t,k=0;
  int *arr,*arr2;
  m = n;
  while(m != 0)
  {
   d++;
   m = m/10;
   }
   arr = (int*)malloc(d*sizeof(int));
    arr2 = (int*)malloc(d*sizeof(int));
   m = n;
    while(m!=0)
    {
        arr[k] = m % 10;
        m = m / 10; 
        k++;
    }
    
    for(j=0;j<d;j++)
    {
      int l = arr[j];
      arr2[l-1] = j+1;
    }
   
    for(j=d-1;j>=0;j--)
    cout << arr2[j] ;
    
}