#include <iostream>

using namespace std;

int ucln(int a, int b)
{
    int u;
    if (a < b)
    u = a;
    else
    u = b;
    while ((a % u != 0) || (b % u != 0))
    u--;
    return u;
}
int main()
{
    int m,n,bcnn;
    cout << "nhap so nguyen m: ";
    cin >> m;
    cout << "\nnhap so nguyen n: ";
    cin >> n;
    bcnn = (m*n)/ucln(m,n);
    cout << "\nUCLN cua 2 so m va n la: " << ucln(m,n);
    cout << "\nBCNN cua 2 so m va n la: " << bcnn;
    return 0;
}
