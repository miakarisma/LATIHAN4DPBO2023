#  Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Mengimpor kelas Course dan kelas Mahasiswa yang akan digunakan pada kelas Program Studi
from Course import Course
from Mahasiswa import Mahasiswa

# Kelas Program Studi yang digunakan untuk merepresentasikan data Program Studi, dimana Program Studi memiliki mahasiswa, mata kuliah beserta dosen pengampunya
class ProgramStudi():
    # Atribut yang digunakan pada kelas Program Studi terdiri dari kode dan nama prodi yang merupakan identitas pembeda antar Program Studi satu dengan lainnya.
    __kode = ""
    __nama_prodi = ""

    # Constructor
    def __init__(self, kode="", nama_prodi="", course=[], mahasiswa=[]):
        self.__kode = kode
        self.__nama_prodi = nama_prodi
        self.__course = course # Composite list of object
        self.__mahasiswa = mahasiswa # Composite list of object

    # Method setter untuk set setiap nilai atribut pada kelas Program Studi
    def setKode(self, kode):
        self.__kode = kode

    def setNamaProdi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def setCourse(self, course):
        self.__course = course

    def setMahasiswa(self, mahasiswa):
        self.__mahasiswa = mahasiswa

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Program Studi
    def getKode(self):
        return self.__kode
    
    def getNamaProdi(self):
        return self.__nama_prodi
    
    def getCourse(self):
        return self.__course
    
    def getMahasiswa(self):
        return self.__mahasiswa
