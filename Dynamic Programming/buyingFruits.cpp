#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[][3], int n)
{
	for(int i=n-2; i>=0; i--){
		arr[i][0] += min(arr[i+1][1], arr[i+1][2]);
		arr[i][1] += min(arr[i+1][0], arr[i+1][2]);
		arr[i][2] += min(arr[i+1][0], arr[i+1][1]);
	}
    return min(arr[0][0], min(arr[0][1], arr[0][2]));
}


int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[100003][3];
		for(int i=0; i<n; i++){
			for(int j=0; j<3; j++)
				cin>>arr[i][j];
		}
		cout<<findMin(arr, n)<<'\n';
	}	
}
