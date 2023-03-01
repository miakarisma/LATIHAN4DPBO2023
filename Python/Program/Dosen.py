#  Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Mengimpor kelas induk (kelas Sivitas Akademik) dari kelas Sivitas Akademik
from SivitasAkademik import SivitasAkademik

# Kelas Dosen yang digunakan untuk merepresentasikan data Dosen, Dosen merupakan bagian dari sivitas akademik. Sehingga kelas Dosen merupakan kelas turunan dari kelas Sivitas Akademik dan kelas cucu dari kelas Human.
class Dosen(SivitasAkademik):
    # Atribut yang digunakan pada kelas Dosen terdiri dari nip, pend_terakhir dan keahlian yang merupakan identitas pembeda antar Dosen satu dengan lainnya.
    __nip = ""
    __fakultas = ""
    __pend_terakhir = ""
    __keahlian = ""

    # Constructor
    def __init__(self, nip="", fakultas="", pend_terakhir="", keahlian="", nik="", nama="", jenis_kelamin="", asal_univ="", email=""):
        super().__init__(asal_univ, email, nik, nama, jenis_kelamin)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian

    # Method setter untuk set setiap nilai atribut pada kelas Dosen
    def setNip(self, nip):
        self.__nip = nip

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def setPendidikanTerakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir
    
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Dosen
    def getNip(self):
        return self.__nip
    
    def getFakultas(self):
        return self.__fakultas

    def getPendidikanTerakhir(self):
        return self.__pend_terakhir

    def getKeahlian(self):
        return self.__keahlian
