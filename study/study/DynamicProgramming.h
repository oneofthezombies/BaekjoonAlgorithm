#pragma once

void ToOne_1463()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    int ToOne(const int n, vector<int>& d)
//    {
//        if (n == 1)
//            return 0;
//
//        if (d[n] > 0)
//            return d[n];
//
//        d[n] = ToOne(n - 1, d) + 1;
//
//        if (n % 2 == 0)
//        {
//            int temp = ToOne(n / 2, d) + 1;
//            if (d[n] > temp)
//                d[n] = temp;
//        }
//
//        if (n % 3 == 0)
//        {
//            int temp = ToOne(n / 3, d) + 1;
//            if (d[n] > temp)
//                d[n] = temp;
//        }
//
//        return d[n];
//    }
//
//    int main()
//    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        int n;
//        cin >> n;
//
//        vector<int> d(n + 1, 0);
//
//        int res = ToOne(n, d);
//
//        cout << res;
//
//        //system("pause");
//
//        return 0;
//    }

}

void Tiling_11726()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    using value_t = unsigned long long;
//
//    value_t GetNumTiling(const value_t n, vector<value_t>& d)
//    {
//        if (d[n] > 0)
//        {
//            return d[n];
//        }
//
//        if (n == 0 ||
//            n == 1)
//        {
//            d[n] = 1;
//            return d[n];
//        }
//
//        const value_t val = GetNumTiling(n - 1, d) + GetNumTiling(n - 2, d);
//        d[n] = val % 10007;
//        return d[n];
//    }
//
//    int main()
//    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        value_t n;
//        cin >> n;
//
//        vector<value_t> numTiling(n + 1, 0);
//
//        cout << GetNumTiling(n, numTiling);
//
//        return 0;
//    }
}

void Tiling2_11727()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    using value_t = unsigned long long;
//
//    value_t GetNumTiling(const value_t n, vector<value_t>& d)
//    {
//        if (d[n] > 0)
//        {
//            return d[n];
//        }
//
//        if (n == 0 ||
//            n == 1)
//        {
//            d[n] = 1;
//            return d[n];
//        }
//
//        const value_t val = GetNumTiling(n - 1, d) + 2 * GetNumTiling(n - 2, d);
//        d[n] = val % 10007;
//        return d[n];
//    }
//
//    int main()
//    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        value_t n;
//        cin >> n;
//
//        vector<value_t> numTiling(n + 1, 0);
//
//        cout << GetNumTiling(n, numTiling);
//
//        return 0;
//    }
}

void AddOneTwoThree_9095()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    using value_t = int;
//
//    value_t GetNumComb(const value_t n, vector<value_t>& d)
//    {
//        if (n < 0)
//        {
//            return 0;
//        }
//
//        if (d[n] > 0)
//        {
//            return d[n];
//        }
//
//        if (n == 0)
//        {
//            d[n] = 1;
//            return d[n];
//        }
//
//        d[n] = GetNumComb(n - 1, d) + GetNumComb(n - 2, d) + GetNumComb(n - 3, d);
//
//        return d[n];
//    }
//
//    int main()
//    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(nullptr);
//        cout.tie(nullptr);
//
//        int t;
//        cin >> t;
//
//        for (value_t ti = 0; ti < t; ++ti)
//        {
//            int n;
//            cin >> n;
//            vector<value_t> d(n + 1, 0);
//            cout << GetNumComb(n, d) << '\n';
//        }
//
//        return 0;
//    }
}
