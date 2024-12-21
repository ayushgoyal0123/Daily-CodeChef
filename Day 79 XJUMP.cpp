#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// I used hints to solve this.
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int count =0;
	   while(x){
	       if(y<=x){
	           count++;
	           x=x-y;       
	        }
	        
	       else{
	           count++;
	           x=x-1;
	       }
	   }
	   cout<<count<<"\n";
	}
return 0;
}