#include <iostream>
#include <string>

using namespace std;

//hàm xóa khoảng trống đầu dòng
void xoa_daudong(string &s){
    while (s[0] == ' '){
            s.erase(s.begin() + 0); // xóa đi kí tự tại vị trí 0
    }
}
// hàm xóa khoảng trống cuối dòng
void xoa_cuoidong(string &s){
    while (s[s.length()-1] == ' '){
        s.erase(s.begin() + (s.length()-1));
    }
}
// xóa 2 khoảng trắng cạnh nhau
void xoa_khoangtrang(string &s){
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            s.erase(s.begin() + i);
            i--;
        }
        if ((s[i] == ' ' && s[i+1] == ',') || (s[i] == ' ' && s[i+1] == '.')){
            s.erase(s.begin() + i);
        }
    }
}
//xóa 2 dấu chấm hoặc 2 dấu phẩy cạnh nhau
void xoa_dau_cham_phay(string &s){
    for(int i = 0; i <= s.length(); i++){
        if((s[i] == ',' && s[i+1] == ',') || ((s[i] == '.') && (s[i+1] == '.'))){
            s.erase(s.begin() + i);
            i--;
        }
    }
}
//thêm dấu cách vào sau dấu phẩy và dấu chấm
void them_daucach(string &s){
    for(int i = 0; i <= s.length(); i++){
        if((s[i] == ',' && s[i+1] != ' ') || ((s[i] == '.') && (s[i+1] != ' '))){
            s.insert((i+1), " ");
        }
    }
}
//viết hoa chữ cái đầu dòng và sau dấu chấm
void viethoa(string &s){
    for(int i=0; i < s.length(); i++){
        if ((s[0] >= 97) && (s[0] <= 122)){
			s[0] -= 32;
		}
		if ((s[i] == '.') && (s[i + 1] == ' ')){
			if ((s[i + 2] >= 97) && (s[i + 2] <= 122)){
				s[i + 2] -= 32;
			}
        }
}
}
// hàm chuyển tất cả về chữ thường
void chuthuong(string &s){
    for(int i=0; i < s.length(); i++){
        if ((s[i] >= 65) && (s[i] <= 90)){
            s[i] += 32;
        }
    }
}

int main(){
    string s;
    cout << "nhap chuoi vao chuoi s: " ;
    getline(cin, s);

    chuthuong(s);
    xoa_daudong(s);
    xoa_cuoidong(s);
    xoa_khoangtrang(s);
    xoa_dau_cham_phay(s);
    them_daucach(s);
    viethoa(s);

    cout << "chuoi s duoc chuan hoa la: " << ">>" << s <<"<<";
    return 0;
}
