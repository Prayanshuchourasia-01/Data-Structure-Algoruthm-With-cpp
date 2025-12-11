#include <iostream>
using namespace std;
int main()
{

    int factorial = 1;
    int N = 10;

    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << N << " is " << factorial;

    return 0;
}