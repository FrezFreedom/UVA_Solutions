#include <iostream>

using namespace std;

int number_of_rows(long long numberOfWarriors)
{
    long long left = 0, right = 1e9;
    for (int i = 0; i < 300; i++)
    {
        long long numberOfRows = (left + right) / 2;
        long long temp = (numberOfRows * (numberOfRows + 1)) / 2;
        if (temp <= numberOfWarriors && numberOfWarriors < temp + numberOfRows + 1)
        {
            return numberOfRows;
        }
        else if (numberOfWarriors < temp)
        {
            right = numberOfRows - 1;
        }
        else
        {
            left = numberOfRows + 1;
        }
    }
    return 0;
}

int main()
{
    int testCases;

    cin >> testCases;

    while (testCases--)
    {
        long long numberOfWarriors;
        cin >> numberOfWarriors;
        cout << number_of_rows(numberOfWarriors) << "\n";
    }

    return 0;
}