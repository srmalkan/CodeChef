#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define mod 1000000007 
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N;
	    cin>>N;
	    ll P[N];
	    for(int i=0;i<N;i++){
	        cin>>P[i];
	    }
	    sort(P,P+N,greater<ll>());
	    ll sum=0;
	    for(ll i=0;i<N;i++){
	        if(P[i]>i){
	            sum+=P[i]-i;
	        }else{
	            break;
	        }
	    }
	    cout<<sum%mod<<"\n";
	}
	return 0;
}
