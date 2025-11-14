#include <iostream>
using namespace std;

void topla() {
    
    int k = 5, e = 3;
    cout << "1. sayıyı girin \t: " ;
    cin >> k;
    cout << "2. sayıyı girin \t: " ;
    cin >> e;
    int toplam = k + e;
    cout << "sayıların toplamı \t: " << toplam << endl;
}
void cikar()
{
    int fark,k = 5, e = 3;
    cout << "1. sayıyı girin \t: " ;
    cin >> k;
    cout << "2. sayıyı girin \t: " ;
    cin >> e;
    
    if(k > e)
    {
        fark = k - e;
    }
    else
    {
        fark = e - k;
    }
    
    cout << "sayıların farkı \t: " <<  fark;
}
int main() {
    std::cout << "===== Hesap Makinesi ===== \n\n";
    topla();    
    cikar();
    return 0;
}
