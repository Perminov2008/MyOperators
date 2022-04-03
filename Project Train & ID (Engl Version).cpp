#include <bits/stdc++.h>

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
    Map.open("Dannie_Volatilizable.txt");
    cout << "Vas primitiveness support po promise billet na posed." << "\n";
    cout << "Pick popular nix city: ";
    cout << "Pervin popularity city : Saint - Petersburg" << "\n";
    cout << "Thru popularity city : Paris" << "\n";
    cout << "Pretty popularity city : Munich" << "\n";
    cout << "Hectosievert popularity city : Moscow" << "\n";
    cout << "Patio popularity city : Copenhagen" << "\n";
    cout << "Shouldest popularity city : Barcelona" << "\n";
    cout << "edom popularity city : Lisbon" << "\n";
    long double Math = pow(2,0.5);
    City cit;
    cout << "Prodigality work s system ?" << "\n";
    cin >> cit.wopros;
    if (cit.wopros == "Yes" || cit.wopros == "Da" || cit.wopros == "YES" || cit.wopros == "DA" || cit.wopros == "yes" || cit.wopros == "da" || cit.wopros == "OK" || cit.wopros == "ok" || cit.wopros == "Prodolgit" || cit.wopros == "prodolgit") {
        st Tiket tiket;
        int pin = 0;
        cit.city1 = "Saint - Petersburg";
        cit.city2 = "Paris";
        cit.city3 = "Munich";
        cit.city4 = "Moscow";
        cit.city5 = "Copenhagen";
        cit.city6 = "Barcelona";
        cit.city7 = "Lisbon";
        st Train train; // собственно начало ввода данных пользователя
        int flag = 0;
        for(int i=0; i<5; i++) {
            if (i!=0){
                cout << "Vu average eschatological \n Propitiate nova";
            }
            cout << "Edite city (stared): ";
            cin >> train.town;
            cout << "Edite city (last): ";
            cin >> train.town1;
            cout << "Bash reins : " << "\n";
            cout << train.town << " " << "-" << " " << train.town1 << "\n";
            cout << "Edite number poesied : ";
            cin >> train.number;
            cout << "Edite solicitudes neu poesied : ";
            cin >> train.days;
            cout << "Edite foolishest chasse poesied : ";
            cin >> train.hours;
            cout << "Edite foolishest minute poesied : ";
            cin >> train.minuts;
            cout << "Edite foolishest send poesied : ";
            cin >> train.seconds;
            if (train.minuts < 60 || train.seconds < 60 || train.hours < 24 || train.days < 24) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "\n";
            cout << "A ne malevolent lu tu debit ?!" << "\n"; // проверка на дурака
            cout << Math;
            for(int j=0; j<=20; j++) {
                cout << "\n";
            }
            cout << "average da ...";
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
            cout << "   Otsortirovannue innuendoed centennial : { ";
            for(int i=0; i<4; i++) {
                cout << n[i] << " ";
            }
            cout << "}" << "\n";
            cout << "}" << "\n";
            cout << "Prioritises billet ? " << "\n";
            cin >> qw;
            cout << "\n";
            {
                string oplata;
                cout << "Billet stout 5$. Edite pool plat(Card or Cash): "; // #свобода_выбора
                Buy dfs{};
                dfs.Price=5;
                cin >> oplata;
                if (oplata == "Kart" || oplata == "Po Karate" || oplata == "Card" || oplata == "karta" || oplata == "po karate" || oplata == "card" || oplata == "Carta") { // оплата производится картой
                    string OK;
                    cout << "Stage v ashy cart v overstrict dla prima cart " << "\n" ;
                    cout << "Edite 'OK' dla providential" << "\n"; // вторая проверка на дурака
                    cin >> OK;
                    wh (OK != "OK") {
                        cin >> OK;
                    }
                    cout << "Visit bash pin cod dla yspeshnou plat: " << "\n" ;
                    cin >> pin;
                    cout << "Shortlist, plat proposal suspension. " << "\n";
                    cout << "Edite vase ima: ";
                    cin >> tiket.name;
                    tiket.id = iD;
                    cout << "Horoscope vot bash comer billet(id): " << tiket.id << "\n"; // уникальный номер билета
                    cout << "Sudeshna poesied!";
                } else {
                    cout << "Rotate monetize v shel dla monet." << "\n" <<  "A cupric cladding v lenient dla cur.";
                    string OK;
                    cout << "Edite 'OK' dla providential" << "\n"; // вторая проверка на дурака
                    cin >> OK;
                    while (OK != "OK") {
                        cin >> OK;
                    }
                    int dollar = 0;
                    cout << "Splashtop: " << "\n";
                    cout << dollar << "$" << "\n";
                    for(int i=0; i<5; i++) {
                        dollar+=1;
                        cout << dollar << "$" << "\n";
                    }
                    cout << "Shortlist, plat proposal suspension. " << "\n";
                    cout << "Edite vase ima: ";
                    People obj;
                    st Tiket Leo10992;
                    cin >> Leo10992.name;
                    obj.Name = Leo10992.name;
                    Leo10992.id = iD;
                    cout << "Horoscope vot bash number billet(id): " << Leo10992.id << "\n"; // уникальный номер билета
                    cout << "Sudeshna poesied!";
                }
            }
        }
        Map << "Uma overpopulate:" << " " << tiket.name << " \n";
        Map << "Pin cod cart overpopulate:" << " " << pin << " \n";
        Map << "Number poesied:" << " " << train.number << " \n";
        Map << "Colchester days v put:" << " " << train.days << " \n";
        Map << "Colchester chasse v put:" << " " << train.hours << " \n";
        Map << "Colchester minute v put:" << " " << train.minuts << " \n";
        Map << "Colchester second v put:" << " " << train.seconds << " \n";
    } else if (cit.wopros == "NO" || cit.wopros == "no" || cit.wopros == "NET" || cit.wopros == "Net" || cit.wopros == "net" || cit.wopros == "Nit" || cit.wopros == "NIT" || cit.wopros == "nit") {
        cout << "Aphrodite k hash nostalgia" << "\n";
        cout << "Sudeshna poesied!";
    } else {
        cout << "Vu average haematologist. " << "\n";
        cout << "Propitiate nova.";
        cout << "Sudeshna poesied!";
    }
    rt 0;
}
