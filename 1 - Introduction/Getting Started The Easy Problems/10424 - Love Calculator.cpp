#include <iostream>

using namespace std;

int reduceToOneDigit(int number)
{
    while (number > 9)
    {
        int tempNumber = 0;
        while (number)
        {
            tempNumber += number % 10;
            number /= 10;
        }
        number = tempNumber;
    }
    return number;
}

int calculateScore(string str)
{
    int score = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ('a' <= str[i] && 'z' >= str[i])
        {
            score += str[i] - 'a' + 1;
        }
        if ('A' <= str[i] && 'Z' >= str[i])
        {
            score += str[i] - 'A' + 1;
        }
    }
    return score;
}

int main()
{
    string a, b;

    while (getline(cin, a))
    {
        getline(cin, b);

        int scoreA, scoreB;

        scoreA = calculateScore(a);
        scoreB = calculateScore(b);

        scoreA = reduceToOneDigit(scoreA);
        scoreB = reduceToOneDigit(scoreB);

        double ratio = 0;
        if (scoreA > scoreB)
            ratio = (double)scoreB / scoreA;
        else
            ratio = (double)scoreA / scoreB;

        ratio *= 100;
        printf("%.2f %\n", ratio);
    }
    return 0;
}