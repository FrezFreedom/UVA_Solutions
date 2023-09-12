#include <iostream>

using namespace std;

int main()
{
    int query;
    cin >> query;

    int sumOfDonations = 0;

    while(query--)
    {
        string queryType; cin >> queryType;
        if(queryType == "donate")
        {
            int donationAmount; cin >> donationAmount;
            sumOfDonations += donationAmount;
        }
        else
        {
            cout << sumOfDonations << "\n";
        }
    }

    return 0;
}