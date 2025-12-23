//  LETURE 3 CONDITIONAL.....LOOPS..........

// question : Sum of all the number from 1 to N which are divisible by 3;

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int N = 10;
    for (int i = 0; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
