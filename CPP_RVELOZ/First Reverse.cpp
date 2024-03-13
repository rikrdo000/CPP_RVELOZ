//Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order.For example : if the input string is "Hello World and Coders" then your program should return the string sredoC dna dlroW olleH.
//

#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {

    string n_str;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        n_str += str[i];
    }
    return n_str;

}

int main(void) {

    // keep this function call here
    cout << FirstReverse(coderbyteInternalStdinFunction(stdin));
    return 0;

}