#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n;
	    cin>>n;
	    int c=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i]==s[i+1])
	        c++;
	    }
	    cout<<c<<endl;
	    t--;
	}
	
	return 0;
}
