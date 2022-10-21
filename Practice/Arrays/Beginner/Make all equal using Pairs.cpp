#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++){
	        cin>>a[i];
	    }
	    int c=0,max=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(a[i]==a[j])
	            c++;
	        }
	        if(c>max)
	        max=c;
	        c=0;
	    }
	    cout<<(n-max)<<endl;
	}
	return 0;
}
