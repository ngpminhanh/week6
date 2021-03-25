#include <iostream>
using namespace std;
double H(int N)
{
    if (N == 1) return 1.0;
    return H(N) + 1.0/N;
}
int main()
{
    int n;
    cin >> n;
    cout << H(n);
    // máy không in ra gì cả khi chạy thử
    // nguyên nhân là do hàm return H(N) chứ không phải là H(N-1)

}
