#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"hello", "C++","world","wow"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}