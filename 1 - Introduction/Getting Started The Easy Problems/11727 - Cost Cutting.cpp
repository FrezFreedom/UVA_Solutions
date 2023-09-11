#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        int salaries[3];
        for(int i = 0; i < 3; i++)
        {
            cin >> salaries[i];
        }
        sort(salaries, salaries + 3);

        cout << "Case " << testCase << ": " << salaries[1] << "\n";
    }
    return 0;
}