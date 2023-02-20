#include <iostream>
using namespace std;

//Code Written By: Vikash Patel

int main()
{
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
} 
