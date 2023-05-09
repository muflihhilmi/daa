#include <iostream>

using namespace std;

int main(){
    int pil;
    char back;
    int a = 10;
    int b = 5;
    int c;
    do{
        system ("clear");
        cout<<"0.exit"<<endl;
        cout<<"1.penjumlahan"<<endl;
        cout<<"pilih : ";
        cin>> pil;

        switch(pil){
            case 0:
            cout << "exit"<<endl;
            return 0;
            case 1:
            system ("clear");
            c = a+b;
            cout<<c<<endl;
            break;
        default:
            system ("clear");
            cout <<"pilihan salah"<<endl;
        }
        cout<<"pilih kembali? [y/t]"<<endl;
        cin >>back;
    }
    while(back !='t');
    cout<<"thanks"<<endl;
    return 0;
}