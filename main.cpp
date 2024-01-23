#include <iostream> //pridedame bibliotekà, kuri atsakinga uþ ávedimà ir iðvedimà
#include <cmath> //pridedame bibliotekà, kuri leidþia atlikti matematinius veiksmus
#include <iomanip>//pridedame bibliotekà, kuri atsakinga uþ ávedimà ir iðvedimà
using namespace std; //eilutë, kuri leidþia neraðyti std:: prieð cout, cin, endl, fl, df


int main() //pagrindinë funkcija
{
    setlocale(LC_ALL, "Lithuanian");  //iðvedimui naudosime lietuviø kalbà
    int skaiciai[25]; //masyvas, kuris talpins 26 skaièius
    int kiek = 25; //kiekis skaièiø, kurios pasirinks vartotojas


    for (int i = 0; i < kiek; i++) //ciklas, kurio metu vartotojas áraðys 25 norimus saièius
    {
        cout <<"Áveskite "<< i + 1 << "-àjá skaièiø:"<<endl;
        cin >> skaiciai[i];
    }

    cout << "-------------------------------"<<endl; //lentelës pradþia
    for (int i = 0; i < 5; i++) //ciklas, kuris atsakingas uþ lentelës eilutæ
    {
        cout<<"|"; //lentelës dalis
        for (int k = 0; k < 5; k++){ //ciklas, kuris atsakingas uþ lentelës eilutës 5 skaièius
            cout<<setw(5) << left <<skaiciai[i * 5 + k] << "|"; //padarome skaièiø lygiuotæ ir iðvedame skaièiø ið masyvo á lentelæ. *5, nes i parodo, kuri eilutë, o +k, nes parodo kuris eilutës skaièius
        }
        cout<<endl;
    }


    cout << "-------------------------------\n"; //lentelës pabaiga


    return 0;
}
