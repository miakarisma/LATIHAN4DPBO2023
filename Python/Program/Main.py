#  Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Mengimpor kelas yang digunakan kedalam fungsi Main
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course
from ProgramStudi import ProgramStudi
from Tabel import Tabel

# List Daftar Mata Kuliah yang digunakan untuk menyimpan sekumpulan objek mata kuliah pada setiap program studi
daftarMatkul1 = []
daftarMatkul2 = []
daftarMatkul3 = []

# List Daftar Mahasiswa yang digunakan untuk menyimpan sekumpulan objek mahasiswa pada setiap program studi
daftarMahasiswa1 = []
daftarMahasiswa2 = []
daftarMahasiswa3 = []

# Data Mahasiswa
mhs1 = Mahasiswa("2102165", "FPMIPA", "32403265", "Mia Karisma Haq", "Perempuan", "UPI", "miakarisma87@upi.edu")
mhs2 = Mahasiswa("2002123", "FPMIPA", "32403002", "M Satria Ramadhani", "Laki-laki", "UPI", "techi@upi.edu")
mhs3 = Mahasiswa("2002820", "FPMIPA", "32404164", "Nelly Joy", "Perempuan", "UPI", "nelly@upi.edu")
mhs4 = Mahasiswa("2002331", "FPMIPA", "32403890", "Cahya Gumilang", "Laki-laki", "UPI", "gumiya@upi.edu")
mhs5 = Mahasiswa("2002422", "FPMIPA", "32401234", "Sekar Madu Kusumawardani", "Perempuan", "UPI", "sekarmk03@upi.edu")
mhs6 = Mahasiswa("2102112", "FPMIPA", "32402235", "Riska Nurohmah", "Perempuan", "UPI", "riska@upi.edu")
mhs7 = Mahasiswa("2102324", "FPMIPA", "32401230", "Elsa Nabiilah", "Perempuan", "UPI", "sachan@upi.edu")
mhs7 = Mahasiswa("2101209", "FPMIPA", "32401346", "Azzahra Alika", "Perempuan", "UPI", "alika@upi.edu")
mhs8 = Mahasiswa("2101212", "FPMIPA", "32401320", "Ihsan Ghozi Zulfikar", "Laki-laki", "UPI", "ghozi@upi.edu")
mhs9 = Mahasiswa("2100201", "FPMIPA", "32407892", "Ade Mulyana", "Laki-laki", "UPI", "kakak@upi.edu")
mhs10 = Mahasiswa("2004305", "FPMIPA", "3240685", "Raden Fadhil Anugerah A", "Laki-laki", "UPI", "fadhil@upi.edu")
mhs11 = Mahasiswa("2100209", "FPMIPA", "3240076", "M Yasin Nur Amadudin", "Laki-laki", "UPI", "myasin26@upi.edu")
mhs12 = Mahasiswa("2103400", "FPMIPA", "3240980", "Najma Qalbi Dwi Maharani", "Perempuan", "UPI", "myasin26@upi.edu")

# List of Object Mahasiswa yang dimiliki oleh program studi Ilmu Komputer
daftarMahasiswa1.append(mhs2)
daftarMahasiswa1.append(mhs4)
daftarMahasiswa1.append(mhs6)
daftarMahasiswa1.append(mhs8)

# List of Object Mahasiswa yang dimiliki oleh program studi Pendidikan Ilmu Komputer
daftarMahasiswa2.append(mhs1)
daftarMahasiswa2.append(mhs3)
daftarMahasiswa2.append(mhs5)
daftarMahasiswa2.append(mhs7)

# List of Object Mahasiswa yang dimiliki oleh program studi Teknik Komputer
daftarMahasiswa3.append(mhs9)
daftarMahasiswa3.append(mhs10)
daftarMahasiswa3.append(mhs11)
daftarMahasiswa3.append(mhs12)

# Data Dosen
dosen1 = Dosen("001", "FPMIPA", "S2", "Back End Developer", "3240764", "Ani Anisyah M.T", "Perempuan", "UPI", "anianisyah@upi.edu")
dosen2 = Dosen("002", "FPMIPA", "S2", "IT Consultant", "3240450", "Rosa Ariani M.T", "Perempuan", "UPI", "rosa@upi.edu")
dosen3 = Dosen("003", "FPMIPA", "S3", "E-Commerce Expert", "3240321", "Asep Wahyudin M.T", "Laki-laki", "UPI", "away@upi.edu")
dosen4 = Dosen("004", "FPMIPA", "S2", "Data Scientist", "3240002", "Yudi Wibisono M.T", "Laki-laki", "UPI", "wibisono@upi.edu")
dosen5 = Dosen("005", "FPMIPA", "S2", "AI Engineer", "3240232", "Yaya Wihardi M.T", "Laki-laki", "UPI", "wihardi@upi.edu")
dosen6 = Dosen("006", "FPMIPA", "S3", "Cloud Architect", "3240056", "Eddy Prasetyo", "Laki-laki", "UPI", "prasetyo@upi.edu")

# Data Mata Kuliah
matkul1 = Course("Desain Web", "DW01", dosen1)
matkul2 = Course("Algoritma Pemrograman", "AP02", dosen2)
matkul3 = Course("Sistem Informasi", "SI03", dosen3)
matkul4 = Course("Rekayasa Perangkat Lunak", "RPL04", dosen6)
matkul5 = Course("Pengantar Pendidikan", "PP05", dosen3)
matkul6 = Course("Etika Profesi", "EP06", dosen1)
matkul7 = Course("Analisis Desain", "AD07", dosen5)
matkul8 = Course("Data Mining", "DM08", dosen4)
matkul9 = Course("Pemrograman Visual", "PV09", dosen4)

# List of Object Mata Kuliah yang dimiliki oleh program studi Ilmu Komputer
daftarMatkul1.append(matkul1)
daftarMatkul1.append(matkul2)
daftarMatkul1.append(matkul3)
daftarMatkul1.append(matkul7)

# List of Object Mata Kuliah yang dimiliki oleh program studi Pendidikan Ilmu Komputer
daftarMatkul2.append(matkul5)
daftarMatkul2.append(matkul6)
daftarMatkul2.append(matkul1)
daftarMatkul2.append(matkul2)

# List of Object Mata Kuliah yang dimiliki oleh program studi Teknik Komputer
daftarMatkul3.append(matkul4)
daftarMatkul3.append(matkul7)
daftarMatkul3.append(matkul8)
daftarMatkul3.append(matkul9)

# Data Program Studi
prodi1 = ProgramStudi("IK23", "Ilmu Komputer", daftarMatkul1, daftarMahasiswa1)
prodi2 = ProgramStudi("IK23", "Pendidikan Ilmu Komputer", daftarMatkul2, daftarMahasiswa2)
prodi3 = ProgramStudi("IK23", "Teknik Komputer", daftarMatkul3, daftarMahasiswa3)

menu = 0 # Variabel untuk menu yang dipilih user

# Perulangan untuk memproses setiap fitur yang diinginkan user
while (menu != 4):
    # Tampilan Dashboard
    print("+====================================================+")
    print("+     SELAMAT DATANG DI SISTEM INFORMASI FPMIPA      +")
    print("+====================================================+")
    print("Berikut fitur-fitur yang tersedia pada layanan kami :")
    print("1. Tampilkan Data Program Studi Ilmu Komputer")
    print("2. Tampilkan Data Program Studi Pendidikan Ilmu Komputer")
    print("3. Tampilkan Data Program Studi Teknik Komputer")
    print("4. Keluar")
    menu = int(input("\nFitur yang dipilih : "))

    # Jika menu yang dipilih menampilkan data program studi Ilmu Komputer
    if (menu == 1):
        tab = Tabel() # Instansiasi objek tabel
        arrstr = [[0 for j in range(3)] for i in range(len(prodi1.getMahasiswa())+1)] # Array yang berisi list daftar Mahasiswa

        # Pengisian judul setiap kolom pada tabel
        arrstr[0][0] = "NIM"
        arrstr[0][1] = "Nama Lengkap"
        arrstr[0][2] = "Jenis Kelamin"
        
        # Proses pengisian setiap elemen array
        for i, mhs in enumerate(prodi1.getMahasiswa()):
            arrstr[i+1][0] = mhs.getNim()
            arrstr[i+1][1] = mhs.getNama()
            arrstr[i+1][2] = mhs.getJenisKelamin()
        
        print("\n==============================================================")
        # Menampilkan Daftar Data Mahasiswa
        print("|Berikut Daftar Mahasiswa pada Program Studi : " + prodi1.getNamaProdi() + " |")
        print("==============================================================\n")
        tab.buatBaris(len(prodi1.getMahasiswa())+1, 3, arrstr)
        print("\n")
        
        arrstr = [[0 for j in range(3)] for i in range(len(prodi1.getCourse())+1)] # Array yang berisi list daftar Mata Kuliah

        # Pengisian judul setiap kolom pada tabel
        arrstr[0][0] = "Kode Mata Kuliah"
        arrstr[0][1] = "Nama Mata Kuliah"
        arrstr[0][2] = "Dosen Pengampu"
        
        # Proses pengisian setiap elemen array
        for i, matkul in enumerate(prodi1.getCourse()):
            arrstr[i+1][0] = matkul.getKode()
            arrstr[i+1][1] = matkul.getNamaMataKuliah()
            arrstr[i+1][2] = matkul.getDosenPengampu()
        
        # Menampilkan Daftar Data Mata Kuliah
        print("================================================================")
        print("|Berikut Daftar Mata Kuliah pada Program Studi : " + prodi1.getNamaProdi() + " |")
        print("================================================================\n")
        tab.buatBaris(len(prodi1.getCourse())+1, 3, arrstr)
        print("\n")
       
    # Jika menu yang dipilih menampilkan data program studi Pendidikan Ilmu Komputer
    elif (menu == 2):
        tab = Tabel() # Instansiasi objek tabel
        arrstr = [[0 for j in range(3)] for i in range(len(prodi2.getMahasiswa())+1)] # Array yang berisi list daftar Mahasiswa

        # Pengisian judul setiap kolom pada tabel
        arrstr[0][0] = "NIM"
        arrstr[0][1] = "Nama Lengkap"
        arrstr[0][2] = "Jenis Kelamin"
        
        # Proses pengisian setiap elemen array
        for i, mhs in enumerate(prodi2.getMahasiswa()):
            arrstr[i+1][0] = mhs.getNim()
            arrstr[i+1][1] = mhs.getNama()
            arrstr[i+1][2] = mhs.getJenisKelamin()
        
        # Menampilkan Daftar Data Mahasiswa
        print("\n=========================================================================")
        print("|Berikut Daftar Mahasiswa pada Program Studi : " + prodi2.getNamaProdi() + " |")
        print("=========================================================================\n")
        tab.buatBaris(len(prodi2.getMahasiswa())+1, 3, arrstr)
        print("\n")
        
        arrstr = [[0 for j in range(3)] for i in range(len(prodi2.getCourse())+1)] # Array yang berisi list daftar Mata Kuliah

        # Pengisian judul setiap kolom pada tabel
        arrstr[0][0] = "Kode Mata Kuliah"
        arrstr[0][1] = "Nama Mata Kuliah"
        arrstr[0][2] = "Dosen Pengampu"
        
        # Proses pengisian setiap elemen array
        for i, matkul in enumerate(prodi2.getCourse()):
            arrstr[i+1][0] = matkul.getKode()
            arrstr[i+1][1] = matkul.getNamaMataKuliah()
            arrstr[i+1][2] = matkul.getDosenPengampu()
        
        # Menampilkan Daftar Data Mata Kuliah
        print("===========================================================================")
        print("|Berikut Daftar Mata Kuliah pada Program Studi : " + prodi2.getNamaProdi() + " |")
        print("===========================================================================\n")
        tab.buatBaris(len(prodi2.getCourse())+1, 3, arrstr)
        print("\n")

    # Jika menu yang dipilih menampilkan data program studi Teknik Komputer
    elif(menu == 3):
        tab = Tabel() # Instansiasi objek tabel
        arrstr = [[0 for j in range(3)] for i in range(len(prodi3.getMahasiswa())+1)] # Array yang berisi list daftar Mahasiswa

        # Pengisian judul setiap kolom pada tabel
        arrstr[0][0] = "NIM"
        arrstr[0][1] = "Nama Lengkap"
        arrstr[0][2] = "Jenis Kelamin"
        
        # Proses pengisian setiap elemen array
        for i, mhs in enumerate(prodi3.getMahasiswa()):
            arrstr[i+1][0] = mhs.getNim()
            arrstr[i+1][1] = mhs.getNama()
            arrstr[i+1][2] = mhs.getJenisKelamin()
        
        # Menampilkan Daftar Data Mahasiswa
        print("\n================================================================")
        print("|Berikut Daftar Mahasiswa pada Program Studi : " + prodi3.getNamaProdi() + " |")
        print("================================================================\n")
        tab.buatBaris(len(prodi3.getMahasiswa())+1, 3, arrstr)
        print("\n")
        arrstr = [[0 for j in range(3)] for i in range(len(prodi3.getCourse())+1)] # Array yang berisi list daftar Mata Kuliah

        # Pengisian judul setiap kolom pada tabel
        arrstr[0][0] = "Kode Mata Kuliah"
        arrstr[0][1] = "Nama Mata Kuliah"
        arrstr[0][2] = "Dosen Pengampu"
        
        # Proses pengisian setiap elemen array
        for i, matkul in enumerate(prodi3.getCourse()):
            arrstr[i+1][0] = matkul.getKode()
            arrstr[i+1][1] = matkul.getNamaMataKuliah()
            arrstr[i+1][2] = matkul.getDosenPengampu()
        
        # Menampilkan Daftar Data Mata Kuliah
        print("==================================================================")
        print("|Berikut Daftar Mata Kuliah pada Program Studi : " + prodi3.getNamaProdi() + " |")
        print("==================================================================\n")
        tab.buatBaris(len(prodi3.getCourse())+1, 3, arrstr)
        print("\n")
        
    # Jika menu yang dipilih keluar maka tampilkan pesan pemberitahuan
    elif (menu == 4):
        print("\nTERIMA KASIH TELAH MENGGUNAKAN SISTEM KAMI <3\n")
    
    # Jika menu yang dipilih user tidak terdapat pada fitur yang disediakan sistem maka tampilkan error handling
    else:
        print("\nMaaf, fitur yang anda pilih tidak tersedia!\n")