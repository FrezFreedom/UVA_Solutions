#include <iostream>

using namespace std;

int main()
{
    string str;

    while (cin >> str, str != "END")
    {
        if (str == "0")
            cout << 2;
        else if (str == "1")
            cout << 1;
        else if (str.length() == 1)
            cout << 2;
        else if (str.length() < 10)
            cout << 3;
        else
            cout << 4;

        cout << "\n";
    }

    return 0;
}