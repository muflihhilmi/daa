#include <iostream>

using namespace std;

void loopfor(){
    for (int a =10; a>=3; a--){
    cout <<a <<endl;}
}
void penjumlahan(){
    int a = 10;
    int b = 5;
    int c;
    c = a+b;
    cout<<c<<endl;
}

void pilihan(){
    int pil;
    char back;
    do{
        system ("clear");
        cout<<"0.exit"<<endl;
        cout<<"1.penjumlahan"<<endl;
        cout<<"2.loopfor"<<endl;
        cout<<"pilih : ";
        cin>> pil;

        switch(pil){
            case 0:
            cout << "exit"<<endl;
            case 1:
            system ("clear");
            penjumlahan();
            break;
            case 2:
            loopfor();
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
}
int main(){
    pilihan();
    return 0;
}