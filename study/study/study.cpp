#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <string>
using namespace std;

using value_t = unsigned int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> ws >> str;

    vector<char> before(str.begin(), str.end());
    vector<char> after;

    value_t t = 0;
    cin >> t;

    for (value_t ti = 0; ti < t; ++ti)
    {
        char command = 0;
        cin >> command;

        if (command == 'L')
        {
            if (false == before.empty())
            {
                after.push_back(before.back());
                before.pop_back();
            }
        }
        else if (command == 'D')
        {
            if (false == after.empty())
            {
                before.push_back(after.back());
                after.pop_back();
            }
        }
        else if (command == 'B')
        {
            if (false == before.empty())
            {
                before.pop_back();
            }
        }
        else if (command == 'P')
        {
            char ch = 0;
            cin >> ch;

            before.push_back(ch);
        }
    }

    cout << string(before.begin(), before.end()) << string(after.rbegin(), after.rend());

    return 0;
}
