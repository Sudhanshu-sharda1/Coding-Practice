#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T, n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    int max = INT_MIN, sum = 0; 
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        sum = sum + arr[i];
	        
	        if(max < sum){
	            max = sum;
	        }
	        if(sum < 0)
	            sum = 0;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
