#include <iostream>
using namespace std;

int main(){
    /*
    Seleksi
    -if (kondisi){
    hasil
    }
    -if (kondisi){
    hasil
    }
    else{
    hasil
    }
    -if (kondisi){
    }
    else if (kondisi){
    hasil
    }
    */
   int nilai;
   cout<<"Masukan nilai :";
   cin>>nilai;
   if (nilai>=80){
    cout<<"BAIK SEKALI";
   } else if (nilai >=70){
    cout<<"BAIK";
   } else {
    cout<<"KURANG BAIK";
   }
}