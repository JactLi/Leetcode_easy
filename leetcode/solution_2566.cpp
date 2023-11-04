#include "solution.h"

int solution_2566::minMaxDifference(int num)
{
    string s1 = to_string(num);
    string s2 = to_string(num);
    char c1;
    char c2 = s1[0];
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != '9')
        {
            c1 = s1[i];
            break;
        }
    }

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == c1) s1[i] = '9';
        if (s2[i] == c2) s2[i] = '0';
        
    }
    return stoi(s1) - stoi(s2);
}