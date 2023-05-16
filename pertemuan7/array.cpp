#include <iostream>

using namespace std;

int main(){
    // contoh array 2d
    int angka [3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    // int angka [5] = {1,2,3,4,5};

    for (int i=0; i<3; i++){
        for (int a=0; a<3; a++){
        cout <<"element ke ["<<i<<"] ["<<a<<"] nilainya :";
        cout<<angka[i][a]<<endl;
    }
    }
    return 0;
}