//Have the function CountingMinutesI(str) take the str parameter being passed which will be two times(each properly formatted with a colon and am or pm) separated by a hyphen and return the total number of minutes between the two times.The time will be in a 12 hour clock format.For example : if str is 9 : 00am - 10 : 00am then the output should be 60. If str is 1 : 00pm - 11 : 00am the output should be 1320.


#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

using namespace std;
//using namespace std::chrono;

string CountingMinutesI(string str) {

    // code goes here  

    std::string time_str = "12:30 PM";

    string first_time = str.substr(0, str.find('-'));
    string second_time = str.substr(str.find('-') + 1, str.length() - 1);
    //cout << first_time << endl;
    //cout << second_time << endl;
    struct tm timeinfo1 = {};
    struct tm timeinfo2 = {};


    strptime(first_time.c_str(), "%I:%M%p", &timeinfo1);
    strptime(second_time.c_str(), "%I:%M%p", &timeinfo2);


    time_t start = mktime(&timeinfo1);
    time_t end = mktime(&timeinfo2);

    if (end < start)
    {
        timeinfo2.tm_mday = timeinfo2.tm_mday + 1;
        end = mktime(&timeinfo2);
    }

    double difference = difftime(end, start) / 60;
    //cout << difference << endl;  

    return to_string((int)difference);

}

int main(void) {

    // keep this function call here
    cout << CountingMinutesI(coderbyteInternalStdinFunction(stdin));
    return 0;

}