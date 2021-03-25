#include <iostream>

using namespace std;
int n;

void hoanvi(int k, int* a, int* use)

{


    for(int i = 1; i <= n; i++)
    {
        if(!use[i])
        {
           a[k] = i;
           use[i] = 1;
           if(k == n)
           {
               for(int i = 1; i <= n; i++) cout << a[i] <<" ";
                cout << endl;
           }
           else hoanvi(k+1, a, use);
           use[i] =0;

        }
    }
}
int main()
{

    cin >> n;
    int a[n+1];
    int use[n+1] = {0};
    hoanvi(1, a, use);
}
