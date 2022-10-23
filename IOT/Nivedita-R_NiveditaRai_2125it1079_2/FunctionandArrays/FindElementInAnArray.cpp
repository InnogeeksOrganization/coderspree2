#include<iostream>
#include <cstdlib>
using namespace std;
int main() {
	int x, n,i,j,el,k=-1;
	cin >>n;
	int *arr ;
	arr = (int*)malloc(n*sizeof(int));
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cin >> el;
	for(i=0;i<n;i++)
	{
	    if(arr[i]==el)
	    k=i;
	}
	cout<<k;
}