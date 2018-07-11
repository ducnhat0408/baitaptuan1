#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, x, y, z, doicho;
    cout << " nhap so nguyen co 3 chu so: " ; cin >> a;
    x = a / 100;
    y = (a % 100) / 10;
    z = a % 10;
    if (x < y){
        doicho = x;
        x = y;
        y = doicho;
    }
    if (x < z){
        doicho = x;
        x = z;
        z = doicho;
    }
    if(y < z){
        doicho = y;
        y = z;
        z = doicho;
    }
    cout << "thu tu giam dan la " << x << y << z ;
    return 0;
}
