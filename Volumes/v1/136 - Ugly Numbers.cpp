#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main()
{
    long long arr[1500];
    arr[0] = 1;

    set<long long> used;
    used.insert(1);

    for (int i = 1; i < 1500; i++)
    {
        long long Min = (long long)1e18;
        for (int j = 0; j < i; j++)
        {
            if (used.find(arr[j] * 2) == used.end())
            {
                Min = min(Min, arr[j] * 2);
            }

            if (used.find(arr[j] * 3) == used.end())
            {
                Min = min(Min, arr[j] * 3);
            }

            if (used.find(arr[j] * 5) == used.end())
            {
                Min = min(Min, arr[j] * 5);
            }
        }
        arr[i] = Min;
        used.insert(Min);
    }

    cout << "The 1500'th ugly number is " << arr[1499] << ".\n";

    return 0;
}