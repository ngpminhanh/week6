
#include <iostream>
using namespace std;
double H(int N)
{
    return H(N-1) +1.0/N;
}
int main()
{
    int n;
    cin >> n;
    cout << H(n);
}
// hiện tượng khi chạy đó là không in ra gì cả
// nguyên nhân là do hàm return H(N-1) nhưng mà H(N-1) không return một giá trị xác định
