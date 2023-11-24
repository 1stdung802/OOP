#include <iostream>
using namespace std;
class SoNguyen{
	private:
    	int soX;
    	int soY;

public:
    SoNguyen(int a, int b) : soX(a), soY(b) {}

    int TinhTong() const {
        return soX + soY;
    }
};

int main() {
    int a, b;
    cin >> a >> b; 
    SoNguyen tongHaiSo(a, b);
    int ketQua = tongHaiSo.TinhTong();
    cout<< ketQua <<endl;
    return 0;
}
