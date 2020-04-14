#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N,K,val;
	    cin>>N>>K;
	    vector<ll> A(N),sumlr(N),sumrl(N);
	    for(ll i=0;i<N;i++){
	        cin>>val;
	        A[i]=val%K;
	    }
	    sumlr[0]=A[0];
	   // cout<<sumlr[0]<<" ";
	    for(ll i=1;i<N;i++){
	        sumlr[i]=sumlr[i-1]+A[i];
	       // cout<<sumlr[i]<<" ";
	    }
	   // cout<<endl;
	    sumrl[N-1]=0;
	   // cout<<sumrl[N-1]<<" ";
	    for(ll i=N-2;i>=0;i--){
	        if(A[i+1]>0){
	            sumrl[i]=sumrl[i+1]+(K-A[i+1]);
	        }else{
	            sumrl[i]=sumrl[i+1];
	        }
	        
	       // cout<<sumrl[i]<<" ";
	    }
	   // cout<<endl;
	    ll min=LLONG_MAX,diff;	
	    for(ll i=N-1;i>=0;i--){
	        diff=sumlr[i]-sumrl[i];
	       // cout<<diff<<"\t";
	        if(diff>=0 && diff<min){
	            min=diff;
	        }
	    }
	    cout<<min<<endl;
	   // cout<<sum;
	}
	return 0;
}
