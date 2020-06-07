#include <iostream>
using namespace std;

int main() {
	
	int T, n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int target;
	    cin>>target;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    bool flag = false;
	    int start=0, end=0, sum=arr[0];
	    while(end<n){
	        if(sum == target){
	            flag = true;
	            break;
	        }
	        else if(sum > target){
	            sum = sum-arr[start];
	            start++;
	        }
	        else if(sum < target){
	            end++;
	            sum = sum+arr[end];
	        }
	    }
	    if(flag)
	        cout<<start+1<<" "<<end+1<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}
