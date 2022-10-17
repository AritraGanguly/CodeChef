#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float t;
	float x,y;
	float p;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>x;
	    cin>>y;
	    p=(y/x)*100;
	    if(p>=50)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
Expert Setter
