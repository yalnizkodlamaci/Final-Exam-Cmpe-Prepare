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
        cout << count + 1 << "\n . Notu Gir : \n" << endl;
        cin >> Add;
        notlar.push_back(Add);
        count++;
    } while (count < 3);

    do 
    {
        cout << "------------------------" << endl;
        cout << "1. Notlarý Listele" << endl;
        cout << "2. Bonus Uygula" << endl;
        cout << "3. Katsayýlarý Hesapla" << endl;
        cout << "0. Çýkýþ" << endl;
        cout << "------------------------" << endl;

        cout << "Seçiminiz : ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            cout << "\n --- Not Listesi --- \n" << endl;
            for (int i = 0; i < notlar.size(); i++)
            {
                cout << i + 1 << ". Not :" << notlar[i] << endl;
            }
            break;
        case 2:
            cout << "\n --- Bonus Ýþlemi --- \n" << endl;

            for (int i = 0; i < notlar.size(); i++)
            {
                bonusEkle(notlar[i]);
            }
            cout << "Bonus Ýþlemi Tamamlandý." << endl;
            break;
        case 3:
            cout << "\n --- Katsayili Puan \n" << endl;
            //Ýlk baþta notu belirlemeliyiz yani notlar dizisinden baþlamalýyýz gezmeye ve ilk indexdeki notun katsayisini belirlemeliyiz.
            //bu yüzden kiþiye hangi row ve hangi kolondaki katsayý uygulanmasýný istiyorsak seçtirmeliyiz.
            for (int i = 0; i < notlar.size(); i++)
            {
                cout << fixed;
                cout << "\n --- Hangi Katsayýyý Uygulamak Ýstiyorsun ? ---  \n" << endl;
                cout << setw(18) <<"\n --- (1,2) ---  \n" << endl;
                cout << setw(18) <<"\n --- (3,4) ---  \n" << endl;
                cout << "Satýr Seç" << endl;
                cin >> row;
                cout << "Sütun Seç : " << endl;
                cin >> column;

                katsayiliPuan = katsayilar[row][column] * notlar[i];
                katsayiliNotlar.push_back(katsayiliPuan);
            }
            break;
            break;
        case 0:
            cout << "Çýkýþ Yapýlýyor" << endl;
            break;
           
        default:
            cout << "Hatalý Seçim Yeniden Dene" << endl;
        }
    } while (choise != 0 );


   

    
    return 0;
}

void bonusEkle(int& puan)
{
    if(puan < 50)
    {
        puan + 10;
    }
};

int puanHesapla(int puan)
{
    return puan;
};

int puanHesapla(int puan, int zorluk)
{
    return puan * zorluk;
};