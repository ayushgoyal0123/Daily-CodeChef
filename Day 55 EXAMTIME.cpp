#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,dsa1,dsa2,toc1,toc2,dm1,dm2;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>dsa1>>toc1>>dm1;
	    cin>>dsa2>>toc2>>dm2;
	    
	    if(dsa1+toc1+dm1 > dsa2 + toc2 + dm2)
	        cout<<"DRAGON\n";
	        
	    else if (dsa1+toc1+dm1 < dsa2 + toc2 + dm2)
	        cout<<"SLOTH\n";
	        
	    else
	    {
	        if(dsa1>dsa2)
	            cout<<"DRAGON\n";
	            
	            else if( dsa1< dsa2)
	                 cout<<"SLOTH\n";
	                 
	                 else if (toc1 >toc2)
	                    cout<<"DRAGON\n";
	                    
	                    else if( toc1< toc2)
	                        cout<<"SLOTH\n";
	                        
	                        else if (dm1 > dm2 )
	                            cout<<"DRAGON\n";
	                            
	                            else if (dm1 < dm2)
	                                cout<<"SLOTH\n";
	                                
	                                    else
	                                        cout<<"TIE\n";
	    }
	    
	}
return 0;
}
