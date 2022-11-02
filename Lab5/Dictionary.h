//
// Created by potrec on 02.11.2022.
//

#ifndef LAB5_DICTIONARY_H
#define LAB5_DICTIONARY_H
using namespace std;

#include <iostream>
#include <string>
#include <map>

class Dictionary {
private:
    map<string, string> words;
public:
    Dictionary();
    void addWord(string word, string translation);
    void deleteWord(string word);
    int isWordExist(string word);
    void showDictionary();
    void showTranslation(string word, int type);
    void showDictionaryInOrder();

};


#endif //LAB5_DICTIONARY_H
