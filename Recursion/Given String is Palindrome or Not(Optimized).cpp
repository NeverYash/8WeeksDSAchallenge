#include <iostream>
using namespace std;

int isPalindrome(string S)
	{
	    int i=0,j=S.length()-1;
	    while(i<j){
	        if(S[i++] != S[j--])
	        return 0;
	    }
	    return 1;
	}
int main(){
    string S;
    cin>>S;
    cout<<isPalindrome(S);
}	