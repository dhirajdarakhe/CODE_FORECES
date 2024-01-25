// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
// Find all subsequences
void printSubsequence(string input, string output)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty())
    {
        mp[output.size()]++;
        return;
    }

    // output is passed with including
    // the Ist character of
    // Input string
    printSubsequence(input.substr(1), output + input[0]);

    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output);
}

// Driver code
int main()
{
    // output is set to null before passing in as a
    // parameter
    string output = "";
    string input = "1234567";

    printSubsequence(input, output);
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
