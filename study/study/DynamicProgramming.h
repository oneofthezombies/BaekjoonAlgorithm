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

void YiCheonSu2193()
{
	//using value_t = unsigned long long;
	//using arr2d_t = vector<vector<value_t>>;

	//value_t func(arr2d_t& d, const value_t n, const value_t l)
	//{
	//	if (n < 1)
	//	{
	//		return 0;
	//	}

	//	if (d[n][l] > 0)
	//	{
	//		return d[n][l];
	//	}

	//	if (n == 1)
	//	{
	//		d[n][l] = 1;
	//		return d[n][l];
	//	}

	//	if (l == 0)
	//	{
	//		d[n][l] = func(d, n - 1, 0) + func(d, n - 1, 1);
	//		return d[n][l];
	//	}
	//	else // l == 1
	//	{
	//		d[n][l] = func(d, n - 1, 0);
	//		return d[n][l];
	//	}
	//}

	//int main()
	//{
	//	ios::sync_with_stdio(false);
	//	cin.tie(nullptr);
	//	cout.tie(nullptr);

	//	value_t input(0);
	//	cin >> input;

	//	arr2d_t d(input + 1, vector<value_t>(2, 0));

	//	cout << func(d, input, 1);

	//	return 0;
	//}
}

void Stair10844()
{
//	using value_t = unsigned long long;
//using arr2d_t = vector<vector<value_t>>;
//
//value_t func(arr2d_t& d, const value_t n, const value_t s)
//{
//	if (n < 1)
//	{
//		return 0;
//	}
//
//	if (d[n][s] > 0)
//	{
//		return d[n][s];
//	}
//
//	if (n == 1)
//	{
//		d[n][s] = 1;
//		return d[n][s];
//	}
//
//	if (s == 0)
//	{
//		d[n][s] = func(d, n - 1, s + 1);
//	}
//	else if (s == 9)
//	{
//		d[n][s] = func(d, n - 1, s - 1);
//	}
//	else // 0 < s < 9
//	{
//		d[n][s] = func(d, n - 1, s - 1) + func(d, n - 1, s + 1);
//	}
//
//	d[n][s] %= 1000000000;
//	return d[n][s];
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	value_t input = 0;
//	cin >> input;
//
//	arr2d_t d(input + 1, vector<value_t>(10, 0));
//
//	value_t res = 0;
//	for (int i = 1; i <= 9; ++i)
//	{
//		res += func(d, input, i);
//	}
//	res %= 1000000000;
//	cout << res;
//
//	return 0;
//}
}

void problem11057()
{
	//using value_t = int;
	//using arr2d_t = vector<vector<value_t>>;

	//value_t func(arr2d_t& d, value_t n, value_t m)
	//{
	//	if (n < 1)
	//	{
	//		return 0;
	//	}

	//	if (d[n][m] > 0)
	//	{
	//		return d[n][m];
	//	}

	//	if (n == 1)
	//	{
	//		d[n][m] = 1;
	//		return d[n][m];
	//	}

	//	value_t sum = 0;
	//	for (value_t i = 9; i >= m; --i)
	//	{
	//		sum += func(d, n - 1, i);
	//		sum %= 10007;
	//	}

	//	d[n][m] = sum;
	//	return d[n][m];
	//}

	//int main()
	//{
	//	ios::sync_with_stdio(false);
	//	cin.tie(nullptr);
	//	cout.tie(nullptr);

	//	value_t input = 0;
	//	cin >> input;

	//	arr2d_t d(input + 1, vector<value_t>(10, 0));

	//	value_t res = 0;
	//	for (value_t i = 9; i >= 0; --i)
	//	{
	//		res += func(d, input, i);
	//		res %= 10007;
	//	}

	//	cout << res;

	//	return 0;
	//}

}

void problem9465()
{
//#include <iostream>
//#include <vector>
//	using namespace std;
//
//	using value_t = long long;
//	using arr2d_t = vector<vector<value_t>>;
//
//	int main()
//	{
//		ios::sync_with_stdio(false);
//		cin.tie(nullptr);
//		cout.tie(nullptr);
//
//		value_t t = 0;
//		cin >> t;
//
//		for (value_t ti = 0; ti < t; ++ti)
//		{
//			value_t n = 0;
//			cin >> n;
//
//			arr2d_t table(n + 1, vector<value_t>(2, 0));
//			arr2d_t memo(n + 1, vector<value_t>(3, 0));
//
//			for (value_t i = 0; i < 2; ++i)
//			{
//				for (value_t j = 1; j <= n; ++j)
//				{
//					cin >> table[j][i];
//				}
//			}
//
//			auto maxFunc = [](const value_t a, const value_t b, const value_t c)
//			{
//				value_t max = a;
//
//				if (b > max)
//					max = b;
//
//				if (c > max)
//					max = c;
//
//				return max;
//			};
//
//			memo[1][1] = table[1][0];
//			memo[1][2] = table[1][1];
//			value_t max = 0;
//			for (value_t mi = 2; mi >= 0; --mi)
//			{
//				for (value_t di = 2; di <= n; ++di)
//				{
//					memo[di][0] = maxFunc(memo[di - 1][0], memo[di - 1][1], memo[di - 1][2]);
//					memo[di][1] = maxFunc(memo[di - 1][0], memo[di - 1][2], 0) + table[di][0];
//					memo[di][2] = maxFunc(memo[di - 1][0], memo[di - 1][1], 0) + table[di][1];
//				}
//			}
//
//			max = maxFunc(memo[n][0], memo[n][1], memo[n][2]);
//
//			cout << max << '\n';
//		}
//
//		return 0;
//	}
}

void problem2156()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    using value_t = long long;
//    using arr2d_t = vector<vector<value_t>>;
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
//        vector<value_t> table(n + 1, 0);
//
//        for (value_t ni = 1; ni <= n; ++ni)
//        {
//            cin >> table[ni];
//        }
//
//        arr2d_t memo(n + 1, vector<value_t>(3, 0));
//
//        memo[1][0] = 0;
//        memo[1][1] = table[1];
//        memo[1][2] = 0;
//
//        auto max = [](const value_t a, const value_t b, const value_t c)
//        {
//            value_t max = a;
//
//            if (b > max)
//                max = b;
//
//            if (c > max)
//                max = c;
//
//            return max;
//        };
//
//        for (value_t i = 2; i <= n; ++i)
//        {
//            memo[i][0] = max(memo[i - 1][0], memo[i - 1][1], memo[i - 1][2]);
//            memo[i][1] = memo[i - 1][0] + table[i];
//            memo[i][2] = memo[i - 1][1] + table[i];
//        }
//
//        cout << max(memo[n][0], memo[n][1], memo[n][2]);
//
//        return 0;
//    }

}

void problem11053()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    using value_t = long long;
//    using arr_t = vector<value_t>;
//    using arr2d_t = vector<vector<value_t>>;
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
//        arr_t A(n + 1, 0);
//        arr_t D(n + 1, 0);
//
//        for (value_t ai = 1; ai <= n; ++ai)
//            cin >> A[ai];
//
//        value_t max = 0;
//        for (value_t i = 1; i <= n; ++i)
//        {
//            value_t local_max = 0;
//            for (value_t j = i - 1; j >= 1; --j)
//            {
//                if (A[j] < A[i])
//                {
//                    if (D[j] > local_max)
//                    {
//                        local_max = D[j];
//                    }
//                }
//            }
//
//            D[i] = local_max + 1;
//
//            if (D[i] > max)
//                max = D[i];
//        }
//
//        cout << max;
//
//        return 0;
//    }
}

void problem11055()
{
//#include <iostream>
//#include <vector>
//    using namespace std;
//
//    using value_t = long long;
//    using arr_t = vector<value_t>;
//    using arr2d_t = vector<vector<value_t>>;
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
//        arr_t A(n + 1, 0);
//        arr_t D(n + 1, 0);
//
//        for (value_t ai = 1; ai <= n; ++ai)
//        {
//            cin >> A[ai];
//        }
//
//        auto max = [](const value_t lhs, const value_t rhs) -> value_t
//        {
//            return lhs > rhs ? lhs : rhs;
//        };
//
//        value_t sum_max = 0;
//        for (value_t i = 1; i <= n; ++i)
//        {
//            value_t local_sum_max = 0;
//            for (value_t j = i - 1; j >= 1; --j)
//            {
//                if (A[j] < A[i])
//                {
//                    local_sum_max = max(D[j], local_sum_max);
//                }
//            }
//
//            D[i] = local_sum_max + A[i];
//
//            sum_max = max(D[i], sum_max);
//        }
//
//        cout << sum_max;
//
//        return 0;
//    }
}