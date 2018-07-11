#include <iostream>

using namespace std;

float tinhtien(int s){
    float t; // số tiền phải trả
    if (s < 1000){
        t = 10000;
    }
    else if ((s >= 1000) && (s <= 30000)){
        float a=s-1000;
        t = (10000 + (a/200)*1500);
    }
    else {
        float b=(s-30000);
        t = (10000 + ((29000/200)*1500) + (b/1000)*8000);
    }
    return t;
}
int main()
{
    int s;
    cout << "nhap do dai doan duong da di: " ;
    cin >> s;
    cout << "so tien phai ban phai tra tai xe la: " << tinhtien(s) ;
    return 0;
}
