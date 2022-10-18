#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int h,n,k;
	cin>>t;
	while(t!=0)
	{
	    cin>>n;
	    cin>>k;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>h;
	        if(h>k)
	        count++;
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}
