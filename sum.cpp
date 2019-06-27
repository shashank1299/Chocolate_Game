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
		    int sum = 0;
          	for (int k=i; k<=j; k++)
          	    sum = sum + arr[k];
          		if (sum % 2 != 0)
                  		//cout<<sum<<"\n";
                  		result++;
		} 
	}

	return (result); 
}
 
int main() {
	int n;
	//cin>>n;
	scanf("%d",&n);
	int arr[n]={0};
	for(int i=0;i<n;i++){
	    //cin>>arr[i];
	    scanf("%d",&arr[i]);
	}
	/*for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<LaurelWin (arr, n);*/
	printf("%d",LaurelWin (arr, n));
	return 0;
}
