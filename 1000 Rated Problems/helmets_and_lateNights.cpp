#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll i,j,k,n,m,t,a[100500],b[100500],res;
 
void coderAnsh() {
    map<ll,ll> mp;
    cin>>n>>m; res=m;
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=n;i++){
        cin>>b[i];
        mp[b[i]]+=a[i];
    }
    n--;
    
    for(auto [x,y]:mp){
        k=min(y,n); n-=k;
        res+=min(m,x)*k;
    }
    cout<<res<<'\n';
}

int main(){
 
	cin>>t;
	while(t--){
		coderAnsh();
        cout << '\n';
	}
}
