#pragma once
#include "stdafx.h"

void IronPipe()
{
    const char kOpen = '(';
    const char kClose = ')';

    char last = 0;
    int count = 0;
    int result = 0;

    char ch = 0;
    int numSuccess = 0;
    while (true)
    {
        last = ch;
        numSuccess = scanf("%c", &ch);

        if (numSuccess != 1) 
            break;

        if (ch == '\n')
            break;

        if (ch == kOpen)
        {
            ++count;
        }
        else if (ch == kClose)
        {
            if (last == kOpen)
            {
                --count;
                result += count;
            }
            else if (last == kClose)
            {
                --count;
                result += 1;
            }
        }
    }

    printf("%d", result);
}