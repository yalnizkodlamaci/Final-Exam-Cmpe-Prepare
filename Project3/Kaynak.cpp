#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void bonusEkle(int& puan);
int puanHesapla(int puan);
int puanHesapla(int puan, int zorluk);

int main()
{
    vector<int> notlar;
    vector<int> katsayiliNotlar;
    int katsayilar[2][2] = { {1,2},{3,4} };
    int katsayiliPuan = 0;
    int count = 0;
    int Add = 0;
    int choise = 0;
    int zorluk = 0;
    int row = 0;
    int column = 0;

 
    do
    {
        cout << count + 1 << ". Notu Gir: ";
        cin >> Add;
        notlar.push_back(Add);
        count++;
    } while (count < 3);

  
    do 
    {
        cout << "\n------------------------" << endl;
        cout << "1. Notlari Listele" << endl;
        cout << "2. Bonus Uygula" << endl;
        cout << "3. Katsayilari Hesapla" << endl;
        cout << "0. Cikis" << endl;
        cout << "------------------------" << endl;

        cout << "Seciminiz: ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            cout << "\n --- Not Listesi --- \n" << endl;
            for (int i = 0; i < notlar.size(); i++)
            {
                cout << i + 1 << ". Not: " << notlar[i] << endl;
            }
            break;

        case 2:
            cout << "\n --- Bonus Islemi --- \n" << endl;
            for (int i = 0; i < notlar.size(); i++)
            {
                bonusEkle(notlar[i]);
            }
            cout << "Bonus Islemi Tamamlandi." << endl;
            break;

        case 3:
            cout << "\n --- Katsayili Puan --- \n" << endl;
            
            for (int i = 0; i < notlar.size(); i++)
            {
                cout << fixed;
                cout << "\n --- " << (i+1) << ". Not icin Hangi Katsayiyi Uygulamak Istiyorsun? --- \n" << endl;
                cout << setw(18) << "--- (1,2) ---" << endl;
                cout << setw(18) << "--- (3,4) ---" << endl; 
                
               
                cout << "Satir Sec (0 veya 1): ";
                cin >> row;
                cout << "Sutun Sec (0 veya 1): ";
                cin >> column;

        
                katsayiliPuan = katsayilar[row][column] * notlar[i];
                katsayiliNotlar.push_back(katsayiliPuan);
                
                cout << "Yeni Puan: " << katsayiliPuan << endl;
            }
            break;

        case 0:
            cout << "Cikis Yapiliyor..." << endl;
            break;

        default:
            cout << "Hatali Secim, Yeniden Dene." << endl;
        }
    } while (choise != 0);

    return 0;
}

void bonusEkle(int& puan)
{
    if(puan < 50)
    {
        puan += 10; 
    }
}

int puanHesapla(int puan)
{
    return puan;
}

int puanHesapla(int puan, int zorluk)
{
    return puan * zorluk;
}

