#include <iostream>
using namespace std;

int Print1ToN(int n){
    if(n==0){
        return 1;
    }
    Print1ToN(n-1);
    cout<<" "<<n;
}
int main() {
	int n;
	cin>>n;
	return Print1ToN(n);

}