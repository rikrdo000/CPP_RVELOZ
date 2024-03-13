//Have the function BinaryReversal(str) take the str parameter being passed, which will be a positive integer, take its binary representation(padded to the nearest N * 8 bits), reverse that string of bits, and then finally return the new reversed string in decimal form.For example : if str is "47" then the binary version of this integer is 101111 but we pad it to be 00101111. Your program should reverse this binary string which then becomes : 11110100 and then finally return the decimal version of this string, which is 244.


#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;



string BinaryReversal(string str) {

    // code goes here  

    int a = stoi(str);

    if (a >= 0 && a <= 255)
    {
        bitset<8>b(a);
        string str1 = b.to_string();
        reverse(str1.begin(), str1.end());
        bitset<8>c(str1);
        cout << c.to_ulong();
    }
    else if (a > 255 && a <= 65535)
    {
        bitset<16>b(a);
        string str1 = b.to_string();
        reverse(str1.begin(), str1.end());
        bitset<16>c(str1);
        cout << c.to_ulong();
    }
    else if (a > 65535 && a <= 268435455)
    {
        bitset<24>b(a);
        string str1 = b.to_string();
        reverse(str1.begin(), str1.end());
        bitset<24>c(str1);
        cout << c.to_ulong();
    }
    else if (a > 268435455)
    {
        bitset<32>b(a);
        string str1 = b.to_string();
        reverse(str1.begin(), str1.end());
        bitset<32>c(str1);
        cout << c.to_ulong();
    }

    return "";

}

int main(void) {

    // keep this function call here
    cout << BinaryReversal(coderbyteInternalStdinFunction(stdin));
    return 0;

}