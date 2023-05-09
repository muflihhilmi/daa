#include <iostream>

using namespace std;

void loopfor(){
    for(int a=1; a<=3; a++){
        cout<<a<<endl;}
}
void penjumlahan(){
    int a = 10;
    int b = 5;
    int c;
        c=a+b;
        cout<<c<<endl;}

void pilihan(){
    int pil;
    char back;
    pilihan:
    cout<<"0.exit"<<endl;
    cout<<"1.penjumlahan"<<endl;
    cout<<"2.loop for"<<endl;
    cout<<"Pilihan: ";
    cin>>pil;
    system ("clear");
      if(pil==0){
        cout<<"thanks"<<endl;
    } else if(pil==1){
       penjumlahan();
       goto pilihan;
    } else if(pil==2){
        loopfor();
        goto pilihan;
    }
    else{
        cout<<"Pilihan Salah"<<endl;
        goto pilihan;
    }
}

int main(){
    pilihan();
       return 0;
}
