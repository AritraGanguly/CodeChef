#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	string name;
	int s;
	int l;
	for (int i=0;i<t;i++)
	{
	    cin>>n;
	    s=0;
	    l=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>name;
	        if(name=="START38")
	        s++;
	        else
	        l++;
	    }
	    cout<<s<<" "<<l<<endl;
	}
	return 0;
}
