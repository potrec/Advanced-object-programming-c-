#include <iostream>
#include <fstream>
#include <limits>


using namespace std;


void zadanie1(){


    //testowy komentarz
    char msg[]="File doesn't exist....";

    ifstream fileIf;
    try {
        fileIf.open(
                "C:/Users/123lu/OneDrive/Pulpit/Pollub/Aplikacje Internetowe/Advanced-object-programming-c-/Lab8/text.txt");
        ofstream fileOf;
        fileOf.open(
                "C:/Users/123lu/OneDrive/Pulpit/Pollub/Aplikacje Internetowe/Advanced-object-programming-c-/Lab8/text2.txt");
        if(fileIf.fail()){
           throw msg;
        }
        string line;
        bool isComment = false;
        //testowy komentarz 2

        while(getline(fileIf, line)){
            for(int i = 0; i < line.length(); i++){
                if(line[i] == '/' && line[i+1] == '/'){
                    break;
                }
                else if(line[i] == '/' && line[i+1] == '*'){
                    isComment = true;
                }
                else if(line[i] == '*' && line[i+1] == '/'){
                    isComment = false;
                    i++;
                }
                else if(!isComment){
                    fileOf << line[i];
                }
            }
            fileOf << endl;
        }
        //testowy komentarz 3
        fileIf.close();
        fileOf.close();
    } catch (char str[]) {
        cout<<str;
    }
}

void zadanie2(){
    //gra w oczko
    cout<< "Gra w oczko" << endl;

    bool gra=true;
    int suma=0;
    int liczba;
    int choice;
    char error[]= "podaj inta ";
    while (gra== true){
        try {
            cout << "Podaj liczbe od 1 do 10" << endl;
            cin >> liczba;

            if (!cin.good())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                throw error;

            }

            suma+=liczba;
            if(suma>21){
                cout<< "Przegrales" << endl;
                gra=false;
            }
            else if(suma==21){
                cout<< "Wygrales" << endl;
                gra=false;
            }
            else{
                cout<< "Twoja suma to: " << suma << endl;
            }
        }
        catch (char e[]){
            cout<<e;
        }
    }
}

int main() {

    //zadanie1();
    zadanie2();
    return 0;
}
