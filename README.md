# LATIHAN4DPBO2023

## Janji
Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

## Deskripsi Program
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas Mahasiswa, Human, Sivitas Akademik, Dosen, Course, Program Studi.

## Desain Program
![Latprak3 drawio (3)](https://user-images.githubusercontent.com/100817609/223450527-20d3c834-429f-4349-9e10-9a65de922841.png)

## Penjelasan Desain Program :
Program terdiri dari 7 kelas, yaitu kelas Mahasiswa, Human, Sivitas Akademik, Dosen, Course, Program Studi, Tabel. Terdapat 4 objek yang sama yaitu Human, Sivitas Akademik, Mahasiswa, dan Dosen yaitu sama-sama manusia. Sehingga ketiga kelas tersebut mengimplementasikan konsep Multi-level Inheritance. Terdapat pula objek yang memiliki objek lain, seperti objek Course memiliki objek Dosen Pengampu dan objek ProgramStudi memiliki objek Course serta objek Mahasiswa. Sehingga Kedua kelas tersebut mengimplementasikan konsep composition. Karena setiap program studi memiliki banyak objek mahasiswa dan mata kuliah, maka digunakan array of object untuk menampung daftar mahasiswa dan mata kuliah.

1. Kelas Human merupakan kelas induk (superclass) dari kelas sivitas akademik (subclass) dan buyut dari kelas mahasiswa, karena terdapat kesamaan dari objek mahasiswa dan sivitas akademik, yaitu sama-sama manusia. Sehingga semua atribut pada kelas human akan diwariskan kepada kelas sivitas akademik dan kelas mahasiswa. Atribut pada kelas human terdiri dari atribut nik, nama dan jenis kelamin, karena pada dasarnya setiap manusia dapat dibedakan berdasarkan 3 identitas tersebut. Atribut pada kelas human memiliki hak akses private bertujuan agar atribut tersebut tidak bisa diakses dari luar class. Pada kelas human terdapat method setter dan getter untuk setiap atribut pada kelas tersebut. Hak akses untuk setiap method adalah public, supaya semua method dapat diakses diluar kelas.

2. Kelas Sivitas Akademik merupakan masyarakat akademik yang terdiri atas dosen dan mahasiswa. Sehingga kelas Sivitas Akademik merupakan kelas turunan dari kelas human dan kelas induk dari kelas mahasiswa dan kelas dosen. Selain itu kelas sivitas akademik mewarisi semua atribut kelas human dan mewariskan semua atributnya kepada kelas mahasiswa dan kelas dosen. Atribut pada kelas sivitas akademik terdiri dari atribut asal universitas dan email edu dengan hak akses private bertujuan agar atribut tersebut tidak bisa diakses dari luar class. Pada kelas sivitas akademik terdapat method setter dan getter untuk setiap atribut pada kelas tersebut. Hak akses untuk setiap method adalah public, supaya semua method dapat diakses diluar kelas.

3. Kelas Mahasiswa merupakan kelas turunan dari kelas Sivitas Akademik, karena mahasiswa merupakan bagian dari sivitas akademik dan kelas cucu dari kelas human karena mahasiswa merupakan manusia. Kelas mahasiswa mewarisi semua atribut pada kelas sivitas akademik dan kelas human. Atribut pada kelas mahasiswa terdiri dari atribut nim dan fakultas dengan hak akses private bertujuan agar atribut tersebut tidak bisa diakses dari luar class. Pada kelas mahasiswa terdapat method setter dan getter untuk setiap atribut pada kelas tersebut. Hak akses untuk setiap method adalah public, supaya semua method dapat diakses diluar kelas.

4. Kelas Dosen merupakan kelas turunan dari kelas Sivitas Akademik, karena dosen merupakan bagian dari sivitas akademik dan kelas cucu dari kelas human karena dosen merupakan manusia. Kelas mahasiswa mewarisi semua atribut pada kelas sivitas akademik dan kelas human. Atribut pada kelas dosen terdiri dari atribut nip, fakultas, pendidikan terakhir dan keahlian dengan hak akses private bertujuan agar atribut tersebut tidak bisa diakses dari luar class. Pada kelas dosen terdapat method setter dan getter untuk setiap atribut pada kelas tersebut. Hak akses untuk setiap method adalah public, supaya semua method dapat diakses diluar kelas.

5. Kelas Course merupakan kelas yang memiliki atau memakai objek dosen, karena setiap mata kuliah tentunya diampu oleh dosen. Pada objek Course terdapat atribut dosen pengampu, dimana atribut tersebut merujuk pada objek Dosen. Atribut lainnya pada kelas Course yaitu kode mata kuliah dan nama mata kuliah dengan hak akses private pada semua atribut, hal ini bertujuan agar atribut tersebut tidak bisa diakses dari luar class. Pada kelas course terdapat method setter dan getter untuk setiap atribut pada kelas tersebut. Hak akses untuk setiap method adalah public, supaya semua method dapat diakses diluar kelas.

6. Kelas Program Studi merupakan kelas yang memiliki atau memakai objek mahasiswa dan course, karena setiap program studi tentunya memiliki mahasiswa dan mata kuliah beserta dosen pengampunya. Pada objek Program Studi terdapat atribut course yang merujuk pada objek Course dan atribut mahasiswa yang merujuk pada objek mahasiswa. Atribut lainnya pada kelas Program Studi yaitu kode prodi dan nama prodi dengan hak akses private pada semua atribut, hal ini bertujuan agar atribut tersebut tidak bisa diakses dari luar class. Pada kelas Program Studi terdapat method setter dan getter untuk setiap atribut pada kelas tersebut. Hak akses untuk setiap method adalah public, supaya semua method dapat diakses diluar kelas.

7. Kelas Tabel merupakan kelas yang berdiri sendiri karena berbeda objek dengan objek lainnya serta tidak mewarisi atribut pada kelas lain ataupun menggunakan kelas lain. Kelas ini digunakan untuk menampilkan tabel dari list objek mahasiswa, matakuliah dan dosen. Pada kelas tabel setiap atribut memiliki hak akses private yaitu atribut baris dan kolom. Adapun method yang digunakan yaitu method setter dan getter serta method untuk pembuatan baris dari tabel itu sendiri.

Untuk alur program, pertama akan ditampilkan dashboard yang berisi daftar fitur yang dapat dipilih user, menu 1 untuk menampilkan data program studi Ilmu Komputer, menu 2 untuk menampilkan data program studi Pendidikan Ilmu Komputer, menu 3 untuk menampilkan data program studi Teknik Komputer, menu 4 untuk menampilkan data dosen dan menu 5 untuk keluar dari sistem. 

## Dokumentasi Program
![Screenshot (1)](https://user-images.githubusercontent.com/100817609/223471906-a380963c-b381-4470-8291-58b37b136d18.png)
![Screenshot (2)](https://user-images.githubusercontent.com/100817609/223471944-e6138014-67aa-4ddb-8025-d9c613726674.png)
![Screenshot (3)](https://user-images.githubusercontent.com/100817609/223471968-612ebaca-736e-4aa2-9de8-7d1cd35a284f.png)
![Screenshot (4)](https://user-images.githubusercontent.com/100817609/223471981-2d69f029-5997-4daa-b088-d80688b8df48.png)
