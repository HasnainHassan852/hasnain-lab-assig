
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50,
                   60, 70, 80, 90, 100};

    int search;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == search)
        {
            cout << "Number found at position "
                 << i + 1;
            found = true;
            break;
        }
    }

    if (found == false)
        cout << "Number not found";

    return 0;
}

