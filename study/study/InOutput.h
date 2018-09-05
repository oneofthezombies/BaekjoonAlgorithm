#pragma once
#include "stdafx.h"

void FastIO()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

void CWhile()
{
    int a, b;
    const int numSuccess = 2; // a, b
    while (scanf("%d %d", &a, &b) == numSuccess)
    {

    }
}

void CppWhile()
{
    int a, b;
    while (cin >> a >> b)
    {

    }
}

void CGetLine1()
{
    char s[256];
    scanf("%s", s);
}

void CGetLine2()
{
    char s[256];
    fgets(s, 100, stdin);
}

void CGetLine3()
{
    char s[256];
    scanf("%[^\n]\n", s);
}

void CppGetLine()
{
    std::string s;
    std::getline(cin, s);
}

void CGetSeperatedNumber()
{
    int x;
    scanf("%1d", &x); // 12345 -> 1, 2, 3, 4, 5
}

void CGetSeperatedString()
{
    char s[256];
    scanf("%10s", s);
}