//program to checker whether a number is prime or not
//Author:Sammy kioko

#include <iostream>
using namespace std;

int main(){
    int number;
    int count=0;

    cout<<"Enter number to check if Prime or Not:";
    cin>>number;

    for(int i=1;i<=number;i++)
        if(number%i==0)
        count++;
        if(count==2)
        cout<<"It is a Prime number\n";
        else
        cout<<"It is Not a Prime number\n";

        return 0;

}
