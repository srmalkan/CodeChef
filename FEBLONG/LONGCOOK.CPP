#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dayofweek(ll d, ll m, ll y)  
{  
    static ll t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    return ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;  
} 
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll m1,m2,y1,y2,d,j;
	    cin>>m1>>y1;
	    cin>>m2>>y2;
	    if(m1 > 2){
	        y1++;
	    }
	    if(m2 < 2){
	        y2--;
	    }
	    d=dayofweek(1,2,y1);
	   // cout<<d<<endl;
	    ll count=0;
	    if(y2-y1+1 > 400){
	        for(ll i=y1;i<y1+400;i++){
	       // cout<<i<<" ";
    	        if(d==6){
    	           // cout<<i<<" ";
    	            count++;
    	        }
    	        if(d==0 && ((i%4!=0 || i%100==0) && i%400!=0)){
    	           // cout<<i<<" ";
    	            count++;
    	        }
    	        if(i%4==0 && i%100!=0 || i%400==0){
    	            d=(d+2)%7;
    	        }else{
    	            d=(d+1)%7;
    	        }
	        }
	       // cout<<count;
	        count = count * ((y2-y1+1)/400);
	        ll diff =(y2-y1+1)%400;
	        d=dayofweek(1,2,y2-diff+1);
	       // cout<<y2-diff+1;
    	    for(ll i=y2-diff+1;i<=y2;i++){
    	       // cout<<i<<" ";
    	        if(d==6){
    	           // cout<<i<<" ";
    	            count++;
    	        }
    	        if(d==0 && ((i%4!=0 || i%100==0) && i%400!=0)){
    	           // cout<<i<<" ";
    	            count++;
    	        }
    	        if(i%4==0 && i%100!=0 || i%400==0){
    	            d=(d+2)%7;
    	        }else{
    	            d=(d+1)%7;
    	        }
    	    }
	    }else{
	        for(ll i=y1;i<=y2;i++){
	       // cout<<i<<" ";
    	        if(d==6){
    	           // cout<<i<<" ";
    	            count++;
    	        }
    	        if(d==0 && ((i%4!=0 || i%100==0) && i%400!=0)){
    	           // cout<<i<<" ";
    	            count++;
    	        }
    	        if(i%4==0 && i%100!=0 || i%400==0){
    	            d=(d+2)%7;
    	        }else{
    	            d=(d+1)%7;
    	        }
	        }
	    }
	    
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
