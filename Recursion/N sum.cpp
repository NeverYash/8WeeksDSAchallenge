//for Finding "N" Sum
#include <iostream>
using namespace std;

int nSum(long long int n){
    //Base case
    if(n==1){
        return 1;
    }
    //Recursive function
    return n+nSum(n-1);
}

int main() {
	long long int n;
	cin>>n;
	cout<<nSum(n);
}