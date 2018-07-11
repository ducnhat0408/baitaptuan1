#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int kthoa(string &s){
    int i, dem=0;
    for (i=0; i < s.length(); i++ ){
        if (s[i] >= 'A' &&  s[i] <= 'Z')
        dem++;
    }
    return dem;
}

int ktthuong(string &s){
    int i, dem=0;
    for(i=0; i < s.length(); i++){
        if (s[i] >= 'a' && s[i] <= 'z')
        dem++;
    }
    return dem;
}

int main()
{
    string s;
    cout << "nhap xau tu ban phim: " ;
    getline(cin, s);
    cout << "\nso ki tu hoa la: " << kthoa(s) ;
    cout << "\nso ki tu thuong la: "  << ktthuong(s) ;
    return 0;
}




