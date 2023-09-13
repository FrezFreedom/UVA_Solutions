#include <iostream>
#include <vector>

using namespace std;

int solveIt(int ans, int index, int minimumValue, vector<int> &numbers)
{
    if (index < 0)
        return ans;

    ans = max(ans, numbers[index] - minimumValue);
    minimumValue = min(minimumValue, numbers[index]);

    return solveIt(ans, index - 1, minimumValue, numbers);
}

int main()
{
    int testCasesCount;
    cin >> testCasesCount;

    while (testCasesCount--)
    {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        cout << solveIt(numbers[n - 2] - numbers[n - 1], n - 2, numbers[n - 1], numbers) << endl;
    }

    return 0;
}