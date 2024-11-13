#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,A,B,C,total;;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>A>>B>>C;
        if(A<=B && A<=C)
            cout<<B+C<<"\n";
            
         else if(B<=C)
            cout<<A+C<<"\n";
         
         else
            cout<<A+B<<"\n";
    }
        

return 0;    
    }