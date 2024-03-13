#include <iostream>
#include <string>
using namespace std;

string LetterChanges(string str) {

    // code goes here  
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
        {
            str[i] = 'a';
        }
        else if (str[i] == 'Z')
        {
            str[i] = 'A';
        }
        else
        {
            if (isalpha(str[i]))
                str[i] = str[i] + 1;
        }

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = toupper(str[i]);
        }
    }


    return str;

}

int main(void) {

    // keep this function call here
    cout << LetterChanges(coderbyteInternalStdinFunction(stdin));
    return 0;

}