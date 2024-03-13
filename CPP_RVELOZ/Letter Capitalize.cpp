#include <iostream>
#include <string>
using namespace std;

string LetterCapitalize(string str) {

    // code goes here  
    bool new_word = true;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }

    str[0] = toupper(str[0]);

    return str;

}

int main(void) {

    // keep this function call here
    cout << LetterCapitalize(coderbyteInternalStdinFunction(stdin));
    return 0;

}