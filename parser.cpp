#include "parser.h"


 ///parser linijki pliku HAMLET.
vector<string> parser(string tekst) {
    enum STATES { Unknown, Inside, Outside } state = Unknown; ///3 stany
    vector<string> Slowa;
    string word;

    for(string::size_type i=0; i<tekst.length(); ++i) {
        switch(state) ///tutaj jest implementacja przejsc w automacie stanow
        {
            case Unknown:
                if(isalpha(tekst[i]))
                    state = Inside;
                else
                    state = Outside;
            break;

            case Outside:
                if(isalpha(tekst[i])) state = Inside;
            break;

            case Inside:
                if(!isalpha(tekst[i])) {
                    state = Outside;
                    Slowa.push_back(word);
                    word = "";
                }
            break;
        }
        if(state == Inside) word += tekst[i];
    }
    if (word.length() > 0) Slowa.push_back(word);
    return Slowa;
}
