#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        
        for(int k=0;k<n;k++)
        {
            for(int l=0;l<n-k-1;l++)
            {
                if(a[l]<a[l+1])
                {
                    int temp = a[l];
                    a[l]=a[l+1];
                    a[l+1]=temp;
                }
            }
        }
        
        cout<<a[x-1]-1<<"\n";
       
    }
return 0;

}
