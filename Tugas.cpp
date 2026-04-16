#include <iostream>
using namespace std;

int main(){
    string nama;
    int BD, Aljabar, Pai, SD, PL, BI;
    double hasil;
cout<<"Masukan nama : ";
cin>>nama;


cout<<"Masukan nilai Basis Data : ";
cin>>BD;
cout<<"Masukan nilai Aljabar : ";
cin>>Aljabar;
cout<<"Masukan nilai Pendidikan Agama Islam : ";
cin>>Pai;
cout<<"Masukan nilai Struktur Data : ";
cin>>SD;
cout<<"Masukan nilai Pemigraman Lanjutan : ";
cin>>PL;
cout<<"Masukan nilai Bahasa Indonesia : ";
cin>>BI;

hasil = (BD + Aljabar + Pai + SD + PL + BI) / 6;
cout << "\nNama: " << nama << endl;
cout << "Rata-rata: " << hasil << endl;
cout << "hasil: ";
 if (hasil>=86){
    cout<<"A";
   } else if (hasil >=80){
    cout<<"B";
    } else if (hasil >=70){
    cout<<"C";
     } else if (hasil >=60){
    cout<<"D";
   } else {
    cout<<"E";
   }
   return 0;

}