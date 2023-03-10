/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/ 
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan, termasuk kelas induk (kelas Sivitas Akademik) dari kelas Mahasiswa
#include <iostream>
#include <string>
#include "SivitasAkademik.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Mahasiswa yang digunakan untuk merepresentasikan data Mahasiswa, Mahasiswa merupakan bagian dari sivitas akademik. Sehingga kelas Mahasiswa merupakan kelas turunan dari kelas Sivitas Akademik dan kelas cucu dari kelas Human.
*/
class Mahasiswa : public SivitasAkademik
{
private:
    // Atribut yang digunakan pada kelas Mahasiswa terdiri dari nim dan fakultas yang merupakan identitas pembeda antar mahasiswa satu dengan lainnya.
    string nim;
    string fakultas;
public:
    // Constructor
    Mahasiswa()
    {

    }

    // Constructor : Overloading
    Mahasiswa(string nim, string nik, string nama, string jenis_kelamin, string asal_universitas, string email) : SivitasAkademik(asal_universitas, email, nik, nama, jenis_kelamin)
    {   
        this->nim = nim;
        fakultas = "";
    }

    // Constructor : Overloading
    Mahasiswa(string nim, string fakultas, string nik, string nama, string jenis_kelamin, string asal_universitas, string email) : SivitasAkademik(asal_universitas, email, nik, nama, jenis_kelamin)
    {
        
        this->nim = nim;
        this->fakultas = fakultas;
    }

    // Method setter untuk set setiap nilai atribut pada kelas Mahasiswa
    void setNim(string nim)
    {
        this->nim = nim;
    }

    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Mahasiswa
    string getNim()
    {
        return nim;
    }

    string getFakultas()
    {
        return fakultas;
    }

    // Destructor
    ~Mahasiswa()
    {

    }
};