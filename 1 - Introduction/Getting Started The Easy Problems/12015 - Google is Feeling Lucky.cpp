#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        vector<pair<pair<int, int>, string>> sitesScores;
        for (int i = 0; i < 10; i++)
        {
            string site;
            int score;
            cin >> site >> score;
            sitesScores.push_back({{-score, i}, site});
        }
        sort(sitesScores.begin(), sitesScores.end());

        cout << "Case #" << testCase << ":\n";

        int index = 0;
        while (sitesScores[index].first.first == sitesScores[0].first.first)
        {
            cout << sitesScores[index].second << endl;
            index++;
        }
    }

    return 0;
}