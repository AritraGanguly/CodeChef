#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int c;
	int rev;
	cin>>t;
	while(t!=0)
	{
	    int l;
	    int r;
	    cin>>l;
	    cin>>r;
	    int c=0;
	    for(int i=l;i<=r;i++)
	    {
	        rev=i%10;
	        if(rev==2||rev==3||rev==9)
	        {
	            c++;
	        }
	        
	    }
	    cout<<c<<endl;
	    t--;
	    
	    
	}
	return 0;
	
	
}
