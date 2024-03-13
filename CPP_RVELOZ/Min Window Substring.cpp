#include <iostream>
#include <string>
#include <map>
#include <string.h>
using namespace std;

static map <char, int> Hashmap;
static map <char, int> TmpHashmap;
std::map<char, int>::iterator it;
std::map<char, int>::iterator it_h;
int counter_hashmap = 0;
int tmpcounter_hashmap = 0;
int len = 0;
int initial_substr_pos = 0;
int end_substr_pos = 0;
static int len_hash = 0;
string respuesta;

struct A {
    static map<int, int> create_map()
    {
        map<int, int> m;
        m[1] = 2;
        m[3] = 4;
        m[5] = 6;
        return m;
    }
    static const map<int, int> myMap;

};

const map<int, int> A::myMap = A::create_map();

void RecursiveLen(int start, int end, string str, bool);
bool IsValidWindow();
void printHash();

string MinWindowSubstring(string strArr[], int arrLength) {


    // code goes here  
    for (auto val : strArr[1])
    {
        len_hash++;
        int counter = 1;
        it = Hashmap.find(val);
        if (it != Hashmap.end())
        {
            counter = it->second;
            counter++;
        }
        else
        {
            TmpHashmap.insert_or_assign((val), 0);

        }
        Hashmap.insert_or_assign((val), counter);

        counter_hashmap++;
    }



    bool window_found = false;
    int i, j = 0;
    const map <char, int> constHashmap = Hashmap;
    RecursiveLen(0, -1, strArr[0], true);
    return respuesta;

}
string tmp_resp;
void RecursiveLen(int start, int end, string str, bool rigth)
{
    char c;
    printHash();
    if (rigth)
    {
        end++;
        c = str[end];
    }
    else
    {
        start++;
        c = str[start - 1];
    }

    bool found = false;

    //cout << "c: " << c <<endl;

    for (it = TmpHashmap.begin(); it != TmpHashmap.end(); ++it)
    {
        if (it->first == c)
        {
            if (rigth)
            {
                //cout << "comer " << endl;
                it->second++;
                tmpcounter_hashmap++;
                found = true;
                break;
            }
            else
            {
                //cout << "cagar " << endl;
                it->second--;
                tmpcounter_hashmap--;
                found = true;
                break;
            }
        }
    }
    if (IsValidWindow())
    {
        if ((tmpcounter_hashmap >= counter_hashmap))
        {
            int tmp = 0;
            if (start < 0)
                tmp = 0;
            else
                tmp = start;

            //cout << "tmp: "<< tmp << "end: " << end << endl;
            tmp_resp = "";
            for (int i = tmp; i <= end; i++)
            {
                //cout << str[i];
                tmp_resp += str[i];
            }
            if (tmp_resp.length() <= respuesta.length() || respuesta.empty())
            {
                respuesta = tmp_resp;
            }
            //cout << " :D " << respuesta << endl;
        }
        RecursiveLen(start, end, str, false);
    }
    else if (end < str.length())
    {
        RecursiveLen(start, end, str, true);
    }


}

void printHash()
{
    for (auto val : Hashmap)
    {
        //cout << " key: " << val.first << " value: " << val.second <<endl;
    }
}

bool IsValidWindow()
{
    // cout << endl;
    // cout << endl;
    printHash();
    for (it = TmpHashmap.begin(), it_h = Hashmap.begin(); it_h != Hashmap.end(); ++it, ++it_h)
    {
        //cout << " it ---" << it->first <<" ------ it_h " << it_h->first ;
        //cout << " it ---" << it->second <<" ------ it_h " << it_h->second << endl;
        if (it->second < it_h->second)
        {
            return false;
        }
    }
    //cout<< "valid" << endl;
    return true;
}

int main(void) {

    // keep this function call here
    string A[] = coderbyteInternalStdinFunction(stdin);
    int arrLength = sizeof(A) / sizeof(*A);
    cout << MinWindowSubstring(A, arrLength);
    return 0;

}