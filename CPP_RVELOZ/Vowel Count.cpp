#include <iostream>
#include <string>
using namespace std;

string VowelCount(string str) {

    // code goes here  

    int i_response = 0;

    for (auto it = str.begin(); it != str.end(); it++)
    {
        switch (*it)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            i_response++;
            break;
        }
    }

    return to_string(i_response);

}

int main(void) {

    // keep this function call here
    cout << VowelCount(coderbyteInternalStdinFunction(stdin));
    return 0;

}