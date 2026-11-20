#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//finds the factorial of an inputted number.
int main() {
    int fact = 1;
    int inp;
    cout << "Enter number to find factorial:  ";
    cin >> inp;
    for (int e = inp; e > 0; e--) {
        fact = fact * e;
    }
    cout << inp << "! = " << fact << endl;
    return 0;
}
