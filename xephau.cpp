#include <iostream>
#include <math.h>

using namespace std;

int a[1000];
bool thoaman(int x, int y)
{
    for(int i = 1; i < x; i++)
    {
        if(a[i] == y || abs(a[i] - y) == abs(i - x)) return false;
    }
    return true;
}
void print(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i, int n)
{
    for(int j = 1; j <= n; j++)
    {
        if(thoaman(i, j))
        {
            a[i] = j;
            if(i == n)
            {
                print(n);
            }
            else
            {
                Try(i+1,n);
            }

        }

    }
}
int main()
{
    int n;
    cin >> n;
    Try(1,n);
}
