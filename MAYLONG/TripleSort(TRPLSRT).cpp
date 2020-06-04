#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N,K;
	    cin>>N>>K;
	    ll P[N];
	    unordered_map<ll,ll> mp;
	    for(ll i=0;i<N;i++){
	        cin>>P[i];
	        mp[P[i]]=i;
	    }
	    vector<vector<ll>> v;
	    ll k=0;
	    ll x=0,y=0;
	    
	    
	    while(true){
	        x=y;
	        y=0;
	        for(ll i=0;i<N;i++){
    	        if(P[i]==i+1){
    	            y++;
    	            continue;
    	        }
    	        vector<ll> t(3);
    	        t[0] = mp[P[i]]+1;
    	        t[1] = mp[mp[i+1]+1]+1;
    	        t[2] = mp[i+1]+1;
    	        if(t[0] == t[1] || t[1] == t[2]){
    	            continue;
    	           // ll j=i+1;
    	           // while((j<N && P[j]==j+1) || j+1==t[2]){
    	           //     j++;
    	           // }
    	           // if(j>N-1){
    	           //     k=-1;
    	           //     break;
    	           // }
    	           // t[1]=j+1;
    	        }
    	        v.push_back(t);
    	        P[t[2]-1]=P[t[1]-1];
    	        mp[P[t[1]-1]] = mp[i+1];
    	        P[t[1]-1]=P[i];
    	        mp[P[i]] = t[1]-1;
    	        P[i]=i+1;
    	        mp[i+1] = i+1;
    	        k++;
    	    }
    	    if(y==N){
    	        break;
    	    }
    	    if(x==y){
    	        for(ll i=0;i<N;i++){
        	        if(P[i]==i+1){
        	            y++;
        	            continue;
        	        }
        	        vector<ll> t(3);
        	        t[0] = mp[P[i]]+1;
        	        t[1] = mp[mp[i+1]+1]+1;
        	        t[2] = mp[i+1]+1;
        	        if(t[0] == t[1] || t[1] == t[2]){
        	            ll j=i+1;
        	            while((j<N && P[j]==j+1) || j+1==t[2]){
        	                j++;
        	            }
        	            if(j>N-1){
        	                k=-1;
        	                break;
        	            }
        	            t[1]=j+1;
        	        }
        	        v.push_back(t);
        	        P[t[2]-1]=P[t[1]-1];
        	        mp[P[t[1]-1]] = mp[i+1];
        	        P[t[1]-1]=P[i];
        	        mp[P[i]] = t[1]-1;
        	        P[i]=i+1;
        	        mp[i+1] = i+1;
        	        k++;
        	    }
    	        break;
    	    }
	    }
	    
	    
	    
	    
	    
	    
	    if(k==-1 || k>K){
	        cout<<-1<<endl;
	        continue;
	    }
	    cout<<k<<endl;
	    for(ll i=0;i<k;i++){
	        cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<endl;
	    }

	}
	return 0;
}
