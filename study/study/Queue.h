#pragma once

void Josepus1158()
{
//#include <iostream>
//#include <deque>
//    using namespace std;
//
//    int main()
//    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        int n, m;
//        cin >> n >> m;
//
//        cout << '<';
//        deque<int> ns(n);
//        for (int i = 0; i < ns.size(); ++i)
//            ns[i] = i + 1;
//
//        const int n_1 = n - 1;
//        const int m_1 = m - 1;
//        for (int ni = 0; ni < n_1; ++ni)
//        {
//            for (int mi = 0; mi < m_1; ++mi)
//            {
//                ns.push_back(ns.front());
//                ns.pop_front();
//            }
//            cout << ns.front() << ", ";
//            ns.pop_front();
//        }
//        cout << ns.front() << '>';
//
//        system("pause");
//
//        return 0;
//    }
}

void problem10845()
{
//#include <iostream>
//#include <deque>
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
//        value_t n = 0;
//        cin >> n;
//
//        deque<value_t> queue;
//
//        string cmd = "";
//        value_t arg = 0;
//        for (value_t ni = 0; ni < n; ++ni)
//        {
//            cin >> ws >> cmd;
//
//            if (cmd == "push")
//            {
//                cin >> arg;
//
//                queue.push_back(arg);
//            }
//            else if (cmd == "pop")
//            {
//                if (queue.empty())
//                {
//                    cout << -1 << '\n';
//                }
//                else
//                {
//                    cout << queue.front() << '\n';
//                    queue.pop_front();
//                }
//            }
//            else if (cmd == "size")
//            {
//                cout << queue.size() << '\n';
//            }
//            else if (cmd == "empty")
//            {
//                cout << queue.empty() << '\n';
//            }
//            else if (cmd == "front")
//            {
//                if (queue.empty())
//                {
//                    cout << -1 << '\n';
//                }
//                else
//                {
//                    cout << queue.front() << '\n';
//                }
//            }
//            else if (cmd == "back")
//            {
//                if (queue.empty())
//                {
//                    cout << -1 << '\n';
//                }
//                else
//                {
//                    cout << queue.back() << '\n';
//                }
//            }
//        }
//
//        return 0;
//    }
}

void problem1158()
{
//#include <iostream>
//#include <deque>
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
//        value_t n = 0;
//        cin >> n;
//
//        value_t m = 0;
//        cin >> m;
//
//        deque<value_t> queue(n);
//        for (value_t ni = 0; ni < n; ++ni)
//            queue[ni] = ni + 1;
//
//        const value_t m_minus_1 = m - 1;
//        cout << '<';
//        while (queue.size() > 1)
//        {
//            for (value_t i = 0; i < m_minus_1; ++i)
//            {
//                queue.push_back(queue.front());
//                queue.pop_front();
//            }
//
//            cout << queue.front() << ", ";
//            queue.pop_front();
//        }
//
//        cout << queue.front() << '>';
//
//        return 0;
//    }
}

void problem10845Cstyle()
{
//#include <stdio.h>
//#include <string.h>
//#include <deque>
//    using namespace std;
//
//    using value_t = unsigned int;
//
//    int main()
//    {
//        value_t n = 0;
//        scanf("%u", &n);
//
//        deque<value_t> queue;
//
//        char cmd[12] = { 0, };
//        value_t arg = 0;
//        for (value_t ni = 0; ni < n; ++ni)
//        {
//            scanf("%s", cmd);
//
//            if (strcmp(cmd, "push") == 0)
//            {
//                scanf("%u", &arg);
//
//                queue.push_back(arg);
//            }
//            else if (strcmp(cmd, "pop") == 0)
//            {
//                if (queue.empty())
//                {
//                    printf("-1\n");
//                }
//                else
//                {
//                    printf("%u\n", queue.front());
//
//                    queue.pop_front();
//                }
//            }
//            else if (strcmp(cmd, "size") == 0)
//            {
//                printf("%u\n", queue.size());
//            }
//            else if (strcmp(cmd, "empty") == 0)
//            {
//                printf("%u\n", queue.empty());
//            }
//            else if (strcmp(cmd, "front") == 0)
//            {
//                if (queue.empty())
//                {
//                    printf("-1\n");
//                }
//                else
//                {
//                    printf("%u\n", queue.front());
//                }
//            }
//            else if (strcmp(cmd, "back") == 0)
//            {
//                if (queue.empty())
//                {
//                    printf("-1\n");
//                }
//                else
//                {
//                    printf("%u\n", queue.back());
//                }
//            }
//        }
//
//        return 0;
//    }
}