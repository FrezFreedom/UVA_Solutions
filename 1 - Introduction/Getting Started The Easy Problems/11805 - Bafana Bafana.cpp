#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        int n, k, p;
        cin >> n >> k >> p;
        cout << "Case " << testCase << ": " << (k + p - 1) % n + 1 << "\n";
    }
    return 0;
}