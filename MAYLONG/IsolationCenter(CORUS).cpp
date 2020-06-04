#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N,Q;
    	cin>>N;
    	cin>>Q;
    	string s;
    	cin>>s;
    	map<char,ll> mp;
    	for(char x:s){
    	    mp[x]++;
    	}
    	while(Q--){
    	    ll C,ans=0;
    	    cin>>C;
    	    for(auto p:mp){
    	        if(p.second>C)
    	            ans+=p.second-C;
    	    }
    	    cout<<ans<<endl;
    	}
	}
	return 0;
}
