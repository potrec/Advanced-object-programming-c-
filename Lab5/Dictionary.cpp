//
// Created by potrec on 02.11.2022.
//

#include <vector>
#include <algorithm>
#include "Dictionary.h"


Dictionary::Dictionary() {}

void Dictionary::addWord(string word, string translation) {
    if (isWordExist(word) == 0)
        words.insert(pair<string, string>(word, translation));
    else
        cout << "This word: " << word << " already exists in dictionary" << endl;
}

void Dictionary::deleteWord(string word) {
    if (isWordExist(word) == 1) {
        cout << "Deleting word: " << word << endl;
        words.erase(word);
    } else {
        cout << "This word: " << word << " doesn't exist in dictionary" << endl;
    }


}

int Dictionary::isWordExist(string word) {
    if (words.find(word) != words.end()) {
        return 1;
    } else {
        return 0;
    }
}

void Dictionary::showDictionary() {
    for (auto &i: words) {
        cout << i.first << " - " << i.second << endl;
    }

}

void Dictionary::showTranslation(string word, int type) {
    if (type == 1) {
        if (isWordExist(word) == 1) {
            cout << "Translation for word: " << word << " is: " << words[word] << endl;
        } else {
            cout << "This word: " << word << " doesn't exist in dictionary" << endl;
        }
    } else {
        //Translation from english to polish
        for (auto &i: words) {
            if (i.second == word) {
                cout << "Translation for word: " << word << " is: " << i.first << endl;
            }
        }
    }

}

void Dictionary::showDictionaryInOrder() {
    vector<pair<string, string>> wordsInOrder(words.begin(), words.end());
    sort(wordsInOrder.begin(), wordsInOrder.end(), [](const pair<string, string> &a, const pair<string, string> &b) {
        return a.second < b.second;
    });
    for (auto &i: wordsInOrder) {
        cout << i.first << " - " << i.second << endl;
    }


}
