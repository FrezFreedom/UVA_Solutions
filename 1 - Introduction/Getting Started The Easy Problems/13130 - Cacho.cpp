#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        int numbers[5];
        for(int i = 0; i < 5; i++)
        {
            cin >> numbers[i];
        }
        bool isEscala = true;
        for(int i = 1; i < 5; i++)
        {
            if(numbers[i] != numbers[i-1] + 1)
            {
                isEscala = false;
                break;
            }
        }
        if(isEscala)
        {
            cout << "Y" << "\n";
        }
        else
        {
            cout << "N" << "\n";
        }
    }
    return 0;
}