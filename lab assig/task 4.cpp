
#include <iostream>
using namespace std;

void checkArmstrong(int num)
{
    int original = num;
    int sum = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkArmstrong(number);

    return 0;
}

