#include <iostream>
#include <string>
#include <set>
#include <cstring>
#include <vector>
#include <cstdlib>

const long ran = 999999;

using namespace std;

int Partition(vector<int>& v, int l, int r) {
  int x = v[r];
  int less = l;

  for (int i = l; i < r; ++i) {
    if (v[i] <= x) {
      swap(v[i], v[less]);
      ++less;
    }
  }
  swap(v[less], v[r]);
  return less;
}

void QuickSortI(vector<int>& v, int l, int r) {
  if (l < r) {
    int q = Partition(v, l, r);
    QuickSortI(v, l, q - 1);
    QuickSortI(v, q + 1, r);
  }
}

void QuickSort(vector<int>& v) {
  if (!v.empty()) {
    QuickSortI(v, 0, v.size() - 1);
  }
}

struct Train{
	string town;
	string town1;
	int number;
	int hours;
	int minuts;
	int seconds;
};

struct Tiket{
	int id;
	int name;
};

int main() {
    struct Train train;
    cout << "Vvedite gorod (nachalniu): ";
    cin >> train.town;
    cout << "Vvedite gorod (conecniu): ";
    cin >> train.town1;
    cout << "Vvedite nomer poezda : ";
    cin >> train.number;
    cout << "Vvedite kolichestvo chasov : ";
    cin >> train.hours;
    cout << "Vvedite kolichestvo minut : ";
    cin >> train.minuts;
    cout << "Vvedite kolichestvo sekund : ";
    cin >> train.seconds;
    vector <int> n;
    n.push_back(train.number);
    n.push_back(train.hours);
    n.push_back(train.minuts);
    n.push_back(train.seconds);
    QuickSort(n);
    if (train.minuts > 60 || train.seconds > 60){
    	cout << "\n";
    	cout << "A ne maloletniu lu tu debil ?!";
    	cout << "\n";
    	cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Navernoe da ...";
	}
	else{
		string qw;
	    cout << "struct Train { " << "\n";
	    cout << "   City1 - " << train.town << " ." << "\n";
	    cout << "   City2 - " << train.town1 << " ." << "\n";
	    cout << "   Number - " << train.number << " ." << "\n";
	    cout << "   Time - " << train.hours << " : ";
	    cout << train.minuts << " : ";
	    cout << train.seconds << " ." << "\n";
	    cout << "   Otsortirovannue vvedennue znacenia : { ";
	    for(int i=0;i<4;i++){
	    	cout << n[i] << " ";
		}
		cout << "}" << "\n";
	    cout << "}" << "\n";
	    cout << "Priobresti bilet ? " << "\n";
	    cin >> qw;
	    cout << "\n";
	    if (qw == "Yes" || qw == "Da" || qw == "YES" || qw == "DA" || qw == "yes" || qw == "da"){
	    	string oplata;
	    	cout << "Bilet stoit 5$. Vvedite spocob oplatu(Card or Cash): ";
	    	cin >> oplata;
	    	if (oplata == "Karta" || oplata == "Po Karte" || oplata == "Card" || oplata == "karta" || oplata == "po karte" || oplata == "card" || oplata == "Carta"){
	    		string OK;
	    		cout << "Vstavte vashy carty v otverstie dla priema cart " << "\n" ;
	    		cout << "Vvedite 'OK' dla prodolszenia" << "\n";
	    		cin >> OK;
	    		while (OK != "OK"){
	    			cin >> OK;
				}
				int pin;
				cout << "Vvedit vash pin cod dla yspeshnou oplatu: " << "\n" ;
				cin >> pin;
				cout << "Otlishno, oplata proshla uspeshno. " << "\n";
				cout << "Vvedite vashe imua: ";
				struct Tiket tiket;
				cin >> tiket.name;
				srand(ran);
				long id = 1 + rand() % 10;
				tiket.id = id;
				cout << "Xorosho vot vash nomer bileta(id): " << tiket.id << "\n";
				cout << "Udashnou poezdki!";
			}
			else{
				cout << "Brosaite moneti v shel dla monet." << "\n" <<  "A cupuri cladite v otdelenie dla cupur.";
				int euro = 0;
				cout << "Oplasheno: " << "\n";
				cout << euro << "$" << "\n";
				for(int i=0;i<5;i++){
					euro+=1;
					cout << euro << "$" << "\n";
				}	
				if (euro==5){
					cout << "Otlishno, oplata proshla uspeshno. " << "\n";
					cout << "Vvedite vashe imua: ";
					struct Tiket tiket;
					cin >> tiket.name;
					srand(ran);
					long id = 1 + rand();
					tiket.id = id;
					cout << "Xorosho vot vash nomer bileta(id): " << tiket.id << "\n";
					cout << "Udashnou poezdki!";
				}	
				else{
					cout << "Error!";
					return 1;
				}		
			}
		}
		else{
			cout << "Proxodite k vashei ostanowki" << "\n";
			cout << "Udashnou poezdki!";
		}
	}
	return 0;
}
