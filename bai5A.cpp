#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int fn_2 = 0;
    int fn_1 = 1;
    int fn = 1;
    if(n == 0) return n;
    if(n == 1 ) return 1;
    if(n >= 2)
    {
        for(int i = 2; i < n; i++)
        {
            fn_2 = fn_1;
            fn_1 = fn;
            fn = fn_1 + fn_2;
        }
        return fn;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}
