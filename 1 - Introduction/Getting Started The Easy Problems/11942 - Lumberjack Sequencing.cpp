#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    cout << "Lumberjacks:" << endl;

    while (testCases--)
    {
        vector<int> numbers(10);
        bool Asc = true, Desc = true;
        for (int i = 0; i < 10; i++)
        {
            cin >> numbers[i];
            if (i)
            {
                if (numbers[i] > numbers[i - 1])
                {
                    Desc = false;
                }
                else
                {
                    Asc = false;
                }
            }
        }
        if (Desc || Asc)
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
    return 0;
}