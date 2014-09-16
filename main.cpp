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
    vector<string> keystring;
    vector<string> keywords2;
    vector<string> keywords;
    ifstream plik,plik2,key;
    plik.open("h.txt");
    plik2.open("b.txt");
    key.open("key.txt");
    string tekst;
    enum STATES {initial,inside,outside};
    STATES state;
    int i=0;
    int j=0;
    ofstream plik3;
    string a="yhtyhththy";
    plik3.open("c.html");
    string html = "<html><body>";
    plik3 << html;
    while(key.good())
    {
        getline(key, tekst);
        vector<string> kwords = parser(tekst);
        for(unsigned int i = 0; i<kwords.size(); ++i)
            add_keyword(keywords, kwords.at(i));
    }
    key.close();
    cout<<keywords.at(0)<<endl;
    while(plik.good())
    {
        getline(plik, tekst);
        vector<string> Slowa = parser(tekst);
        for(unsigned int i = 0; i<Slowa.size(); ++i)
            add_word(v, Slowa.at(i));
        for(int i = 0; i<Slowa.size(); ++i)
            if(i>1&&i<6&&i%4==0)
                co5.push_back(Slowa.at(i));
        for(unsigned int i = 0; i<Slowa.size(); ++i)
            vvv.push_back(Slowa.at(i));
        for(unsigned int i = 0; i<Slowa.size(); ++i)
            vvv3.push_back(Slowa.at(i));



        for(unsigned int i = 0; i < keywords.size(); ++i)//podkreslanie slow kluczowych w tekscie Hamleta
        {
            size_t start = tekst.find(" " + keywords.at(i) + " ");
            if(start != string::npos)
            {
                tekst.replace(start, string(keywords.at(i)).length()+1, " <b><u>"+string(keywords.at(i))+"</u></b> ");
            }


        }

plik3 << tekst << "<br />" << endl;








    }
    string html_end = "</body></html>";
    plik3 << html_end;
    plik3.close();
    plik.close();
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
    {
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"CHOSE: "<<endl;
        cout<<"1. MOST WORDS: (zad4)"<<endl;
        cout<<"2. FROM THE END:(zad5) "<<endl;
        cout<<"3. FOR FIFTH: (zad2) "<<endl;
        cout<<"4. HOW MANY TIMES:(zad6) "<<endl;
        cout<<"5. UNIQUE WORDS: "<<endl;
        cout<<"6. NUMBER OF UNIQUE WORDS: (zad3) "<<endl;
        cout<<"7. SWAPING OF WORDS:(zad10) "<<endl;
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
