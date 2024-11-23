#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int T,N,S[100];
    string V;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        for(int j=0;j<N;j++)
            cin>>S[j];
        
        cin>>V;
            
        int min=1000;
            
        for(int l=0;l<N;l++)
            {
                if(V[l]=='0')
                {
                    if(S[l]<min)
                    min =S[l];
                }
                    
            }
        cout<<min<<"\n";
    }
return 0;
}
