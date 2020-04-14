#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N,M,K,min=0;
	    cin>>N>>M>>K;
	    ll C[N][K];
	    ll ans[N];
	    map<ll,ll> s; 
	    for(int i=0;i<K;i++){
	        s[i]=0;
	    }
	    for(ll i=0;i<N;i++){
	        map<ll,vector<ll>> mp;
	  
	        for(ll j=0;j<K;j++){
	            cin>>C[i][j];
	            mp[C[i][j]].push_back(j);
	        }
	        min=LLONG_MAX;
	        for(auto p:s){
	            if(p.second < min){
	                min=p.second;
	            }
	        }
	        
	        ans[i]=1;
	        ll T=0,t;
	        for(auto p:mp){
	            t=0;
	            for(auto x:p.second){
	                if(s[x]==min){
	                    t++;
	                }
	            }
	            if(T<t){
	                ans[i]=p.first;
	                T=t;
	            }
	        }
	        for(int j:mp[ans[i]]){
	            s[j]++;
	        }
	        
	    }
	    for(int i=0;i<N;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}