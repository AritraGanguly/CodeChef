#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>x;
	    if(x>100)
	    x=x-10;
	    cout<<x<<endl;
	}
	return 0;
}
