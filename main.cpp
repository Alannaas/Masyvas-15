#include <iostream> //pridedame bibliotek�, kuri atsakinga u� �vedim� ir i�vedim�
#include <cmath> //pridedame bibliotek�, kuri leid�ia atlikti matematinius veiksmus
#include <iomanip>//pridedame bibliotek�, kuri atsakinga u� �vedim� ir i�vedim�
using namespace std; //eilut�, kuri leid�ia nera�yti std:: prie� cout, cin, endl, fl, df


int main() //pagrindin� funkcija
{
    setlocale(LC_ALL, "Lithuanian");  //i�vedimui naudosime lietuvi� kalb�
    int skaiciai[25]; //masyvas, kuris talpins 26 skai�ius
    int kiek = 25; //kiekis skai�i�, kurios pasirinks vartotojas


    for (int i = 0; i < kiek; i++) //ciklas, kurio metu vartotojas �ra�ys 25 norimus sai�ius
    {
        cout <<"�veskite "<< i + 1 << "-�j� skai�i�:"<<endl;
        cin >> skaiciai[i];
    }

    cout << "-------------------------------"<<endl; //lentel�s prad�ia
    for (int i = 0; i < 5; i++) //ciklas, kuris atsakingas u� lentel�s eilut�
    {
        cout<<"|"; //lentel�s dalis
        for (int k = 0; k < 5; k++){ //ciklas, kuris atsakingas u� lentel�s eilut�s 5 skai�ius
            cout<<setw(5) << left <<skaiciai[i * 5 + k] << "|"; //padarome skai�i� lygiuot� ir i�vedame skai�i� i� masyvo � lentel�. *5, nes i parodo, kuri eilut�, o +k, nes parodo kuris eilut�s skai�ius
        }
        cout<<endl;
    }


    cout << "-------------------------------\n"; //lentel�s pabaiga


    return 0;
}
