// Decimal to Binary
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int answer = 0;
    int power_of_10 = 1;

    while (n > 0)
    {
        int bit = n % 2;
        answer = bit * power_of_10 + answer;
        n = n >> 1;
        power_of_10 *= 10;
    }

    cout << "Answer is:" << answer << endl;
    return 0;
}
*/
// Homework Question to convert from decimal to Binary(-ive number)
#include <iostream>
#include <bitset>

std::string decimalToBinary(int n) {
    if (n < 0) {
        // Convert the absolute value of the number to binary
        std::bitset<32> binary(abs(n));
        // Add a negative sign to the front of the binary string
        return "-" + binary.to_string();
    } else {
        std::bitset<32> binary(n);
        return binary.to_string();
    }
}

int main() {
    int num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;

    std::string binary = decimalToBinary(num);
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}

// Binary to Decimal
/*
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int digit = n%10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
            
        }
        n =n/10;
        i++ ;
    }
    cout<<"Answer is:"<<ans;
}*/

