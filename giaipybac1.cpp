

#include <iostream>
using namespace std;
int main() {
    int a, b;
    float x;
    cout <<"UNG DUNG GIAI PHUONG TRINH BAC 1\n";
    cout << "nhap a:"; cin >> a;
    cout << "nhap b:"; cin >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "PT dung voi x ~vo so nghiem\n";
        }
        else {
            cout << "PT vo nghiem\n";
        }
        
    }
    else {
        x = (float)-b / a;
        cout << "ket qua x=" << x << endl;
    }
    
    return 0;
}

