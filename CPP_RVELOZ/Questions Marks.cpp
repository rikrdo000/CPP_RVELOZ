#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

string QuestionsMarks(string str) {

    // code goes here  
    int number_1 = -1;
    int number_2 = -1;

    bool response = false;
    //string response = "false";
    int questionmark = 0;
    for (int i = 0; i < str.size(); i++)
    {
        //cout << str[i] << endl;

        if (isalpha(str[i]))
        {
            continue;
        }
        else if (isalnum(str[i]))
        {
            if (number_1 == -1)
            {
                number_1 = int(str[i] - '0');
                questionmark = 0;
            }
            else if (number_2 == -1)
            {
                number_2 = int(str[i] - '0');
                //cout << "n1: " << number_1 << " n2: " << number_2 << " qmarks: " << questionmark << endl ;
                if (number_1 + number_2 == 10)
                {
                    if (questionmark == 3)
                    {
                        response = true;
                    }
                    else
                    {
                        response = false;
                        break;
                    }
                }
                number_1 = number_2;
                number_2 = -1;
                questionmark = 0;
            }
        }
        else if (str[i] == '?')
        {
            questionmark++;
            //cout << "CRECIENDO QM: " << questionmark << endl;
        }
    }
    if (response)
        return "true";
    else
        return "false";
    //return response;

}

int main(void) {

    // keep this function call here
    cout << QuestionsMarks(coderbyteInternalStdinFunction(stdin));
    return 0;

}