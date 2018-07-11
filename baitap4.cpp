#include <iostream>

using namespace std;

int main()
{
    int i,j,h; // chiều cao của tam giác
    cout << "nhap chieu cao cua tam giac: " ;
    cin >> h;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j<= h-i; j++)
            cout <<" " ;
        for (int j = 1; j <= 2*i-1; j++)
            cout <<"*" ;
            cout <<"\n";
    }
    return 0;
}
