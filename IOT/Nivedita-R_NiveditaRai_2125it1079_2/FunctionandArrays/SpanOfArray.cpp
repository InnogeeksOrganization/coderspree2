#include<iostream>
#include <cstdlib>
using namespace std;
int main() {
	int x, n,i,k,max,min;
	cin >>n;
	int *arr ;
	arr = (int*)malloc(n*sizeof(int));
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++)
	{
	    if(min>arr[i])
	    min = arr[i];
	    
	    if(max<arr[i])
	    max = arr[i];
	}
	k = max - min;
	cout << k;
	return 0;
}