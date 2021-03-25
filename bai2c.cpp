
#include <iostream>

using namespace std;
int x;


void hoanvi(int k, char* a, char* b, int* use, int n)

{

    for(int i = 1; i <= n; i++)
    {
        if(!use[i])
        {
           a[k] = b[i-1];
           use[i] = 1;
           if(k == x)
           {
               for(int i = 1; i <= x  ; i++) cout << a[i];
                cout << endl;
           }
           else hoanvi(k+1, a,b, use, n);
           use[i] =0;

        }
    }
}
int main()
{

    int n;
    cin >> n >> x;
    char b[n];
    for (int i =0; i < n; i++)
    {
        b[i] = ('a' + i);
    }

    char a[n+1];
    int use[n+1] = {0};
    hoanvi(1, a, b, use, n);
}
