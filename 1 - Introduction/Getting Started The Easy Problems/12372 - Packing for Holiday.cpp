#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        int l, w, h; cin >> l >> w >> h;
        cout << "Case " << testCase << ": ";

        if ( l <= 20 && w <= 20 && h <= 20)
        {
            cout << "good" << "\n";
        }
        else
        {
            cout << "bad" << "\n";
        }
    }
    return 0;
}