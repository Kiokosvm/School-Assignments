//program to calculate tax from salary amount
//Author:Sammy kioko
#include <iostream>
using namespace std;
int main(){
    double salary, tax;
        cout<<"enter your salary:";
        cin>>salary;

        if (salary>=0&&salary<20000){
            tax=salary*0.02;
            cout<<"your tax is Kes:"<<tax;
        }else if(salary >=20000&&salary<50000){
            tax=salary*0.12;
            cout<<"your tax is Kes:"<<tax;
        }else if(salary>=50000&&salary<100000){
            tax=salary*0.22;
            cout<<"your tax is Kes:"<<tax;
        }else if (salary>=100000){
            tax=salary*0.32;
            cout<<"your tax is Kes:"<<tax;
        }else
            cout<<"Invalid Amount"<<endl;
return 0;

}
