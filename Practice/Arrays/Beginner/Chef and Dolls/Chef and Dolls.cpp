#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,c,n;
	cin>>t;
	while(t!=0)
	{
	    cin>>n;
	    int a[n];
	    c=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        c=c^a[j];
	    }
	    cout<<c<<endl;
	    t--;
	}
	return 0;
}
