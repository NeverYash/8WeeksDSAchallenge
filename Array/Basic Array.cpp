// To take the input array and print it.

#include <iostream>
using namespace std;
int main() {
	int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	for(int j=0;j<n;j++){
	    cout<<arr[j]<<" ";
	}
	
	return 0;
}