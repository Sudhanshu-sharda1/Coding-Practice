#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int T, n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    int j, k, count=0;
	    for(int i=n-1; i>=0; i--){
	        j = 0;
	        k = i-1;
	        while(j<k){
	            if(arr[i] == arr[j] + arr[k]){
	                count++;
	                j++;
	                k--;
	            }
	            
	            else if(arr[i] > arr[j] + arr[k]){
	                j++;
	            }
	            else
	                k--;
	        }
	    }
	    if(count ==0)
	        cout<<-1<<endl;
	    else
    	    cout<<count<<endl;
	    
	}
	return 0;
}
