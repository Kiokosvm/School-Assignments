//program to find even or odd number
//Author:Sammy kioko

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    if(n%2==0){
        cout<<n<<"is even.";
    }
    else{
        cout<<n<<"is odd.";
    }
    
    return 0;
}