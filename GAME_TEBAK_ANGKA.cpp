#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int angkarandom;
int jawabanuser;
void generateangka(int&angkarandom){
    angkarandom= 1 + (rand() %100);
}

void logikagame(int &angkarandom, int &jawabanuser, int &kesempatan){
    while (kesempatan>0){
        cout<<endl;
        cout<<"KESEMPATAN : "<<kesempatan<<endl;
        cout<<"MASUKKAN TEBAKANMU : "; cin>>jawabanuser;
      if (jawabanuser<angkarandom){
       cout<<"TERLALU KECIL, COBA LAGI"<<endl;
      }else if (jawabanuser>angkarandom){
       cout<<"TERLALU BESAR, COBA LAGI"<<endl;
      }else {
        cout<<"JAWABAN BENAR"<<endl;
        break;
      }
      kesempatan--;
    }
    if (kesempatan==0){
       cout<<"ANDA GAGAL, ANGKA SEBENARNYA ADALAH : "<<angkarandom<<endl;
    }
}


int main(){
    srand(time(0));
    char confirm;
    cout<<"\n======SELAMAT DATANG DI GAME TEBAK ANGKA======"<<endl;
    cout<<"SELAMAT BERSENANG-SENANG"<<endl;
    do{
        int kesempatan=5;
        generateangka(angkarandom);
        logikagame(angkarandom, jawabanuser, kesempatan);
        cout<<endl;
    cout<<"MAU MAIN LAGI? (Y/N) : "; cin>>confirm;
    } while (confirm=='Y' || confirm=='y');

if (confirm=='n' || confirm=='N'){
    cout<<"PROGRAM BERAKHIR"<<endl;
}else{
    cout<<"KARAKTER TIDAK VALID"<<endl;
}

cin.ignore();
cin.get();
 return 0;
}