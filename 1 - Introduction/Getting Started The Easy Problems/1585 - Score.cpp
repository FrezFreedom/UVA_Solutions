#include <iostream>

using namespace std;

int calculatePoint(string answers)
{
    int points = 0;
    int temp_point = 0;

    for (int i = 0; i < answers.length(); i++)
    {
        if (answers[i] == 'O')
        {
            temp_point++;
            points += temp_point;
        }
        else
        {
            temp_point = 0;
        }
    }

    return points;
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        string answers;
        cin >> answers;

        cout << calculatePoint(answers) << endl;
    }
    return 0;
}