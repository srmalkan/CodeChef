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
	    ll D[N];
	    for(int i=0;i<N;i++){
	        cin>>D[i];
	    }
	    vector<ll> v;
	    v.push_back(0);
	    for(int i=1;i<N;i++){
	        if(D[i]-D[i-1]>2){
	            v.push_back(i);
	        }
	    }
	    v.push_back(N);
	    vector<ll> ans;
	    for(int i=1;i<v.size();i++){
	        ans.push_back(v[i]-v[i-1]);
	    }
	    cout<<*min_element(ans.begin(),ans.end())<<" "<<*max_element(ans.begin(),ans.end())<<endl;
	    
	}
	return 0;
}
