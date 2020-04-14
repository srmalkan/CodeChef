#include <iostream>
#include <vector>
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
	    vector<ll> A(N),B(N);
	    for(ll i=0;i<N;i++){
	        cin>>A[i];
	    }
	    for(ll i=0;i<N;i++){
	        cin>>B[i];
	    }
	    sort(A.begin(),A.end());
	    sort(B.begin(),B.end());
	    ll sum = 0;
	    for(ll i=0;i<N;i++){
	        if(A[i]<B[i]){
	            sum+=A[i];
	        }else{
	            sum+=B[i];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
