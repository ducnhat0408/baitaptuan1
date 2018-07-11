#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "nhap xau: " ;
    getline(cin, s);
    cout << "xau dao nguoc la: " ;
    for (int i = s.length()-1; i>=0; i--)
    {
        cout << s[i];
    }
    cout << "\n";
    return 0;
}
