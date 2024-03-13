//Have the function WordCount(str) take the str string parameter being passed and return the number of words the string contains(e.g. "Never eat shredded wheat or cake" would return 6).Words will be separated by single spaces.


#include <iostream>
#include <string>
using namespace std;

string WordCount(string str) {

    // code goes here  

    int space = 0;
    for (auto i = str.begin(); i != str.end(); i++)
    {
        if (*i == ' ')
        {
            space++;
        }
    }


    return to_string(space + 1);

}

int main(void) {

    // keep this function call here
    cout << WordCount(coderbyteInternalStdinFunction(stdin));
    return 0;

}