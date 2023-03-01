#  Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Mengimpor kelas Dosen yang akan digunakan pada kelas Course
from Dosen import Dosen

# Kelas Course yang digunakan untuk merepresentasikan data Course, Course memiliki Dosen
class Course:
    # Atribut yang digunakan pada kelas Course terdiri dari nama_matakuliah, kode, dan dosen pengampu.
    __nama_matakuliah = ""
    __kode = ""
    __dosen_pengampu = ""

    # Constructor
    def __init__(self, nama_matakuliah, kode, dosen):
        self.__nama_matakuliah = nama_matakuliah
        self.__kode = kode
        self.__dosen_pengampu = dosen.getNama() # Composite

    # Method setter untuk set nilai setiap atribut pada kelas Course
    def setNamaMataKuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah
    
    def setKode(self, kode):
        self.__kode = kode
    
    def setDosenPengampu(self, dosen):
        self.__dosen_pengampu = dosen.getNama()

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Course
    def getNamaMataKuliah(self):
        return self.__nama_matakuliah

    def getKode(self):
        return self.__kode
    
    def getDosenPengampu(self):
        return self.__dosen_pengampu
