#include <iostream>
#include <ctime>

using namespace std;

//class sistem interaksi
class sistemInteraksi{
    //atribut
    public : 
        char Nama_Event;
        int Kode_Event;
        char Nama_org;
};

class event: public sistemInteraksi {
    //method
    void getViewlistEvent();
    void getjadwalEvent();
    void findSearchEvent();
    void getRegistrasiEvent();
    void getViewJadwal_Event();
    void postEvent();
    void updateEvent();
    void removeEvent();
    void getViewPenjualan_Tiket();
    void confirmRegistrasi_Event();
};

class dana: public sistemInteraksi{
    //atribut
    private:
        //char waktu_pembayaran=ctime(&now);
        int noRek;
        int jml_pembayaran;
        string nama_pengirim;
    
    //method
    void getPencairan_Dana();
    void getPencatatan_Dana();
    void getmelakukanPembayaran();
    void getcekPembayaran_Peserta();
    void requestPencairan_Dana();
    void confirmPencairan_Dana();
};

class sertifikat: public event{
    //atribut
    int ID;
    int ID_Serti;

    //method
    void getunduhSertif();
    void getViewlistPeserta_Hadir();
    void postSertifikat();
};