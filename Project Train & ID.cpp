#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <list>

#define pb push_back
#define ll long long
#define st struct
#define cl class
#define pc public
#define pd protected
#define pe private
#define cg const long
#define un using namespace
#define vc vector
#define rt return
#define wh while

cg ran = 999999;

un std;

int P(vc<int>& v, int l, int r) {
    int x = v[r];
    int less = l;

    for (int i = l; i < r; ++i) {
        if (v[i] <= x) {
            swap(v[i], v[less]);
            ++less;
        }
    }
    swap(v[less], v[r]);
    rt less;
}

void QuickS(vc<int>& v, int l, int r) {
    if (l < r) {
        int q = P(v, l, r);
        QuickS(v, l, q - 1);
        QuickS(v, q + 1, r);
    }
}

void QuickSort(vc<int>& v) {
    if (!v.empty()) {
        QuickS(v, 0, v.size() - 1);
    }
}

st Train {
    string town;
    string town1;
    int number{};
    int hours{};
    int minuts{};
    int seconds{};
    int days{};
};

st Tiket {
    ll id{};
    string name;
};

cl People {
    pe:
        int ID{};
        int Pin{};
    pc:
        string Name;
    pd:
        int Password{};
};

cl Buy {
pc:
    int Price;
};

class City {
public:
    string city1;
    string city2;
    string city3;
    string city4;
    string city5;
    string city6;
    string city7;
    string wopros;
};

int main() {
    ofstream Map;
    Map.open("Dannie_Polzovatileu.txt");
    cout << "Vas privetstvuet apporat po prodashe biletov na poesd." << "\n";
    cout << "Spisok popularnix gorodov: ";
    cout << "Perviu popylarniu gorod : Saint - Peterburg" << "\n";
    cout << "Vtorou popylarniu gorod : Paris" << "\n";
    cout << "Tretiu popylarniu gorod : Munich" << "\n";
    cout << "Chetvertiu popylarniu gorod : Moscow" << "\n";
    cout << "Patiu popylarniu gorod : Copenhagen" << "\n";
    cout << "Shestou popylarniu gorod : Barselona" << "\n";
    cout << "Sedmou popylarniu gorod : Lisbon" << "\n";
    long double Math = pow(2,0.5);
    City cit;
    cout << "Prodolgit raboty s sistemoi ?" << "\n";
    cin >> cit.wopros;
    if (cit.wopros == "Yes" || cit.wopros == "Da" || cit.wopros == "YES" || cit.wopros == "DA" || cit.wopros == "yes" || cit.wopros == "da" || cit.wopros == "OK" || cit.wopros == "ok" || cit.wopros == "Prodolgit" || cit.wopros == "prodolgit") {
        st Tiket tiket;
        int pin = 0;
        cit.city1 = "Saint - Peterburg";
        cit.city2 = "Paris";
        cit.city3 = "Munich";
        cit.city4 = "Moscow";
        cit.city5 = "Copenhagen";
        cit.city6 = "Barselona";
        cit.city7 = "Lisbon";
        st Train train; // собственно начало ввода данных пользователя
        int flag = 0;
        for(int i=0; i<5; i++) {
            if (i!=0){
                cout << "Vu navernoe opechatolisi \n Poprobuite zanova";
            }
            cout << "Vvedite gorod (nachalniu): ";
            cin >> train.town;
            cout << "Vvedite gorod (conecniu): ";
            cin >> train.town1;
            cout << "Vash reis : " << "\n";
            cout << train.town << " " << "-" << " " << train.town1 << "\n";
            cout << "Vvedite nomer poezda : ";
            cin >> train.number;
            cout << "Vvedite kolichesvo dneu poezdki : ";
            cin >> train.days;
            cout << "Vvedite kolichestvo chasov poezdki : ";
            cin >> train.hours;
            cout << "Vvedite kolichestvo minut poezdki : ";
            cin >> train.minuts;
            cout << "Vvedite kolichestvo sekund poezdki : ";
            cin >> train.seconds;
            if (train.minuts < 60 || train.seconds < 60 || train.hours < 24 || train.days < 24) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "\n";
            cout << "A ne maloletniu lu tu debil ?!" << "\n"; // проверка на дурака
            cout << Math;
            for(int j=0; j<=20; j++) {
                cout << "\n";
            }
            cout << "Navernoe da ...";
        }
        else {
            vc <int> n;
            n.pb(train.number);
            n.pb(train.hours);
            n.pb(train.minuts);
            n.pb(train.seconds);
            ll iD = (train.number << train.hours) + (train.minuts << train.seconds);
            QuickSort(n); // сортируем массив быстрой сортировкой
            string qw;
            cout << "struct Train { " << "\n"; // вывод входных данных пользователя
            cout << "   City1 - " << train.town << " ." << "\n";
            cout << "   City2 - " << train.town1 << " ." << "\n";
            cout << "   Number - " << train.number << " ." << "\n";
            cout << "   Time - " << train.hours << " : ";
            cout << train.minuts << " : ";
            cout << train.seconds << " ." << "\n";
            cout << "   Otsortirovannue vvedennue znacenia : { ";
            for(int i=0; i<4; i++) {
                cout << n[i] << " ";
            }
            cout << "}" << "\n";
            cout << "}" << "\n";
            cout << "Priobresti bilet ? " << "\n";
            cin >> qw;
            cout << "\n";
            {
                string oplata;
                cout << "Bilet stoit 5$. Vvedite spocob oplatu(Card or Cash): "; // #свобода_выбора
                Buy dfs{};
                dfs.Price=5;
                cin >> oplata;
                if (oplata == "Karta" || oplata == "Po Karte" || oplata == "Card" || oplata == "karta" || oplata == "po karte" || oplata == "card" || oplata == "Carta") { // оплата производится картой
                    string OK;
                    cout << "Vstavte vashy carty v otverstie dla priema cart " << "\n" ;
                    cout << "Vvedite 'OK' dla prodolszenia" << "\n"; // вторая проверка на дурака
                    cin >> OK;
                    wh (OK != "OK") {
                        cin >> OK;
                    }
                    cout << "Vvedit vash pin cod dla yspeshnou oplatu: " << "\n" ;
                    cin >> pin;
                    cout << "Otlishno, oplata proshla uspeshno. " << "\n";
                    cout << "Vvedite vashe imua: ";
                    cin >> tiket.name;
                    tiket.id = iD;
                    cout << "Xorosho vot vash nomer bileta(id): " << tiket.id << "\n"; // уникальный номер билета
                    cout << "Udashnou poezdki!";
                } else {
                    cout << "Brosaite moneti v shel dla monet." << "\n" <<  "A cupuri cladite v otdelenie dla cupur.";
                    string OK;
                    cout << "Vvedite 'OK' dla prodolszenia" << "\n"; // вторая проверка на дурака
                    cin >> OK;
                    while (OK != "OK") {
                        cin >> OK;
                    }
                    int dollar = 0;
                    cout << "Oplasheno: " << "\n";
                    cout << dollar << "$" << "\n";
                    for(int i=0; i<5; i++) {
                        dollar+=1;
                        cout << dollar << "$" << "\n";
                    }
                    cout << "Otlishno, oplata proshla uspeshno. " << "\n";
                    cout << "Vvedite vashe imua: ";
                    People obj;
                    st Tiket structTiket;
                    cin >> structTiket.name;
                    obj.Name = structTiket.name;
                    structTiket.id = iD;
                    cout << "Xorosho vot vash nomer bileta(id): " << structTiket.id << "\n"; // уникальный номер билета
                    cout << "Udashnou poezdki!";
                }
            }
        }
        Map << "Umua polzovatela:" << " " << tiket.name << " \n";
        Map << "Pin cod carti polzovatela:" << " " << pin << " \n";
        Map << "Nomer poezda:" << " " << train.number << " \n";
        Map << "Kolichestvo dneu v puti:" << " " << train.days << " \n";
        Map << "Kolichestvo chasov v puti:" << " " << train.hours << " \n";
        Map << "Kolichestvo minut v puti:" << " " << train.minuts << " \n";
        Map << "Kolichestvo secund v puti:" << " " << train.seconds << " \n";
    } else if (cit.wopros == "NO" || cit.wopros == "no" || cit.wopros == "NET" || cit.wopros == "Net" || cit.wopros == "net" || cit.wopros == "Nit" || cit.wopros == "NIT" || cit.wopros == "nit") {
        cout << "Proxodite k vashei ostanowki" << "\n";
        cout << "Udashnou poezdki!";
    } else {
        cout << "Vu navernoe opehatolisi. " << "\n";
        cout << "Poprobuite zanova.";
        cout << "Udashnou poezdki!";
    }
    rt 0;
}
