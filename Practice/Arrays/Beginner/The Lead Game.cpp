#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	// your code goes here
	int n,s1=0,s2=0;
	int x,y;
	int dif1=INT_MIN;
	int dif2=INT_MIN;
	int flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>x;
	    cin>>y;
	    s1+=x;
	    s2+=y;
	    
	    if(s1>s2)
	    {
	        if(dif1<(s1-s2)){
	        dif1=s1-s2;
	        flag=1;
	        }
	        
	    }
	    else{
	        if(dif2<(s2-s1))
	        {
	         dif2=s2-s1;
	         flag=2;
	        }
	    }
	   
	    
	}
	if(dif2>dif1)
	cout<<"2 "<<dif2;
	else
	cout<<"1 "<<dif1;
	return 0;
}
