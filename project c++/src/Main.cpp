#include <iostream>
#include "myClass\user.h"
#include "myClass\sistemInteraksi.h"

using namespace std;

int main(int argc, char const *argv[])
{
    User user_peserta;
    User user_organisasi;
    User user_admin;

    int pil;
    int pil_peserta;

    cout << "-----MENU-----\n";
    cout << "1. Sebagai Peserta\n";
    cout << "2. Sebagai Organisasi\n";
    cout << "3. Sebagai Admin\n";
    cout << "Sebagai apa anda ingin masuk ke dalam sistem ? [1..3] = ";
    cin >> pil;

    switch (pil)
    {
        case 1:
            cout << "--------Anda berhasil masuk sebagai peserta--------\n";
            cout << "1. SignUp\n";
            cout << "2. LogIn\n";
            cout << "Masukkan pilihan Anda [1..2] = ";
            cin >> pil_peserta;
            switch (pil_peserta)
            {
            case 1:
                cout << "Nama lengkap: ";
                cin >> user_peserta.nama;
                cout << "ID: ";
                cin >> user_peserta.ID;
                cout << "Email: ";
                cin >> user_peserta.email;
                cout << "Password: "; 
                cin >> user_peserta.password;
                cout << "anda sudah terdaftar";
                break;
            case 2:
                cout << "Email: ";
                cin >> user_peserta.email;
                cout << "Password: ";
                cin >> user_peserta.password;
                break;
            };
    };
};
