#include <iostream>
using namespace std;

long long int Fibonacci(int n){
    //Base cases
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    //Recusive call
    long long int reCall1 =  Fibonacci(n-1);
    long long int reCall2 =  Fibonacci(n-2);
    //Small calculation
    long long int smallCal = reCall1+reCall2;
    return smallCal;
}
int main() {
	long long int n;
	cin>>n;
	cout<<Fibonacci(n);

}