#include <iostream>
#include <conio.h>
#include <windows.h>
#include<stdio.h>
#include<fstream>
using namespace std;

struct data
{
       int nomor;
       char nama[50];
       char fakultas[30];
       char pd[20];
       char dp[0];
       char lahir[20];
       char tanggal[20];
       char almt[20];
};

main()
{

    int menu;
    int npm=-1,i,j;
    int pilih;
    int namedit;
    data mhs[20];
    char get[1];
    bool ketemu;


    menuutama:
    system("cls");


 cout<<" ----------------- Aplikasi Data Mahasiswa ----------------";
    cout <<" \nMENU UTAMA :\n\n";
    cout<<" 1.Menambah Data Mahasiswa\n\n";
    cout<<" 2.Mencari Data Mahasiswa\n\n";
    cout<<" 3.Menghapus Data Mahasiswa\n\n";
    cout<<" 4.Menampilkan Data Mahasiswa\n\n";
    cout<<" 5.Keluar\n\n";
    cout<<" _____________________________\n\n";
    cout<<" Masukan Pilihan Anda : "; cin>>menu;

    if(menu==1)
 {
  system("cls");
     npm++;
     cout<<"\n PENAMBAHAN DATABASE MAHASISWA\n";
     cout<<" ____________________________\n\n";
        cout<<" NPM (max 8 karakter)       : ";
        cin>>mhs[npm].nomor; cin.getline(get,1);
     cout<< endl;
        cout<<" Nama Lengkap               : ";
        cin.getline(mhs[npm].nama,50);
     cout<< endl;
        cout<<" Fakultas/Prodi             : ";
        cin.getline(mhs[npm].fakultas,30);
     cout<< endl;
        cout<<" Periode Daftar             : ";
        cin.getline(mhs[npm].pd,20);
     cout<< endl;
        cout<<" Dosen Pembimbing           : ";
        cin.getline(mhs[npm].dp,50);
     cout<< endl;
        cout<<" Tempat Lahir               : ";
        cin.getline(mhs[npm].lahir,20);
     cout<< endl;
        cout<<" Tanggal Lahir (DD MM TTTT) : ";
        cin.getline(mhs[npm].tanggal,20);
     cout<< endl;
        cout<<" Alamat                     : ";
        cin.getline(mhs[npm].almt,20);
     cout<< endl;
     cout<<" _________________________________________________________________\n\n";
     cout<<" 1.Kembali ke Menu Utama\n\n";
     cout<<" 2.Keluar dari program\n";
     cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
     cout<<endl;
     if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }
     }

    else if(menu==2)
 {
  system ("cls");
     cout<<"\n PENCARIAN DATA MAHASISWA\n";
     cout<<" ____________________________\n\n";
     cout<<" Masukan NPM : "; cin>>namedit;
     cout<<endl;

     for(i=0;i<=npm;i++)
  {
      if(namedit==mhs[i].nomor)
   {
       cout<<" Data di temukan pada registrasi Mahasiswa ke-"<<i<<endl<<endl;
        cout<<" Nama Lengkap               : "<<mhs[i].nama<<endl;
     cout<< endl;
        cout<<" Fakultas/Prodi             : "<<mhs[i].fakultas<<endl;
     cout<< endl;
        cout<<" Periode Daftar             : "<<mhs[i].pd<<endl;
     cout<< endl;
        cout<<" Dosen Pembimbing           : "<<mhs[i].dp<<endl;
     cout<< endl;
        cout<<" Tempat Lahir               : "<<mhs[i].lahir<<endl;
     cout<< endl;
        cout<<" Tanggal Lahir (DD MM TTTT) : "<<mhs[i].tanggal<<endl;
     cout<< endl;
        cout<<" Alamat                     : "<<mhs[i].almt<<endl;
     cout<< endl;
                cout<<" _____________________________________________________\n\n";

                goto menu0;
      }
     }
     cout<<" DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
     cout<<" ________________________________________\n\n";
        menu0:
     cout<<" 1.Kembali ke Menu Utama\n\n";
     cout<<" 2.Keluar dari program\n";
     cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;

        if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }
     keluar:
    system("cls");
    cout<<"\n TERIMA KASIH\n";
    getch();
    return 0;
    }
}

