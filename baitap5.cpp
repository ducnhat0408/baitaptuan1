#include <iostream>

using namespace std;

int main()
{
    int ng, t, n;
    cout << "Nhap ngay: " ;
    cin >> ng;
    cout << "Nhap thang: " ;
    cin >> t;
    cout << "Nhap nam: " ;
    cin >> n;
    switch (t){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            if ((ng > 0 && ng <= 31) && ((ng % 4 == 0) && (ng % 100) != 0) || (ng % 400 == 0)){
                cout << "\n>>nam nhuan<<\n";
                break;
            }
            else if ((ng > 0 && ng <= 31) && ((ng % 4 != 0) || (ng % 400 != 0))){
                cout << "\n>>nam khong nhuan<<\n";
                break;
            }
            else{
                cout << "\n>>ngay thang nam khong hop le<<\n";
                break;
            }
        }
        case 4: case 6: case 9: case 11:{
            if ((ng > 0 && ng <= 30) && ((ng % 4 == 0) && (ng % 100) != 0) || (ng % 400 == 0)){
                cout << "\n>>nam nhuan<<\n";
                break;
            }
            else if ((ng > 0 && ng <= 30) && ((ng % 4 != 0) || (ng % 400 != 0))){
                cout << "\n>>nam khong nhuan<<\n";
                break;
            }
            else{
                cout << "\n>>ngay thang nam khong hop le<<\n";
                break;
            }
        }
        case 2:{
            if ((ng > 0 && ng <= 29) && ((ng % 4 == 0) && (ng % 100) != 0) || (ng % 400 == 0)){
                cout << "\n>>nam nhuan<<\n";
                break;
            }
            else if ((ng > 0 && ng <= 29) && ((ng % 4 != 0) || (ng % 400 != 0))){
                cout << "\n>>nam khong nhuan<<\n";
                break;
            }
            else{
                cout << "\n>>ngay thang nam khong hop le<<\n";
                break;
            }
        }
        default: cout << "\n>>nam khong hop le<<\n";
        break;
    }
    return 0;
}
