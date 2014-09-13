


#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Pair {
    string wordd;
    int cnt;
    Pair(string wordd) { this->wordd = wordd; cnt = 1; }
};
struct Word {
    string word;
    Word(string word) { word = "no"; }
};




void add_word(vector<Pair> &v, const string &wordd);
void see_word(vector<string> &v, const string &word);
void od_tylu(vector<string> &vvv);
void co5te(vector<string> &vvv);
void ilerazy(vector<Pair> &vvv);
void unikat(vector<Pair> &vvv);
void ileunikat(vector<Pair> &vvv);
void najwiecejslow(vector<Pair> &vvv);
