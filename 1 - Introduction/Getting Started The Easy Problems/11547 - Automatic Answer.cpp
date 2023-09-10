#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        n = ((n * 567) / 9 + 7492) * 235 / 47 - 498;
        n = abs(n);
        cout << (n / 10) % 10 << "\n";
    }
    return 0;
}