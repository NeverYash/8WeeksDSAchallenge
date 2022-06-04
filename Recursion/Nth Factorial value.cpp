//for Finding "N" Factorial
#include <iostream>
using namespace std;

int nFactorial(long long int n){
    //Base case
    if(n==1){
        return 1;
    }
    //Recursive function
    return n*nFactorial(n-1);
}

int main() {
	long long int n;
	cin>>n;
	cout<<nFactorial(n);
}