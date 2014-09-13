#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "parser.h"
#include "unique.h"
#include <algorithm>
using namespace std;


int main()
{
vector <string> Slowa;
vector<Pair> v;
vector<Word> vv;
vector<string> vvv;
vector<string> co5;
ifstream plik;
plik.open("a.txt");
string tekst;
enum STATES {initial,inside,outside};
STATES state;
int i=0;
int j=0;

while(plik.good())
{
    getline(plik, tekst);

    vector<string> Slowa = parser(tekst);
    for(int i = 0; i<Slowa.size(); ++i)
     cout << i+1 << ". " << Slowa.at(i) << endl;

    for(unsigned int i = 0; i<Slowa.size(); ++i)
    add_word(v, Slowa.at(i));
    //for(unsigned int i = 0; i<Slowa.size(); ++i)
   // cout << i+1 << ". " << Slowa.at(i) << endl;
    for(unsigned int i = 0; i<Slowa.size(); ++i)
    vvv.push_back(Slowa.at(i));
    for(int i = 0; i<Slowa.size(); ++i)
    if(i%4==0 &&i>1 &&i<7)
        co5.push_back(Slowa.at(i));




}

plik.close();
int numer=0;

while(1)
{   cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"CHOSE: "<<endl;
    cout<<"1. MOST WORDS: "<<endl;
    cout<<"2. FROM THE END: "<<endl;
    cout<<"3. FOR FIFTH: "<<endl;
    cout<<"4. HOW MANY TIMES: "<<endl;
    cout<<"5. UNIQUE WORDS: "<<endl;
    cout<<"6. NUMBER OF UNIQUE WORDS: "<<endl;
    cin>>numer;
    cout<<"--------------------------------------------------------------------"<<endl;
    switch(numer)
    {
    case 1:
        najwiecejslow(v);
        break;
    case 2:
        od_tylu(vvv);
        break;
    case 3:
        co5te(co5);
        break;
    case 4:
        ilerazy(v);
        break;
    case 5:
        unikat(v);
        break;
    case 6:
        ileunikat(v);
        break;





    }

}
najwiecejslow(v);
od_tylu(vvv);
co5te(co5);
ilerazy(v);
unikat(v);
ileunikat(v);










najwiecejslow(v);


od_tylu(vvv);
co5te(co5);
ilerazy(v);
unikat(v);


ileunikat(v);


return 0;
}
