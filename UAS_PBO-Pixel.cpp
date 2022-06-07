#include <bits/stdc++.h>
using namespace std;

class Pixel{
public:
    string R,G,B;
    Pixel(int r, int g, int b){
        bitset<8> R_tmp(r);     bitset<8> G_tmp(g);     bitset<8> B_tmp(b);
        R = R_tmp.to_string();
        G = G_tmp.to_string();
        B = B_tmp.to_string();
    }
    int nilai();
    void hasil();

};

int Pixel::nilai(){
    return bitset<32>(R+G+B).to_ullong();
}

void Pixel::hasil(){
    int r = bitset<8>(R).to_ullong();
    int g = bitset<8>(G).to_ullong();
    int b = bitset<8>(B).to_ullong();
    int N_simpan = nilai();
    cout<<"Nilai Yang Disimpan = "<<N_simpan<<endl;
    cout<<"Nilai Red = "<<r<<endl;
    cout<<"Nilai Green = "<<g<<endl;
    cout<<"Nilai Blue = "<<b<<endl;
}


void menu(){
    cout<<"Menu"<<endl;
    cout<<"1. Masukan Nilai Gambar (Baris Kolom)"<<endl;
    cout<<"2. Menampilkan Nilai Semua Pixel Yang Tersimpan"<<endl;
    cout<<"3. Ubah Data"<<endl;
    cout<<"4. Menampilkan Informasi Warna Pixel"<<endl;
    cout<<"5. Keluar"<<endl;
    cout<<"Masukan pilihan Menu = ";
}


void tampil_matriks(vector<vector<Pixel>> obj,int n,int m){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<obj[i][j].nilai()<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int r,g,b;
    int n,m;
    int i,j,pilihan,x,y;
    vector<vector<Pixel>> obj;

    do{
        menu();
        cin>>pilihan;
        if(pilihan==1){
            cout<<"Masukan Besaran Pixel (Baris Kolom) = ";
            cin>>n>>m;
            cout<<"Contoh Nilai Masukan RGB(0-255 0-255 0-255)"<<endl;

            for(i=0;i<n;i++){
                obj.push_back(vector<Pixel>());
                for(j=0;j<m;j++){
                    do{
                        cout<<"Masukkan Nilai Pixel Baris Ke-"<<i+1<<" Kolom Ke-"<<j+1<<" = ";
                        cin>>r>>g>>b;
                        if(r>255 or g>255 or b>255 or r<0 or g<0 or b<0) cout<<"Nilai Tidak Valid"<<endl;
                    }while(r>255 or g>255 or b>255 or r<0 or g<0 or b<0);
                    obj[i].push_back(Pixel(r,g,b));
                }
            }
        }

        else if(pilihan==2){
            tampil_matriks(obj,n,m);
        }

        else if(pilihan==3){
            tampil_matriks(obj,n,m);
            cout<<"Masukan Koordinat Yang Ingin Diubah Nilainya (No_Baris No_Kolom) = ";
            cin>>x>>y;
            cout<<"Masukan Nilai RGB(0-255 0-255 0-255) = ";
            cin>>r>>g>>b;
            obj[x-1][y-1] = Pixel(r,g,b);
        }
        else if(pilihan == 4){
            tampil_matriks(obj,n,m);
            cout<<"Masukan Koordinat Yang Ingin Ditampilkan Nilainya (No_Baris No_Kolom) = ";
            cin>>x>>y;
            obj[x-1][y-1].hasil();
        }
        cout<<endl;
    }while(pilihan!=5);

    return 0;
}
