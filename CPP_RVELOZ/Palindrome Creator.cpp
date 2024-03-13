//Have the function PalindromeCreator(str) take the str parameter being passed and determine if it is possible to create a palindromic string of minimum length 3 characters by removing 1 or 2 characters.For example : if str is "abjchba" then you can remove the characters jc to produce "abhba" which is a palindrome.For this example your program should return the two characters that were removed with no delimiter and in the order they appear in the string, so jc.If 1 or 2 characters cannot be removed to produce a palindrome, then return the string not possible.
//
//If the input string is already a palindrome, your program should return the string palindrome.Your program should always remove the characters that appear earlier in the string.In the example above, you can also remove ch to form a palindrome but jc appears first, so the correct answer is jc.
//
//The input will only contain lowercase alphabetic characters.Your program should always attempt to create the longest palindromic substring by removing 1 or 2 characters(see second sample test case as an example).The 2 characters you remove do not have to be adjacent in the string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool IsPalindrome(string str)
{
    string left;
    string rigth;
    int len = str.length();
    if (len % 2 == 0)
    {
        left = str.substr(0, len / 2);
        rigth = str.substr(len / 2, len / 2);
    }
    else
    {
        left = str.substr(0, len / 2);
        rigth = str.substr((len / 2) + 1, len / 2);
    }
    reverse(rigth.begin(), rigth.end());
    if (left == rigth)
    {
        //cout << "left: " << left << " rigth: " << rigth << endl;
        return true;
    }
    else
        return false;
}

string PalindromeCreator(string str) {

    string response;
    // code goes here  
    if (IsPalindrome(str))
    {
        return "palindrome";
    }
    else if (IsPalindrome(str.substr(1, str.length() - 2)))
    {
        response = str[0];
        response += str[str.length() - 1];
        return response;
    }

    int i = 0;
    int letters = 0;
    for (auto it = str.begin(); it != str.end(); it++, i++)
    {
        //cout << "lettrs: " << letters << " char: " << str[i] << endl;
        string tmpstr = str;
        if (IsPalindrome(tmpstr.erase(i, 1)))
        {
            if (tmpstr.length() >= 3)
            {
                response = str[i];
                return response;
            }
            else
            {
                return "not possible";
            }
        }
        else
        {
            tmpstr = str;
            if (IsPalindrome(tmpstr.erase(i, 2)))
            {
                response = str[i];
                response += str[i + 1];
                if (tmpstr.length() >= 3)
                    return response;
                else {
                    return "not possible";
                }

            }
        }
    }
    return "not possible";
}

int main(void) {

    // keep this function call here
    cout << PalindromeCreator(coderbyteInternalStdinFunction(stdin));
    return 0;

}