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
	    if(N>3){
	        cout<<N/2<<"\n";
    	    if(N%2==0){
    	        for(ll i=1;i<=N;i+=2){
    	            cout<<2<<" "<<i<<" "<<i+1<<"\n";
    	        }
    	    }else{
    	        cout<<3<<" "<<1<<" "<<2<<" "<<3<<endl;
    	        for(ll i=4;i<=N;i+=2){
    	            cout<<2<<" "<<i<<" "<<i+1<<"\n";
    	        }
    	    }
	    }else{
	        cout<<1<<"\n"<<N<<" ";
	        for(int i=1;i<=N;i++){
	            cout<<i<<" ";
	        }
	    }
	    
	}
	return 0;
}
