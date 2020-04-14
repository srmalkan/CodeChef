#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N;
	    cin>>N;
	    ll L[N];
	    vector<ll> v;
	    for(int i=0;i<N;i++){
	        cin>>L[i];
	        if(L[i]==1){
	            v.push_back(i+1);
	        }
	    }
	    ll i;
	    for(i=1;i<v.size();i++){
	        if(v[i]-v[i-1]<6){
	            break;
	        }
	    }
	    if(i==v.size()){
	        cout<<"YES"<<"\n";
	    }else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
