#include <iostream>
#include <string>
using namespace std;
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int LargestFour(int arr[], int arrLength) {

    // code goes here  

    auto len = arrLength;

    if (len == 1)
    {
        return arr[0];
    }
    if (len == 2)
    {
        return arr[0] + arr[1];
    }
    if (len == 2)
    {
        return arr[0];
    }
    if (len == 3)
    {
        return arr[0] + arr[1] + arr[2];
    }
    else
    {
        qsort(arr, len, sizeof(int), compare);

        return arr[len - 1] + arr[len - 2] + arr[len - 3] + arr[len - 4];
    }
    return arr[0];

}


int main(void) {

    // keep this function call here
    int A[] = coderbyteInternalStdinFunction(stdin);
    int arrLength = sizeof(A) / sizeof(*A);
    cout << LargestFour(A, arrLength);
    return 0;

}