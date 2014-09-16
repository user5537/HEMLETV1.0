#include "unique.h"
using namespace std;
struct Pair;
void add_word(vector<Pair> &v, const string &wordd)
{
    for(uint32_t i = 0; i<v.size(); ++i)
        if(v.at(i).wordd == wordd)
        {
            v.at(i).cnt++;
            return;
        }
    v.push_back(Pair(wordd));
}
void see_word(vector<string> &v, const string &word)
{
    for(uint32_t i = 0; i<v.size(); ++i)
        v.push_back(word);
}
void od_tylu(vector<string> &vvv)
{
    vector <string> od;
    for(int i=vvv.size()-1; i>=0; i--)
        od.push_back(vvv.at(i));
    for(int i=0; i<vvv.size(); i++)
        cout<<od.at(i)<<" ";
    cout<<endl;
}
void co5te(vector<string> &vvv)
{
    cout<<"co piate slowo: ";
    for(int i=0; i<vvv.size(); i++)
        cout<<vvv.at(i)<<", ";
    cout<<endl;
}
void ilerazy(vector<Pair> &vvv)
{

    //for(int i=0; i<vvv.size(); i++)
    for( int i = 0; i < vvv.size()-1; i++ )

        for( int j = 0; j < vvv.size()-1; j++ )

            if( vvv.at(j).wordd > vvv.at(j+1).wordd )
                swap( vvv.at(j).wordd, vvv.at(j+1).wordd );





    for(uint32_t i = 0; i < vvv.size(); ++i)
        cout <<i+1<<"."<< vvv.at(i).wordd<<endl ;
}
void unikat(vector<Pair> &vvv)
{

    vector <Pair> od;
    for(uint32_t i = 0; i < vvv.size(); ++i)
        if(vvv.at(i).cnt==1)
            od.push_back(vvv.at(i));





    for(int i=0; i<od.size(); i++)
        cout<<od.at(i).wordd<<" ";
    cout<<endl;
    cout<<"unikatowych jest:"<<vvv.size() <<endl;

}

void ileunikat(vector<Pair> &vvv)
{
    cout << "ile slow"<< vvv.size() << endl;
}
void najwiecejslow(vector<Pair> &v)
{
    int maxx=0;
    uint32_t i = 0;
    for(uint32_t i = 0; i < v.size(); ++i)
        if(v.at(i).cnt>maxx) maxx=v.at(i).cnt;//cout<<maxx;

    cout<<endl;

    for(uint32_t i = 0; i < v.size(); ++i)
        if(v.at(i).cnt==maxx)
            cout <<"slowem ktore najczesciej wystepuje jest: " << v.at(i).wordd<<" wystepuje " << v.at(i).cnt << " razy. " << endl;
}
void zamiana(vector<string> &vvv,vector<string> &vvv2,vector<string> &vvv3)
{
    cout<<"co 2 slowo zamiana: "<<endl;
    for(int i=1; i<vvv2.size(); i+=2)
        swap(vvv.at(i),vvv2.at(i));
    for(int i=1; i<vvv2.size(); i+=2)
        swap(vvv2.at(i),vvv3.at(i));
    cout<<"-----------------------------------------------------------"<<endl;
    for(int i=0; i<vvv.size(); i++)
        cout<<vvv.at(i)<<" ";
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    for(int i=0; i<vvv2.size(); i++)
        cout<<vvv2.at(i)<<" ";
    cout<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<endl;
}



void add_keyword(vector<string> &keywords, const string &word)
{
    keywords.push_back(word);
};





