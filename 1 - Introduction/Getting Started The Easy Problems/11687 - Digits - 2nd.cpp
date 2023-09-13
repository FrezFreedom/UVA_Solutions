#include <iostream>
#include <sstream>

using namespace std;

string intToString(int value)
{
    stringstream stringStream;

    stringStream << value;

    return stringStream.str();
}

int solveIt(string number, int index)
{
    string numberLength = intToString(number.length());

    if (numberLength == number)
        return index + 1;

    return solveIt(numberLength, index + 1);
}
int main()
{
    string str;

    while (cin >> str, str != "END")
    {
        cout << solveIt(str, 0) << endl;
    }

    return 0;
}