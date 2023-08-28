#include <iostream>
using namespace std;

class Programming{
    private:
        int variable;
    
    public:
        void input_value(){
            cout<<"Enter an integer:\n"
            cin>>variable;
        }
        void output_value(){
            cout<<"the variable entered is";
            cout<<variable<<"\n";

        }
};

int main(){
    Programming object;
    object.input_value();
    object.output_value();

    return 0;

}