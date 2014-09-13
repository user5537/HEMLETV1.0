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
vector<string> vvv2;
vector<string> vvv3;
vector<string> co5;
ifstream plik,plik2;
plik.open("a.txt");
plik2.open("b.txt");
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
    for(unsigned int i = 0; i<Slowa.size(); ++i)
    vvv3.push_back(Slowa.at(i));



}
while(plik2.good())
{
    getline(plik2, tekst);

    vector<string> Slowa = parser(tekst);
    for(unsigned int i = 0; i<Slowa.size(); ++i)
    vvv2.push_back(Slowa.at(i));

}
plik2.close();
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
    cout<<"7. SWAPING OF WORDS: "<<endl;
    cout<<"8. EXIT: "<<endl;
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
    case 7:
        zamiana(vvv,vvv2,vvv3);

        break;
    case 8:
    return 0;
        break;
    }

};



return 0;
}
