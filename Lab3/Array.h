//
// Created by potrec on 19.10.2022.
//

#ifndef LAB3_ARRAY_H
#define LAB3_ARRAY_H
#include <iostream>

using namespace std;

template<typename T>
class Array {
private:
    T *array;
    int maxSize;
    int firstEmpty;
public:
    Array(int size){
        array = new T[size];
        maxSize = size;
        firstEmpty = 0;
    }
    Array(){
        array = new T[10];
        maxSize = 10;
        firstEmpty = 0;
    }
    ~Array(){
        delete[] array;
    }
    void swap(T &a, T &b){
        T temp = a;
        a = b;
        b = temp;
    }
    void sortArray(){
        for(int i = 0; i < maxSize-1; i++){
            for(int j =0; j < maxSize-1-i; j++){
                if(array[j] > array[j+1]){
                    swap(array[j], array[j+1]);
                }
            }
        }
    }
    void addElement(T value){
        array[firstEmpty] = value;
        firstEmpty++;
    }
    void showArray(){
        for(int i = 0; i < maxSize; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void showElement(int index){
        cout << array[index] << endl;
    }


    void showMaxElement();
};

template<>
void Array<string>::sortArray() {
    for(int i = 0; i < maxSize-1; i++){
        for(int j =0; j < maxSize-1-i; j++){
            if(array[j].length() > array[j+1].length()){
                swap(array[j], array[j+1]);
            }
        }
    }
}
template<>
void Array<string>::showMaxElement() {
    int max = 0;
    for(int i = 0; i < maxSize; i++){
        if(array[i].length() > max){
            max = array[i].length();
        }
    }
    cout << "Najdluzsze slowo ma " << max << " znakow" << endl;

}


#endif //LAB3_ARRAY_H
