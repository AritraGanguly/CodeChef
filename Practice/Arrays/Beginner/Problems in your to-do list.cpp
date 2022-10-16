#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n;
	int d;
	int c=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    c=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>d;
	        if(d>=1000)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
	
}
