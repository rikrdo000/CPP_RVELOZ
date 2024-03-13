//Have the function LetterCountI(str) take the str parameter being passed and return the first word with the greatest number of repeated letters.For example : "Today, is the greatest day ever!" should return greatest because it has 2 e's (and 2 t's) and it comes before ever which also has 2 e's. If there are no words with repeating letters return -1. Words will be separated by spaces.


#include <iostream>
#include <string>
#include <map>

using namespace std;

void print_node(const auto& node)
{
    std::cout << '[' << node.first << "] = " << node.second << '\n';
}

string print_word(string str, int init, int end)
{
    string response;
    for (int i = init; i <= end; i++)
    {
        response += str[i];
    }
    return response;
}

string LetterCountI(string str) {

    // code goes here 
    int max = 1;
    int max_str = 0;
    map <char, int> tmp_map;
    int init_str = 0;
    int end_str = 0;
    map <char, int>::iterator f_it;
    string response;
    int i = 0;
    for (auto it = str.begin(); it != str.end(); it++, i++)
    {

        int counter = 1;
        f_it = tmp_map.find(*it);

        if (f_it != tmp_map.end())
        {
            counter = f_it->second;
            counter++;
            tmp_map.insert_or_assign(*it, counter);
            if (counter > max)
            {
                max = counter;
            }
            //cout << "first: [" << f_it->first << "] second: [" << f_it->second <<endl;
        }
        tmp_map.insert_or_assign(*it, counter);

        //cout << " i: [" << i << "] len: [" << str.length() << "] " << " valor [" << *it << "]" << endl;

        if (*it == ' ' || i == str.length() - 1)
        {
            if (end_str != 0)
                init_str = end_str + 2;

            if (i == str.length() - 1)
                end_str = i;
            else
                end_str = i - 1;
            tmp_map.clear();

            if (max > max_str)
            {
                response = print_word(str, init_str, end_str);
                max_str = max;
            }
            if (max == 1)
            {
                response = "-1";
            }

            //max = 1;
        }



    }

    return response;

}

int main(void) {

    // keep this function call here
    cout << LetterCountI(coderbyteInternalStdinFunction(stdin));
    return 0;

}