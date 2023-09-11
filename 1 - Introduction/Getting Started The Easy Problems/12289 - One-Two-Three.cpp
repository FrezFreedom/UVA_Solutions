#include <iostream>
#include <string>

using namespace std;

int diff_of_words(string a, string b)
{
    int diff = 0;
    for(int i = 0; i < min(a.length(), b.length()); i++)
    {
        if(a[i] != b[i])
        {
            diff++;
        }
    }
    return diff + abs((int)a.length() - (int)b.length());
}

int main()
{
    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        string number;
        cin >> number;
        if(diff_of_words(number, "one") <= 1)
        {
            cout << 1 << "\n";
        }
        else if (diff_of_words(number, "two") <= 1)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 3 << "\n";
        }
    }
    return 0;
}