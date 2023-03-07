/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/ 
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan termasuk kelas dosen yang dimiliki oleh kelas Course
#include <iostream>
#include <string>
#include "Dosen.cpp"

// Deklarasi namespace
using namespace std;

/* 
    Kelas Course yang digunakan untuk merepresentasikan data Course, Course memiliki Dosen
*/
class Course {
private:
    // Atribut yang digunakan pada kelas Course terdiri dari nama_matakuliah, kode, dan dosen pengampu.
    string nama_matakuliah;
    string kode;
    string dosen_pengampu;
public:
    // Constructor
    Course()
    {

    }

    // Constructor : Overloading
    Course(string nama_matakuliah)
    {
        this->nama_matakuliah = nama_matakuliah;
        kode = "";
        dosen_pengampu = "";
    }

    // Constructor : Overloading
    Course(string nama_matakuliah, string kode)
    {
        this->nama_matakuliah = nama_matakuliah;
        this->kode = kode;
        dosen_pengampu = "";
    }

    // Constructor : Overloading
    Course(string nama_matakuliah, string kode, Dosen dosen)
    {
        this->nama_matakuliah = nama_matakuliah;
        this->kode = kode;
        dosen_pengampu = dosen.getNama(); // Composite
    }

    // Method setter untuk set nilai setiap atribut pada kelas Course
    void setNamaMataKuliah(string nama_matakuliah)
    {
        this->nama_matakuliah = nama_matakuliah;
    }

    void setKode(string kode)
    {
        this->kode = kode;
    }

    void setDosenPengampu(string dosen_pengampu)
    {
        this->dosen_pengampu = dosen_pengampu;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Course
    string getNamaMataKuliah()
    {
        return nama_matakuliah;
    }

    string getKode()
    {
        return kode;
    }

    string getDosenPengampu()
    {
        return dosen_pengampu;
    }

    // Destructor
    ~Course()
    {

    }
};