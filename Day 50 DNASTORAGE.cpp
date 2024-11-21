#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        for(int j=0;j<N;j=j+2)
        {
            if(S[j]=='0' && S[j+1]=='0')
                cout<<"A";
                
            else if(S[j]=='0' && S[j+1]=='1')
                cout<<"T";
                
            else if(S[j]=='1' && S[j+1]=='0')
                cout<<"C";
                
                else 
                cout<<"G";
                
        }
        cout<<"\n";
        // your code goes here
    }
return 0;
}
