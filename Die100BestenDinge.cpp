#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
using namespace std;

class BestenDing{

    private:
    
    public:
    double winrate =0.0;
    string name;
    int likes =0;
    int plays =0;

    BestenDing (const string& name = "Default")
        : winrate(0.0), name(name), likes(0), plays(0)
    {
    }
    int get_likes(){
        return likes;
    }
    int get_plays(){
        return plays;
    }
    double get_winrate(){
        return winrate;
    }
    double calculate_winrate(){
        if(plays <= 0){
            winrate = 0.0;
        } else {
            winrate = static_cast<double>(likes) / static_cast<double>(plays);
        }
        return winrate;
    }
    string get_name(){
        return name;
    }
    void increase_plays_by_one(){
        plays++;
    }
    void increase_likes_by_one(){
        likes++;
    }
};

void do_something(){

//alle Items als Objekte der Klasse "BestenDing" instanziieren

    BestenDing a0 = {"AA-Batterien"};
    BestenDing a1 = BestenDing("Crazy-Frog");
    BestenDing a2 = BestenDing("Hand Sanitizer");
    BestenDing a3 = BestenDing("Digitale Briefmarke");
    BestenDing a4 = BestenDing("Clips (zum verschließen von Essen)");
    BestenDing a5 = BestenDing("Fast Charging");
    BestenDing a6 = BestenDing("Maßband");
    BestenDing a7 = BestenDing("Cheeseburger");
    BestenDing a8 = BestenDing("Luftmatratze");
    BestenDing a9 = BestenDing("Jojo");
    BestenDing a10 = BestenDing("Schaumwaffel");
    BestenDing a11 = BestenDing("Handschlag");
    BestenDing a12 = BestenDing("Feuchttücher");
    BestenDing a13 = BestenDing("Monopoly");
    BestenDing a14 = BestenDing("(Wand-)Poster");
    BestenDing a15 = BestenDing("(Handy-)Hülle");
    BestenDing a16 = BestenDing("Schaukel");
    BestenDing a17 = BestenDing("Treppe");
    BestenDing a18 = BestenDing("Fieberthermometer");
    BestenDing a19 = BestenDing("Badelatschen");
    BestenDing a20 = BestenDing("Eierbecher");
    BestenDing a21 = BestenDing("Eiswaffel");
    BestenDing a22 = BestenDing("Schublade");
    BestenDing a23 = BestenDing("Ampel");
    BestenDing a24 = BestenDing("Karpador");
    BestenDing a25 = BestenDing("Hummel");
    BestenDing a26 = BestenDing("Die Siedler von Catan");
    BestenDing a27 = BestenDing("Gürtel");
    BestenDing a28 = BestenDing("Currywurst mit Pommes");
    BestenDing a29 = BestenDing("USB-C");
    BestenDing a30 = BestenDing("Rolladen");
    BestenDing a31 = BestenDing("Alpen");
    BestenDing a32 = BestenDing("Google Maps");
    BestenDing a33 = BestenDing("Göffel");
    BestenDing a34 = BestenDing("Manuellsen");
    BestenDing a35 = BestenDing("AUX Anschluss");
    BestenDing a36 = BestenDing("Propellerhut");
    BestenDing a37 = BestenDing("Geburtstag haben");
    BestenDing a38 = BestenDing("Kuscheltier/-ding");
    BestenDing a39 = BestenDing("Dinosaurier");
    BestenDing a40 = BestenDing("Cap/Rucksack mit Trinkschlauch");
    BestenDing a41 = BestenDing("Getränke Flatrate");
    BestenDing a42 = BestenDing("Plus 1 Aktionen");
    BestenDing a43 = BestenDing("Medaillien & Pokale");
    BestenDing a44 = BestenDing("Automatischer Fensterheber");
    BestenDing a45 = BestenDing("Mond");
    BestenDing a46 = BestenDing("Online/Handy Tickets für Öffentliche Verkehrsmittel");
    BestenDing a47 = BestenDing("Tee");
    BestenDing a48 = BestenDing("Postkarten bekommen");
    BestenDing a49 = BestenDing("Google-/Apple Pay");
    BestenDing a50 = BestenDing("Tablet Bestellungen im Restaurant");
    BestenDing a51 = BestenDing("Walkie Talkies");
    BestenDing a52 = BestenDing("Kabelkopfhörer");
    BestenDing a53 = BestenDing("Bank mit Lehne");
    BestenDing a54 = BestenDing("Eisgekühltes Getränk");
    BestenDing a55 = BestenDing("Waschmachine");
    BestenDing a56 = BestenDing("Shazam");
    BestenDing a57 = BestenDing("Pokemon");
    BestenDing a58 = BestenDing("Getränkehalter im Auto");
    BestenDing a59 = BestenDing("Regenschirm");

//TODO hier noch weiter bis alle Items da sind / veröffentlicht wurden
//und wenn geschehen natürlich noch in den vektor einfügen
    
    vector<BestenDing> vektorAller = {a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59};

    //Zeit als Randomizer seed setzen
    srand(time(NULL));

    int random1 = 0;
    int random2 = 0;

    cout<<"Willkommen beim Brain-Pain Bestenliste-Pruefer"<<endl<<"Waehle die Anzahl an Iterationen (Ganzzahl)"<<endl;
    int anzahlRunden;
    cin>>anzahlRunden;
    cout<<"Du hast "<<anzahlRunden<<" Runden gewählt"<<endl<<"Im Folgenden werden dir zwei Items aus der Liste gezeigt. Du waehlst immer das Item aus, das du besser findest."<<endl<<"Zum Auswaehlen eines Items schreibe 1 oder 2 in die Zeile und Druecke ENTER."<<endl<<"Am Ende wird dir in absteigender Reihenfolge deine persoenliche Reihenfolge angezeigt."<<endl<<"Viel Spass! Los gehts"<<endl;

    for(int i =0; i<anzahlRunden; i++){
        do{
            random1 = rand() % 60;
            random2 = rand() % 60;
        }while(random1 == random2);

        vektorAller[random1].increase_plays_by_one();
        vektorAller[random2].increase_plays_by_one();
         
         cout<<"Frage "<<i+1<<" von "<<anzahlRunden<<":"<<endl<<"1: "<< vektorAller[random1].get_name()<<" 2: "<< vektorAller[random2].get_name() << endl;
         char input;
         cin>>input;
         if(input=='1')
         {
            vektorAller[random1].increase_likes_by_one();
         }
         if(input=='2')
         {
            vektorAller[random2].increase_likes_by_one();
         }
    }

    for(auto &item : vektorAller){
        item.calculate_winrate();
    }

    sort(vektorAller.begin(), vektorAller.end(), [](const BestenDing& a, const BestenDing& b) {
        return a.winrate > b.winrate;
    });

    for(auto item : vektorAller){
        cout<< item.get_name()<<" : "<<(item.get_winrate()*100.00)<<"% - "<<item.get_likes()<<" Likes bei "<<item.get_plays()<<" Spielen"<<endl;
    }
}

int main(){
    do_something();
    string input;
    cin>>input;
    return 0;
}