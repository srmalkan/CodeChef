#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll X,K;
	    cin>>X>>K;
	    map<ll,ll> mp;
	    ll totalCount=0;
	    ll n=X;
	    while(n%2==0){
	        totalCount++;
	        mp[2]++;
	        n=n/2;
	    }
	    for(ll i=3;i<=sqrt(n);i=i+2){
	        while(n%i==0){
	            totalCount++;
	            mp[i]++;
	            n=n/i;
	        }
	    }
	    if(n>2){
	        totalCount++;
	        mp[n]++;
	    }
	    if(K>totalCount){
	        cout<<"0"<<"\n";
	    }else{
	        cout<<"1"<<"\n";
	    }
	    
	}
	return 0;
}
