#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // nums1 (i+1)
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        // nums2 backword
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
    return 0;
}

// to run add below line in terminal
// g++ pyramid.cpp && ./a.out