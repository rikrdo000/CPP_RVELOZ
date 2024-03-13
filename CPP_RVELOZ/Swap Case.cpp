//Have the function SwapCase(str) take the str parameter and swap the case of each character.For example : if str is "Hello World" the output should be hELLO wORLD.Let numbers and symbols stay the way they are.


#include <iostream>
#include <string>
using namespace std;

string SwapCase(string str) {

    // code goes here  
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
            {
                str[i] = toupper(str[i]);
            }
            else
            {
                str[i] = tolower(str[i]);
            }
        }
    }
    return str;

}

int main(void) {

    // keep this function call here
    cout << SwapCase(coderbyteInternalStdinFunction(stdin));
    return 0;

}