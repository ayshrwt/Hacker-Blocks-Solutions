#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s[100007];

ll findAns(ll arr[], ll n, ll i)
{
    if(i > n)
        return 0;
    if(s[i]==-1){
        if(s[i+1]==-1)
            s[i+1] = findAns(arr, n, i+1);
        if(s[i+2]==-1)
            s[i+2] = findAns(arr, n, i+2);
        s[i] = max(i*arr[i] + s[i+2], s[i+1]);
    }
    return s[i];
}
int main() {
    ll n;
    cin>>n;
    ll arr[100007];
    memset(arr, 0, sizeof(arr));
    memset(s, -1, sizeof(s));
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        arr[x]++;
    }
    cout<<findAns(arr, n, 1);
    return 0;
}
