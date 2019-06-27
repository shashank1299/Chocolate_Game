#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int LaurelWin(int arr[], int n) 
{ 
	int result = 0; 
	for (int i=0; i<=n-1; i++)
	{
	    for (int j=i+1; j<=n-1; j++) 
		{
		    int nimsum = 0;
          	for (int k=i; k<=j; k++)
          	    nimsum = nimsum ^ arr[k];
          		if (nimsum !=0){
          		    result++;
          		}
		} 
	}

	return (result); 
}
 
int main() {
	int n;
	scanf("%d",&n);
	int arr[n]={0};
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	printf("%d",LaurelWin (arr, n));
	return 0;
}
