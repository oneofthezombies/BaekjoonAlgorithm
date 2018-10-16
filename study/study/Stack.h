#pragma once
#include "stdafx.h"

void IronPipe()
{
    //const char kOpen = '(';
    //const char kClose = ')';

    //char last = 0;
    //int count = 0;
    //int result = 0;

    //char ch = 0;
    //int numSuccess = 0;
    //while (true)
    //{
    //    last = ch;
    //    numSuccess = scanf("%c", &ch);

    //    if (numSuccess != 1) 
    //        break;

    //    if (ch == '\n')
    //        break;

    //    if (ch == kOpen)
    //    {
    //        ++count;
    //    }
    //    else if (ch == kClose)
    //    {
    //        if (last == kOpen)
    //        {
    //            --count;
    //            result += count;
    //        }
    //        else if (last == kClose)
    //        {
    //            --count;
    //            result += 1;
    //        }
    //    }
    //}

    //printf("%d", result);
}

void Editor()
{
    //int main()
    //{
    //    ios_base::sync_with_stdio(false);
    //    cin.tie(nullptr);
    //    cout.tie(nullptr);

    //    string text;
    //    getline(cin, text);

    //    int n;
    //    cin >> n;

    //    vector<char> before, after;

    //    for (auto c : text)
    //        before.push_back(c);

    //    for (int i = 0; i < n; ++i)
    //    {
    //        char arg0;
    //        cin >> arg0;

    //        if (arg0 == 'L')
    //        {
    //            if (!before.empty())
    //            {
    //                after.push_back(before.back());
    //                before.pop_back();
    //            }
    //        }
    //        else if (arg0 == 'D')
    //        {
    //            if (!after.empty())
    //            {
    //                before.push_back(after.back());
    //                after.pop_back();
    //            }
    //        }
    //        else if (arg0 == 'B')
    //        {
    //            if (!before.empty())
    //            {
    //                before.pop_back();
    //            }
    //        }
    //        else if (arg0 == 'P')
    //        {
    //            char arg1;
    //            cin >> arg1;

    //            before.push_back(arg1);
    //        }
    //    }

    //    while (!before.empty())
    //    {
    //        after.push_back(before.back());
    //        before.pop_back();
    //    }

    //    while (!after.empty())
    //    {
    //        cout << after.back();
    //        after.pop_back();
    //    }

    //    system("pause");

    //    return 0;
    //}
}

void problem10828()
{
//#include <iostream>
//#include <string>
//#include <vector>
//    using namespace std;
//
//    using value_t = unsigned int;
//
//    int main()
//    {
//        ios::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        value_t n = 0;
//        cin >> n;
//
//        vector<value_t> stack;
//
//        string cmd;
//        for (value_t i = 0; i < n; ++i)
//        {
//            cin >> ws >> cmd;
//
//            if (cmd == "push")
//            {
//                value_t num = 0;
//                cin >> num;
//
//                stack.push_back(num);
//            }
//            else if (cmd == "pop")
//            {
//                if (stack.empty())
//                {
//                    cout << -1 << '\n';
//                }
//                else
//                {
//                    cout << stack.back() << '\n';
//
//                    stack.pop_back();
//                }
//            }
//            else if (cmd == "size")
//            {
//                cout << stack.size() << '\n';
//            }
//            else if (cmd == "empty")
//            {
//                cout << stack.empty() << '\n';
//            }
//            else if (cmd == "top")
//            {
//                if (stack.empty())
//                {
//                    cout << -1 << '\n';
//                }
//                else
//                {
//                    cout << stack.back() << '\n';
//                }
//            }
//        }
//
//        return 0;
//    }

}

void problem9012()
{
//#include <iostream>
//#include <string>
//#include <vector>
//    using namespace std;
//
//    using value_t = char;
//
//    int main()
//    {
//        ios::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        unsigned int t = 0;
//        cin >> t;
//
//        for (unsigned int i = 0; i < t; ++i)
//        {
//            string str;
//            getline(cin >> ws, str);
//
//            bool isValid = true;
//
//            if (str.size() % 2 != 0)
//            {
//                isValid = false;
//            }
//
//            vector<value_t> stack;
//
//            for (auto c : str)
//            {
//                if (false == isValid)
//                {
//                    break;
//                }
//
//                if (c == '(')
//                {
//                    stack.push_back(c);
//                }
//                else if (c == ')')
//                {
//                    if (stack.empty())
//                    {
//                        isValid = false;
//                        break;
//                    }
//
//                    stack.pop_back();
//                }
//            }
//
//            if (!stack.empty())
//            {
//                isValid = false;
//            }
//
//            if (isValid)
//            {
//                cout << "YES\n";
//            }
//            else
//            {
//                cout << "NO\n";
//            }
//        }
//
//        return 0;
//    }
}

void problem10799()
{
//#include <iostream>
//#include <vector>
//#include <string>
//    using namespace std;
//
//    int main()
//    {
//        ios::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        string input;
//        cin >> ws >> input;
//
//        const char open = '(';
//        const char close = ')';
//
//        size_t numPipe = 0;
//        vector<char> stack;
//        char before = 0;
//        for (auto c : input)
//        {
//            if (c == open)
//            {
//                stack.push_back(c);
//            }
//            else if (c == close)
//            {
//                if (stack.empty())
//                {
//                    //cout << "Â¦ÀÌ ¾È ¸ÂÀ½\n";
//                    break;
//                }
//
//                if (before == open)
//                {
//                    stack.pop_back();
//
//                    numPipe += stack.size();
//                }
//                else if (before == close)
//                {
//                    stack.pop_back();
//
//                    numPipe++;
//                }
//            }
//
//            before = c;
//        }
//
//        cout << numPipe;
//
//        return 0;
//    }
}

void problem1406()
{
//#include <iostream>
//#include <vector>
//#include <string>
//    using namespace std;
//
//    using value_t = unsigned int;
//
//    int main()
//    {
//        ios::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        string str;
//        cin >> ws >> str;
//
//        vector<char> before(str.begin(), str.end());
//        vector<char> after;
//
//        value_t t = 0;
//        cin >> t;
//
//        for (value_t ti = 0; ti < t; ++ti)
//        {
//            char command = 0;
//            cin >> command;
//
//            if (command == 'L')
//            {
//                if (false == before.empty())
//                {
//                    after.push_back(before.back());
//                    before.pop_back();
//                }
//            }
//            else if (command == 'D')
//            {
//                if (false == after.empty())
//                {
//                    before.push_back(after.back());
//                    after.pop_back();
//                }
//            }
//            else if (command == 'B')
//            {
//                if (false == before.empty())
//                {
//                    before.pop_back();
//                }
//            }
//            else if (command == 'P')
//            {
//                char ch = 0;
//                cin >> ch;
//
//                before.push_back(ch);
//            }
//        }
//
//        cout << string(before.begin(), before.end()) << string(after.rbegin(), after.rend());
//
//        return 0;
//    }
}