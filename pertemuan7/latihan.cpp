#include <iostream>
#include "kalkulator.cc"

using namespace std;

int main (){
    kalkulator k;
    int pilih;
    char pil;

    menu :
    cout<<"0. Exit"<<endl;
    cout<<"1. Tambah"<<endl;
    cout<<"2. Kurang"<<endl;
    cout<<"3. Bagi"<<endl;
    cout<<"4. Kali"<<endl;
    cout<<"Pilihan : ";
    cin>>pilih;
    system("clear");

    switch(pilih){
        case 0:
            goto menu;
            break;
        case 1:
            k.input();
            cout << "Hasil : "<< k.tambah()<<endl;
            break;
        case 2:
            k.input();
            cout << "Hasil : "<< k.kurang()<<endl;
            break;
        case 3:
            k.input();
            cout << "Hasil : "<< k.bagi()<<endl;
            break;
        case 4:
            k.input();
            cout << "Hasil : "<< k.kali()<<endl;
            break;
        default:
            cout<<"pilihan salah"<<endl;
            break;
    }
    cout<<"kembali ke menu (y/n) : ";
    cin>>pil;
    system ("clear");
    if ((pil=='y') ||( pil=='Y')){
        goto menu;
    } else{
        return 0;
    }
}