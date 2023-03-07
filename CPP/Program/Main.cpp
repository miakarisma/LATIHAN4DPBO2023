/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Human.cpp"
#include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Course.cpp"
#include "ProgramStudi.cpp"
#include "Tabel.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
	cin.tie();

    // Vector Daftar Mata Kuliah yang digunakan untuk menyimpan sekumpulan objek mata kuliah pada setiap program studi
    vector<Course> daftarMatkul1;
    vector<Course> daftarMatkul2;
    vector<Course> daftarMatkul3;

    // Vector Daftar Mahasiswa yang digunakan untuk menyimpan sekumpulan objek mahasiswa pada setiap program studi
    vector<Mahasiswa> daftarMahasiswa1;
    vector<Mahasiswa> daftarMahasiswa2;
    vector<Mahasiswa> daftarMahasiswa3;

    // Vector Daftar Dosen yang digunakan untuk menyimpan sekumpulan objek dosen pada fakultas
    vector<Dosen> daftarDosen;

    // Data Mahasiswa
    Mahasiswa mhs1("2102165", "FPMIPA", "32403265", "Mia Karisma Haq", "Perempuan", "UPI", "miakarisma87@upi.edu");
    Mahasiswa mhs2("2002123", "FPMIPA", "32403002", "M Satria Ramadhani", "Laki-laki", "UPI", "techi@upi.edu");
    Mahasiswa mhs3("2002820", "FPMIPA", "32404164", "Nelly Joy", "Perempuan", "UPI", "nelly@upi.edu");
    Mahasiswa mhs4("2002331", "FPMIPA", "32403890", "Cahya Gumilang", "Laki-laki", "UPI", "gumiya@upi.edu");
    Mahasiswa mhs5("2002422", "FPMIPA", "32401234", "Sekar Madu Kusumawardani", "Perempuan", "UPI", "sekarmk03@upi.edu");
    Mahasiswa mhs6("2102112", "FPMIPA", "32402235", "Riska Nurohmah", "Perempuan", "UPI", "riska@upi.edu");
    Mahasiswa mhs7("2102324", "FPMIPA", "32401230", "Elsa Nabiilah", "Perempuan", "UPI", "sachan@upi.edu");
    Mahasiswa mhs8("2101209", "FPMIPA", "32401346", "Azzahra Alika", "Perempuan", "UPI", "alika@upi.edu");
    Mahasiswa mhs9("2101212", "FPMIPA", "32401320", "Ihsan Ghozi Zulfikar", "Laki-laki", "UPI", "ghozi@upi.edu");
    Mahasiswa mhs10("2100201", "FPMIPA", "32407892", "Ade Mulyana", "Laki-laki", "UPI", "kakak@upi.edu");
    Mahasiswa mhs11("2004305", "FPMIPA", "3240685", "Raden Fadhil Anugerah A", "Laki-laki", "UPI", "fadhil@upi.edu");
    Mahasiswa mhs12("2103400", "FPMIPA", "3240980", "Najma Qalbi Dwi Maharani", "Perempuan", "UPI", "najma@upi.edu");

    // Vector of Object Mahasiswa yang dimiliki oleh program studi Ilmu Komputer
    daftarMahasiswa1.push_back(mhs2);
    daftarMahasiswa1.push_back(mhs4);
    daftarMahasiswa1.push_back(mhs6);
    daftarMahasiswa1.push_back(mhs8);

    // Vector of Object Mahasiswa yang dimiliki oleh program studi Pendidikan Ilmu Komputer
    daftarMahasiswa2.push_back(mhs1);
    daftarMahasiswa2.push_back(mhs3);
    daftarMahasiswa2.push_back(mhs5);
    daftarMahasiswa2.push_back(mhs7);

    // Vector of Object Mahasiswa yang dimiliki oleh program studi Pendidikan Teknik Komputer
    daftarMahasiswa3.push_back(mhs9);
    daftarMahasiswa3.push_back(mhs10);
    daftarMahasiswa3.push_back(mhs11);
    daftarMahasiswa3.push_back(mhs12);

    // Data Dosen
    Dosen dosen1("001", "FPMIPA", "S2", "Back End Developer", "3240764", "Ani Anisyah M.T", "Perempuan", "UPI", "anianisyah@upi.edu");
    Dosen dosen2("002", "FPMIPA", "S2", "IT Consultant", "3240450", "Rosa Ariani M.T", "Perempuan", "UPI", "rosa@upi.edu");
    Dosen dosen3("003", "FPMIPA", "S3", "E-Commerce Expert", "3240321", "Asep Wahyudin M.T", "Laki-laki", "UPI", "away@upi.edu");
    Dosen dosen4("004", "FPMIPA", "S2", "Data Scientist", "3240002", "Yudi Wibisono M.T", "Laki-laki", "UPI", "wibisono@upi.edu");
    Dosen dosen5("005", "FPMIPA", "S2", "AI Engineer", "3240232", "Yaya Wihardi M.T", "Laki-laki", "UPI", "wihardi@upi.edu");
    Dosen dosen6("006", "FPMIPA", "S3", "Cloud Architect", "3240056", "Eddy Prasetyo", "Laki-laki", "UPI", "prasetyo@upi.edu");

    // Vector of Object Dosen yang dimiliki oleh Fakultas FPMIPA
    daftarDosen.push_back(dosen1);
    daftarDosen.push_back(dosen2);
    daftarDosen.push_back(dosen3);
    daftarDosen.push_back(dosen4);
    daftarDosen.push_back(dosen5);
    daftarDosen.push_back(dosen6);

    // Data Mata Kuliah
    Course matkul1("Desain Web", "DW01", dosen1);
    Course matkul2("Algoritma Pemrograman", "AP02", dosen2);
    Course matkul3("Sistem Informasi", "SI03", dosen3);
    Course matkul4("Rekayasa Perangkat Lunak", "RPL04", dosen6);
    Course matkul5("Pengantar Pendidikan", "PP05", dosen3);
    Course matkul6("Etika Profesi", "EP06", dosen1);
    Course matkul7("Analisis Desain", "AD07", dosen5);
    Course matkul8("Data Mining", "DM08", dosen4);
    Course matkul9("Pemrograman Visual", "PV09", dosen4);

    // Vector of Object Mata Kuliah yang dimiliki oleh program studi Ilmu Komputer
    daftarMatkul1.push_back(matkul1);
    daftarMatkul1.push_back(matkul2);
    daftarMatkul1.push_back(matkul3);
    daftarMatkul1.push_back(matkul7);

    // Vector of Object Mata Kuliah yang dimiliki oleh program studi Pendidikan Ilmu Komputer
    daftarMatkul2.push_back(matkul5);
    daftarMatkul2.push_back(matkul6);
    daftarMatkul2.push_back(matkul1);
    daftarMatkul2.push_back(matkul2);

    // Vector of Object Mata Kuliah yang dimiliki oleh program studi Teknik Komputer
    daftarMatkul3.push_back(matkul4);
    daftarMatkul3.push_back(matkul7);
    daftarMatkul3.push_back(matkul8);
    daftarMatkul3.push_back(matkul9);

    // Data Program Studi
    ProgramStudi prodi1("IK23", "Ilmu Komputer", daftarMatkul1, daftarMahasiswa1);
    ProgramStudi prodi2("IK23", "Pendidikan Ilmu Komputer", daftarMatkul2, daftarMahasiswa2);
    ProgramStudi prodi3("IK23", "Teknik Komputer", daftarMatkul3, daftarMahasiswa3);

    int menu = 0; // Variabel untuk menu yang dipilih user

    // Perulangan untuk memproses setiap fitur yang diinginkan user
    while (menu != 5)
    {
        // Tampilan Dashboard
        cout << "+====================================================+" << endl;
        cout << "+     SELAMAT DATANG DI SISTEM INFORMASI FPMIPA      +" << endl;
        cout << "+====================================================+" << endl;
        cout << "Berikut fitur-fitur yang tersedia pada layanan kami :" << endl;
        cout << "1. Tampilkan Data Program Studi Ilmu Komputer" << endl;
        cout << "2. Tampilkan Data Program Studi Pendidikan Ilmu Komputer" << endl;
        cout << "3. Tampilkan Data Program Studi Teknik Komputer" << endl;
        cout << "4. Tampilkan Data Dosen" << endl;
        cout << "5. Keluar" << endl << endl;
        cout << "Fitur yang dipilih : ";
        cin >> menu;

        // Jika menu yang dipilih menampilkan data program studi Ilmu Komputer
        if (menu == 1)
        {
            Tabel tab; // Instansiasi objek tabel 
            string arrstr[(prodi1.getMahasiswa()).size()+1][7]; // Array yang berisi vector daftar Mahasiswa

            // Pengisian judul setiap kolom pada tabel
            arrstr[0][0] = "NIK";
            arrstr[0][1] = "Nama Lengkap";
            arrstr[0][2] = "Jenis Kelamin";
            arrstr[0][3] = "Asal Universitas";
            arrstr[0][4] = "Email Edu";
            arrstr[0][5] = "NIM";
            arrstr[0][6] = "Fakultas";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < (prodi1.getMahasiswa()).size(); i++)
            {
                arrstr[i+1][0] = (prodi1.getMahasiswa()).at(i).getNik();
                arrstr[i+1][1] = (prodi1.getMahasiswa()).at(i).getNama();
                arrstr[i+1][2] = (prodi1.getMahasiswa()).at(i).getJenisKelamin();
                arrstr[i+1][3] = (prodi1.getMahasiswa()).at(i).getAsalUniversitas();
                arrstr[i+1][4] = (prodi1.getMahasiswa()).at(i).getEmailEdu();
                arrstr[i+1][5] = (prodi1.getMahasiswa()).at(i).getNim();
                arrstr[i+1][6] = (prodi1.getMahasiswa()).at(i).getFakultas();
            }

            // Menampilkan Daftar Data Mahasiswa
            cout << endl << "==========================================================================================================" << endl;
            cout << "|              Berikut Daftar Mahasiswa pada Program Studi : " << prodi1.getNamaProdi() << "                               |" << endl;
            cout << "==========================================================================================================" << endl;
            tab.buatBarisMahasiswa((prodi1.getMahasiswa()).size()+1, 7, arrstr);
            cout << endl;

            string arrstr2[(prodi1.getCourse()).size()+1][3]; // Array yang berisi vector daftar Mata Kuliah

            // Pengisian judul setiap kolom pada tabel
            arrstr2[0][0] = "Kode Mata Kuliah";
            arrstr2[0][1] = "Nama Mata Kuliah";
            arrstr2[0][2] = "Dosen Pengampu";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < (prodi1.getCourse()).size(); i++)
            {
                arrstr2[i+1][0] = (prodi1.getCourse()).at(i).getKode();
                arrstr2[i+1][1] = (prodi1.getCourse()).at(i).getNamaMataKuliah();
                arrstr2[i+1][2] = (prodi1.getCourse()).at(i).getDosenPengampu();
            }

            // Menampilkan Daftar Data Mata Kuliah
            cout << "================================================================" << endl;
            cout << "|Berikut Daftar Mata Kuliah pada Program Studi : " << prodi1.getNamaProdi() << " |" << endl;
            cout << "================================================================" << endl;
            tab.buatBarisMataKuliah((prodi1.getCourse()).size()+1, 3, arrstr2);
            cout << endl;
        }
        // Jika menu yang dipilih menampilkan data program studi Pendidikan Ilmu Komputer
        else if (menu == 2)
        {
            Tabel tab; // Instansiasi objek tabel 
            string arrstr[(prodi2.getMahasiswa()).size()+1][7]; // Array yang berisi vector daftar Mahasiswa

            // Pengisian judul setiap kolom pada tabel
            arrstr[0][0] = "NIK";
            arrstr[0][1] = "Nama Lengkap";
            arrstr[0][2] = "Jenis Kelamin";
            arrstr[0][3] = "Asal Universitas";
            arrstr[0][4] = "Email Edu";
            arrstr[0][5] = "NIM";
            arrstr[0][6] = "Fakultas";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < (prodi2.getMahasiswa()).size(); i++)
            {
                arrstr[i+1][0] = (prodi2.getMahasiswa()).at(i).getNik();
                arrstr[i+1][1] = (prodi2.getMahasiswa()).at(i).getNama();
                arrstr[i+1][2] = (prodi2.getMahasiswa()).at(i).getJenisKelamin();
                arrstr[i+1][3] = (prodi2.getMahasiswa()).at(i).getAsalUniversitas();
                arrstr[i+1][4] = (prodi2.getMahasiswa()).at(i).getEmailEdu();
                arrstr[i+1][5] = (prodi2.getMahasiswa()).at(i).getNim();
                arrstr[i+1][6] = (prodi2.getMahasiswa()).at(i).getFakultas();
            }

            // Menampilkan Daftar Data Mahasiswa
            cout << endl << "======================================================================================================================" << endl;
            cout << "|                        Berikut Daftar Mahasiswa pada Program Studi : " << prodi2.getNamaProdi() << "                      |" << endl;
            cout << "======================================================================================================================" << endl;
            tab.buatBarisMahasiswa((prodi2.getMahasiswa()).size()+1, 7, arrstr);
            cout << endl;

            string arrstr2[(prodi2.getCourse()).size()+1][3]; // Array yang berisi vector daftar Mata Kuliah

            // Pengisian judul setiap kolom pada tabel
            arrstr2[0][0] = "Kode Mata Kuliah";
            arrstr2[0][1] = "Nama Mata Kuliah";
            arrstr2[0][2] = "Dosen Pengampu";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < (prodi2.getCourse()).size(); i++)
            {
                arrstr2[i+1][0] = (prodi2.getCourse()).at(i).getKode();
                arrstr2[i+1][1] = (prodi2.getCourse()).at(i).getNamaMataKuliah();
                arrstr2[i+1][2] = (prodi2.getCourse()).at(i).getDosenPengampu();
            }

            // Menampilkan Daftar Data Mata Kuliah
            cout << "===========================================================================" << endl;
            cout << "|Berikut Daftar Mata Kuliah pada Program Studi : " << prodi2.getNamaProdi() << " |" << endl;
            cout << "===========================================================================" << endl;
            tab.buatBarisMataKuliah((prodi2.getCourse()).size()+1, 3, arrstr2);
            cout << endl;
        }
        // Jika menu yang dipilih menampilkan data program studi Teknik Komputer
        else if (menu == 3)
        {
            Tabel tab; // Instansiasi objek tabel 
            string arrstr[(prodi3.getMahasiswa()).size()+1][7]; // Array yang berisi vector daftar Mahasiswa

            // Pengisian judul setiap kolom pada tabel
            arrstr[0][0] = "NIK";
            arrstr[0][1] = "Nama Lengkap";
            arrstr[0][2] = "Jenis Kelamin";
            arrstr[0][3] = "Asal Universitas";
            arrstr[0][4] = "Email Edu";
            arrstr[0][5] = "NIM";
            arrstr[0][6] = "Fakultas";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < (prodi3.getMahasiswa()).size(); i++)
            {
                arrstr[i+1][0] = (prodi3.getMahasiswa()).at(i).getNik();
                arrstr[i+1][1] = (prodi3.getMahasiswa()).at(i).getNama();
                arrstr[i+1][2] = (prodi3.getMahasiswa()).at(i).getJenisKelamin();
                arrstr[i+1][3] = (prodi3.getMahasiswa()).at(i).getAsalUniversitas();
                arrstr[i+1][4] = (prodi3.getMahasiswa()).at(i).getEmailEdu();
                arrstr[i+1][5] = (prodi3.getMahasiswa()).at(i).getNim();
                arrstr[i+1][6] = (prodi3.getMahasiswa()).at(i).getFakultas();
            }

            // Menampilkan Daftar Data Mahasiswa
            cout << endl << "================================================================================================================" << endl;
            cout << "|                   Berikut Daftar Mahasiswa pada Program Studi : " << prodi3.getNamaProdi() << "                              |" << endl;
            cout << "================================================================================================================" << endl;
            tab.buatBarisMahasiswa((prodi3.getMahasiswa()).size()+1, 7, arrstr);
            cout << endl;

            string arrstr2[(prodi3.getCourse()).size()+1][3]; // Array yang berisi vector daftar Mata Kuliah

            // Pengisian judul setiap kolom pada tabel
            arrstr2[0][0] = "Kode Mata Kuliah";
            arrstr2[0][1] = "Nama Mata Kuliah";
            arrstr2[0][2] = "Dosen Pengampu";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < (prodi3.getCourse()).size(); i++)
            {
                arrstr2[i+1][0] = (prodi3.getCourse()).at(i).getKode();
                arrstr2[i+1][1] = (prodi3.getCourse()).at(i).getNamaMataKuliah();
                arrstr2[i+1][2] = (prodi3.getCourse()).at(i).getDosenPengampu();
            }

            // Menampilkan Daftar Data Mata Kuliah
            cout << "===================================================================" << endl;
            cout << "| Berikut Daftar Mata Kuliah pada Program Studi : " << prodi3.getNamaProdi() << " |" << endl;
            cout << "===================================================================" << endl;
            tab.buatBarisMataKuliah((prodi3.getCourse()).size()+1, 3, arrstr2);
            cout << endl;
        }
        // Jika menu yang dipilih menampilkan data dosen
        else if (menu == 4)
        {
            Tabel tab; // Instansiasi objek tabel 
            string arrstr[daftarDosen.size()+1][9]; // Array yang berisi vector daftar Dosen

            // Pengisian judul setiap kolom pada tabel
            arrstr[0][0] = "NIK";
            arrstr[0][1] = "Nama Lengkap";
            arrstr[0][2] = "Jenis Kelamin";
            arrstr[0][3] = "Asal Universitas";
            arrstr[0][4] = "Email Edu";
            arrstr[0][5] = "NIP";
            arrstr[0][6] = "Fakultas";
            arrstr[0][7] = "Pendidikan Terakhir";
            arrstr[0][8] = "Keahlian";

            // Proses pengisian setiap elemen array
            for(int i = 0; i < daftarDosen.size(); i++)
            {
                arrstr[i+1][0] = daftarDosen.at(i).getNik();
                arrstr[i+1][1] = daftarDosen.at(i).getNama();
                arrstr[i+1][2] = daftarDosen.at(i).getJenisKelamin();
                arrstr[i+1][3] = daftarDosen.at(i).getAsalUniversitas();
                arrstr[i+1][4] = daftarDosen.at(i).getEmailEdu();
                arrstr[i+1][5] = daftarDosen.at(i).getNip();
                arrstr[i+1][6] = daftarDosen.at(i).getFakultas();
                arrstr[i+1][7] = daftarDosen.at(i).getPendidikanTerakhir();
                arrstr[i+1][8] = daftarDosen.at(i).getKeahlian();
            }

            // Menampilkan Daftar Data Dosen
            cout << endl << "===================================================================================================================================================" << endl;
            cout << "|                                              Berikut Daftar Data Dosen di Fakultas FPMIPA : " << "                                                    |" << endl;
            cout << "===================================================================================================================================================" << endl;
            tab.buatBarisDosen(daftarDosen.size()+1, 9, arrstr);
            cout << endl;
        }
        // Jika menu yang dipilih keluar maka tampilkan pesan pemberitahuan
        else if (menu == 5)
        {
            cout << endl << "TERIMA KASIH TELAH MENGGUNAKAN SISTEM KAMI <3" << endl;
        }
        // Jika menu yang dipilih tidak tersedia pada fitur sistem maka tampilkan error handling
        else
        {
            cout << endl << "Maaf, fitur yang anda pilih tidak tersedia!" << endl;
        }
    }
    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}