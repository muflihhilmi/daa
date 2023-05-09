#include <iostream>

using namespace std;

int main(){
    char back;
    int a = 10;
    int b = 5;
    int c, pil;

    pilihan:
    cout<<"0.exit"<<endl;
    cout<<"1.penjumlahan"<<endl;
    cout<<"Pilihan: ";
    cin>>pil;
    system ("clear");

    if(pil==0){
        cout<<"thanks"<<endl;
        return 0;
    } else if(pil==1){
        c=a+b;
        cout<<c<<endl;
        goto pilihan;
    }else{
        cout<<"Pilihan Salah"<<endl;
        goto pilihan;
    }
    return 0;
}