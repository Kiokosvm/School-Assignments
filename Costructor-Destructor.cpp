#include <iostream>
using namespace std;

//class creation
class CubeDemo{
    //member variable & member function declaration
    public:
        int side;
        //constructor
        CubeDemo(){
            side=8;
        }
        //destructor
        ~CubeDemo(){
            cout<<"\n destructor called...";
        }
};
int main(){
    //object creation
    CubeDemo cdemoobj;
    cout<<"";
    cout<<cdemoobj.side;
}