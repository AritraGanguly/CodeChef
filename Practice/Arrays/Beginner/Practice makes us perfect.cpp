#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ar[4]={};
	for(int i=0;i<4;i++)
	{
	    cin>>ar[i];
	}
	int count=0;
	for(int i=0;i<4;i++)
	{
	    if(ar[i]>=10)
	    count++;
	}
	cout<<count;
	return 0;
}
