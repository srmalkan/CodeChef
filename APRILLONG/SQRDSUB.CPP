#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N,count=0;
	    cin>>N;
	    ll A[N];
	    for(ll i=0;i<N;i++){
	        cin>>A[i];
	        if(A[i]%2!=0){
	            count++;
	        }
	    }
	    ll i=0,j=0,cntTwo=0,x=0;
	    while(i<N){
	        if(A[i]%4==0){
	            count+=(i-j+1)*(N-i);
	            i++;
	            j=i;
	            cntTwo=0;
	        }else if(A[i]%2==0 ){
	            if(cntTwo==0){
	                x=i;
	                cntTwo++;
	                i++;
	                continue;
	            }
	            count+=(x-j+1)*(N-i);
	            j=x+1;
	            x=i;
	            i++;
	            cntTwo=1;
	        }else{
	            i++;
	        }
	    }
	    for(i=0;i<N;i++){
	        if(A[i]%2!=0){
	            j=i;
	            while(A[j+1]%2!=0){
	                j++;
	            }
	            count+=((j-i+1)*(j-i))/2;
	            i=j;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
