#include <iostream>

using namespace std;

//class User
class User{
    //atribut
    public :
        string nama;
        int ID;
        string email;
        string password;

    //method
    void getSignUp();
    void getLogin();
    void getLogout();
    void getPermohonanAkun();
};

class user_peserta: public User{
    //atribut
    private:
        char jurusan;

    //method
    void getViewJumlah_UserPeserta();
    void postAbsensiUser_Peserta();
    void getViewPeserta_hadir();
    void getUserPeserta();
    void getJurusan_Peserta();
};

class user_organisasi: public User{
    //method
    void getViewData_UserOrganisasi();
};

class user_admin: public User{

};

