//For finding given string is palindrome or not
#include <iostream>
using namespace std;



int helper(string S,int Start,int End){
    //Start is equal to end when both comparing same characters
    if(Start >= End){
        return 1;
    }
    //Comparing Start and End Characters
    if(S[Start] != S[End]){
        return 0;
    }
    //Recursive Function
    return helper(S,Start+1,End-1);
}


int isPalindrome(string S){
    //Size of End is decreased by 1 because compiler starts from 0.
    int n=S.size()-1;
    return helper(S,0,n);
}

int main(){
    string S;
    //Taking input
    cin>>S;
    cout<<isPalindrome(S);
    //Return "1" when string is Palindrome otherwise it will return 0
}