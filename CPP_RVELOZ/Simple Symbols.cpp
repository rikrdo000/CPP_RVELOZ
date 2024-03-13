#include <iostream>
#include <string>
using namespace std;

string SimpleSymbols(string str) {

    // code goes here  

    if (str.length() < 3 || isalpha(str[0]))
    {
        return "false";
    }

    bool response = false;
    for (int i = 1; i < str.length() - 1; i++)
    {
        if (isalpha(str[i]))
        {
            if (str[i - 1] == str[i + 1] && str[i + 1] == '+')
            {
                response = true;
            }
            else
            {
                response = false;
                break;
            }
        }

    }

    if (response)
        return "true";
    else
        return "false";


    //return str;

}

int main(void) {

    // keep this function call here
    cout << SimpleSymbols(coderbyteInternalStdinFunction(stdin));
    return 0;

}