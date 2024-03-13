//Have the function AlphabetSoup(str) take the str string parameter being passed and return the string with the letters in alphabetical order(ie.hello becomes ehllo).Assume numbers and punctuation symbols will not be included in the string.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string AlphabetSoup(string str) {

    // code goes here  

    sort(str.begin(), str.end());

    return str;

}

int main(void) {

    // keep this function call here
    cout << AlphabetSoup(coderbyteInternalStdinFunction(stdin));
    return 0;

}