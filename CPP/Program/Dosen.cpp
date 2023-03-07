/* 
    Saya Mia Karisma Haq nip [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/ 
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan, termasuk kelas induk (kelas Sivitas Akademik) dari kelas Dosen
#include <iostream>
#include <string>
#include "SivitasAkademik.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Dosen yang digunakan untuk merepresentasikan data Dosen, Dosen merupakan bagian dari sivitas akademik. Sehingga kelas Dosen merupakan kelas turunan dari kelas Sivitas Akademik dan kelas cucu dari kelas Human.
*/
class Dosen : public SivitasAkademik
{
private:
    // Atribut yang digunakan pada kelas Dosen terdiri dari nip, pend_terakhir, fakultas dan keahlian yang merupakan identitas pembeda antar Dosen satu dengan lainnya.
    string nip;
    string fakultas;
    string pend_terakhir;
    string keahlian;
public:
    // Constructor
    Dosen()
    {

    }

    // Constructor : Overloading
    Dosen(string nip, string nik, string nama, string jenis_kelamin, string asal_universitas, string email) : SivitasAkademik(asal_universitas, email, nik, nama, jenis_kelamin)
    {
        
        this->nip = nip;
        fakultas = "";
        pend_terakhir = "";
        keahlian = "";
    }

    // Constructor : Overloading
    Dosen(string nip, string fakultas, string nik, string nama, string jenis_kelamin, string asal_universitas, string email) : SivitasAkademik(asal_universitas, email, nik, nama, jenis_kelamin)
    {
        
        this->nip = nip;
        this->fakultas = fakultas;
        pend_terakhir = "";
        keahlian = "";
    }

    // Constructor : Overloading
    Dosen(string nip, string fakultas, string pend_terakhir, string nik, string nama, string jenis_kelamin, string asal_universitas, string email) : SivitasAkademik(asal_universitas, email, nik, nama, jenis_kelamin)
    {
        this->nip = nip;
        this->fakultas = fakultas;
        this->pend_terakhir = pend_terakhir;
        keahlian = "";
    }

    // Constructor : Overloading
    Dosen(string nip, string fakultas, string pend_terakhir, string keahlian, string nik, string nama, string jenis_kelamin, string asal_universitas, string email) : SivitasAkademik(asal_universitas, email, nik, nama, jenis_kelamin)
    {
        this->nip = nip;
        this->fakultas = fakultas;
        this->pend_terakhir = pend_terakhir;
        this->keahlian = keahlian;
    }

    // Method setter untuk set setiap nilai atribut pada kelas Dosen
    void setNip(string nip)
    {
        this->nip = nip;
    }

    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    void setPendidikanTerakhir(string pend_terakhir)
    {
        this->pend_terakhir = pend_terakhir;
    }

    void setKeahlian(string keahlian)
    {
        this->keahlian = keahlian;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Dosen
    string getNip()
    {
        return nip;
    }

    string getFakultas()
    {
        return fakultas;
    }

    string getPendidikanTerakhir()
    {
        return pend_terakhir;
    }

    string getKeahlian()
    {
        return keahlian;
    }

    // Destructor
    ~Dosen()
    {

    }
};