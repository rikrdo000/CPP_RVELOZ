//Have the function ExOh(str) take the str parameter being passed and return the string true if there is an equal number of x's and o's, otherwise return the string false.Only these two letters will be entered in the string, no punctuation or numbers.For example : if str is "xooxxxxooxo" then the output should return false because there are 6 x's and 5 o's.


#include <iostream>
#include <string>
using namespace std;

string ExOh(string str) {

    // code goes here  

    int x_s = 0;
    int o_s = 0;

    for (auto it = str.begin(); it != str.end(); it++)
    {
        char c = tolower(*it);
        switch (c)
        {
        case 'x':
            x_s++;
            break;
        case 'o':
            o_s++;
            break;
        }
    }

    if (x_s != o_s)
    {
        return "false";
    }
    else
        return "true";


}

int main(void) {

    // keep this function call here
    cout << ExOh(coderbyteInternalStdinFunction(stdin));
    return 0;

}