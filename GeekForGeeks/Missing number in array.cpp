#include <iostream>
using namespace std;

int main() {
	
	int T, n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n-1];
	    int sum = n*(n+1)/2;
	    for(int i=0; i<n-1; i++){
	        cin>>arr[i];
	        
	        sum = sum - arr[i];

	    }
	    cout<<sum<<endl;
	}
	return 0;
}
