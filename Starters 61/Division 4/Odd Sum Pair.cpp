#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0)
	{
	   
	    int a[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>a[i];
	    }
	    int s1=(a[1]+a[2])%2;
	    int s2=(a[0]+a[2])%2;
	    int s3=(a[0]+a[1])%2;
	   if(s1!=0)
	   cout<<"YES"<<endl;
	   else if(s2!=0)
	   cout<<"YES"<<endl;
	   else if(s3!=0)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	        t--;
	        
	    
	}
	return 0;
}
