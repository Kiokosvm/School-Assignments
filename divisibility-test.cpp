#include <iostream>
using namespace std;

class DivisibilityTester {
private:
    int num1;
    int num2;

public:
    DivisibilityTester(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void testDivisibility() {
        if (num1 % num2 == 0) {
            cout << num1 << " is divisible by " << num2 << std::endl;
        } else {
            cout << num1 << " is not divisible by " << num2 << std::endl;
        }
    }
};

int main() {
    DivisibilityTester ob1(16, 4);
    DivisibilityTester ob2(17, 5);

    ob1.testDivisibility();
    ob2.testDivisibility();

    return 0;
}