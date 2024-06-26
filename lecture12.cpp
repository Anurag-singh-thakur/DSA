#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;

    int end = size - 1;
   int mid = start + (end - start) / 2;  // Use parentheses for clarity

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else //(key<arr[mid]);
        {
            end = mid - 1;
        }
        int mid = start + (end - start) / 2;  // Use parentheses for clarity

    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int key;
    int evenindex = binarySearch(even, 6, 2);
    cout << "index of 2 is" << evenindex << endl;
    int oddIndex = binarySearch(odd, 5, 11);
    cout << "index of 11 is" << oddIndex << endl;
    int oddIndex1 = binarySearch(odd, 5, 3);
    cout << "index of 3 is" << oddIndex1 << endl;
    int oddIndex2 = binarySearch(odd, 5, 16);
    cout << "index of 16 is" << oddIndex2 << endl;
    return 0;
}