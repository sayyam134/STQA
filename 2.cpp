#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a < b + c) && (b < a + c) && (c < a + b))
        {
            if ((a == b) && (b == c))
            {
                cout << "Equaletreal Triangle" << endl;
            }
            else if (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((c == b) && (c != a)))
            {
                cout << "Isoceles Triangle" << endl;
            }
            else
            {
                cout << "Scalene Triangle" << endl;
            }
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}