#include <bits/stdc++.h>
using namespace std;

class Pixel{
    public:
        int nilai,r,g,b;
        Pixel(int n){
            nilai = n;
            int count =0,hasil[3];
            bitset<32> n_tmp(nilai);
            string bin = n_tmp.to_string();
            for(int i=8;i<32;i+=8){
                
                hasil[count] = bitset<8>(bin.substr(i,8)).to_ulong();
                count++;
            }
            r = hasil[0];
            g = hasil[1];
            b = hasil[2];
        }
        void tampilRGB(){
            cout<<setw(4)<<r<<setw(4)<<g<<setw(4)<<b<<" ";
        }

};

void tampil_matriks(vector<vector<Pixel>> obj,int n,int m){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            obj[i][j].tampilRGB();
        }
        cout<<endl;
    }
}



void menu(){
    cout<<"Menu"<<endl;
    cout<<"1. Masukan Nilai Gambar (Baris Kolom)"<<endl;
    cout<<"2. Menampilkan Nilai RGB Semua Pixel Yang Tersimpan"<<endl;
    cout<<"3. Keluar"<<endl;
    cout<<"Masukan pilihan Menu = ";
}


int main(){
    vector<vector<Pixel>> obj;
    int i,j,pilihan,n,m,tc;
    do{
        menu();
        cin>>pilihan;
        if(pilihan==1){
            obj.clear();
            cout<<"Masukan Besaran Pixel (Baris Kolom) = ";
            cin>>n>>m;
            for(i=0;i<n;i++){
                obj.push_back(vector<Pixel>());
                for(j=0;j<m;j++){
                    do{
                        cout<<"Masukkan Nilai Pixel Baris Ke-"<<i+1<<" Kolom Ke-"<<j+1<<" = ";
                        cin>>tc;
                        if(tc>16777215 or tc<0) cout<<"Nilai Tidak Valid"<<endl;
                    }while(tc>16777215 or tc<0);
                    obj[i].push_back(Pixel(tc));
                }
            }
        }
        else if(pilihan==2){
            tampil_matriks(obj,n,m);
        }
    }while(pilihan!=3);

    return 0;
}
