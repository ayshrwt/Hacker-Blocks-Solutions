#include<bits/stdc++.h>
using namespace std;

bool findAns(int arr[], int n, int m, int i)
{   
    if(i> n-1)
        return false;
    if(arr[i]%m==0)
        return true;
    
    return findAns(arr, n, m - (arr[i]%m),i+1) || findAns(arr, n,m ,i+1); 
	
}


int main(){
	int n, m; cin>>n>>m;
	int arr[1000000];
	for(int i=0; i<n; i++)
	    cin>>arr[i];
	if(findAns(arr, n, m, 0))
	    cout<<"YES";
	else
	    cout<<"NO";
}
