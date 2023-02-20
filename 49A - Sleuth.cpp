#include <bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    char s[110];
    cin.getline(s, sizeof(s) / sizeof(s[0]), '\n');
    bool vowel(true);
    char* p = s;
    while (*p != '\0')
    {
        if (*p >= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z')
        {
            if (*p == 'a' ||*p == 'e' ||*p == 'i' ||*p == 'o' ||*p == 'u' ||*p == 'y' ||
                *p == 'A' ||*p == 'E' ||*p == 'I' ||*p == 'O' ||*p == 'U' ||*p == 'Y')
            {
                vowel = true;
            }
            else
            {
                vowel = false;
            }
        }
        ++p;
    }
    cout << (vowel ? "YES" : "NO") << endl;
    return 0;
}
