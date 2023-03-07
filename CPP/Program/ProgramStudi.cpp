/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/ 
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan termasuk kelas yang dimiliki oleh program studi yaitu kelas Course dan kelas Mahasiswa
#include <iostream>
#include <string>
#include <vector>
#include "Course.cpp"
#include "Mahasiswa.cpp"

// Deklarasi namespace
using namespace std;

/* 
    Kelas Program Studi yang digunakan untuk merepresentasikan data Program Studi, dimana Program Studi memiliki mahasiswa, mata kuliah beserta dosen pengampunya
*/
class ProgramStudi {
private:
    // Atribut yang digunakan pada kelas Program Studi terdiri dari kode dan nama prodi yang merupakan identitas pembeda antar Program Studi satu dengan lainnya.
    string kode;
    string nama_prodi;
    std::vector<Course> course; // Composite list of object
    std::vector<Mahasiswa> mahasiswa; // Composite list of object
public:
    // Constructor
    ProgramStudi()
    {

    }

    // Constructor : Overloading
    ProgramStudi(string kode)
    {
        this->kode = kode;
        nama_prodi = "";
        this->course = {};
        this->mahasiswa = {};
    }

    // Constructor : Overloading
    ProgramStudi(string kode, string nama_prodi)
    {
        this->kode = kode;
        this->nama_prodi = nama_prodi;
        this->course = {};
        this->mahasiswa = {};
    }

    // Constructor : Overloading
    ProgramStudi(string kode, string nama_prodi, std::vector<Course> matkul)
    {
        this->kode = kode;
        this->nama_prodi = nama_prodi;
        course = matkul; // Composite list of object
        this->mahasiswa = {};
    }

    // Constructor : Overloading
    ProgramStudi(string kode, string nama_prodi, std::vector<Course> matkul, std::vector<Mahasiswa> mhs)
    {
        this->kode = kode;
        this->nama_prodi = nama_prodi;
        course = matkul; // Composite list of object
        mahasiswa = mhs; // Composite list of object
    }

    // Method setter untuk set nilai setiap atribut pada kelas ProgramStudi
    void setKode(string kode)
    {
        this->kode = kode;
    }

    void setNamaProdi(string nama_prodi)
    {
        this->nama_prodi = nama_prodi;
    }

    void setCourse(std::vector<Course> matkul)
    {
        course = matkul;
    }

    void setMahasiswa(std::vector<Mahasiswa> mhs)
    {
        mahasiswa = mhs;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas ProgramStudi
    string getKode()
    {
        return kode;
    }

    string getNamaProdi()
    {
        return nama_prodi;
    }

    std::vector<Course> getCourse()
    {
        return course;
    }

    std::vector<Mahasiswa> getMahasiswa()
    {
        return mahasiswa;
    }

    // Destructor
    ~ProgramStudi()
    {

    }
};