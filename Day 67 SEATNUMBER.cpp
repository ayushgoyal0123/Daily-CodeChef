#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>0 &&n<11)
        cout<<"Lower Double\n";
        
        else if(n>10 &&n<16)
        cout<<"Lower Single\n";
        
        else if(n>15 &&n<26)
        cout<<"Upper Double\n";
        
        else
        cout<<"Upper Single\n";
        
    }
return 0;
}
