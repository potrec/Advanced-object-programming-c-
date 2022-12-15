#include <iostream>
#include <regex>
#include <fstream>
#include <map>

void checkStringIfFloat(std::string str)
{
    std::regex floatRegex("[-+]?[0-9]*\\.?[0-9]+");
    if (std::regex_match(str, floatRegex))
    {
        std::cout << "String contains float number" << std::endl;
    }
    else
    {
        std::cout << "String does not contain float number" << std::endl;
    }
}
void checkStringIfHour(std::string str)
{
    std::regex hourRegex("([0-1][0-9]|2[0-3]):[0-5][0-9](:[0-5][0-9])?");


    if (std::regex_match(str, hourRegex))
    {
        std::cout << "String contains hour" << std::endl;
    }
    else
    {
        std::cout << "String does not contain hour" << std::endl;
    }
}

void checkHomeAddres(std::string str)
{
    std::regex homeAddressRegex("([a-zA-Z]+\\.?\\s?)+\\s[0-9]+\\/?[0-9]*[a-zA-Z]?\\s?,\\s?[0-9]{2}-[0-9]{3}\\s([a-zA-Z]+\\.?\\s?)+");
    if (std::regex_match(str, homeAddressRegex))
    {
        std::cout << "String contains home address" << std::endl;
    }
    else
    {
        std::cout << "String does not contain home address" << std::endl;
    }
}
void writeToFile(std::string str)
{
    std::ofstream file;
    file.open("file.txt", std::ios::app);
    if (file.is_open())
    {
        if (file.tellp() != 0)
        {
            file << std::endl;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                file << ";";
            }
            else
            {
                file << str[i];
            }
        }
        file << std::endl;
    }
    else
    {
        std::cout << "File does not exist" << std::endl;
    }
    file.close();
}
void checkPerson(std::string str)
{
    std::regex personRegex("([a-zA-Z]+\\s?)+\\s[0-9]+\\s[0-9]{9}\\s[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,4}");
    if (std::regex_match(str, personRegex))
    {
        std::cout << "String contains person" << std::endl;
        writeToFile(str);
    }
    else
    {
        std::cout << "String does not contain person" << std::endl;
    }
}
void readFromUser()
{
    std::string str;
    std::cout << "Write Name Surname Age Email" << std::endl;
    std::getline(std::cin, str);
    checkPerson(str);
}
std::string readFromFile(int row,int column){
    std::ifstream file;
    file.open("file.txt");
    if (file.is_open())
    {
        std::string str;
        std::string result;
        for (int i = 0; i < row; i++)
        {
            std::getline(file, str);
        }
        int counter = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ';')
            {
                counter++;
            }
            if (counter == column)
            {
                result += str[i];
            }
        }
        return result;
    }
    else
    {
        std::cout << "File does not exist" << std::endl;
    }
    file.close();
}
void statistic(){
    std::ifstream file;
    file.open("file.txt");
    if(file.is_open()){
        std::string str;
        int count = 0;
        while(std::getline(file,str)){
            count++;
        }
        std::cout<<"Number of people in file: "<<count<<std::endl;
        std::map<std::string,int> domains;
        for(int i = 0; i <= count; i++){
            std::string domain = readFromFile(i,4);
            int index = domain.find('@');
            domain = domain.substr(index+1);
            if(domain != ""){
                domains[domain]++;
            }
        }
        for(auto it = domains.begin(); it != domains.end(); it++){
            std::cout<<"Domain: "<<it->first<<" number: "<<it->second<<std::endl;
        }
        for(int i = 0; i <= count; i++){
            std::string number = readFromFile(i,3);
            checkStringIfFloat(number);
            if(number[number.length()-1] % 2 == 0){
                std::cout<<"Last digit in phone number  is divisible by 2"<<std::endl;
            }
            else{
                std::cout<<"Last digit in phone number is not divisible by 2"<<std::endl;
            }
            number.erase(std::remove(number.begin(),number.end(),';'),number.end());
            if(number != ""){
                std::cout<<"Phone number: "<<number<<std::endl;
            }
        }
        std::map<std::string,int> names;
        for(int i = 0; i <= count; i++){
            std::string name = readFromFile(i,0);
            name.erase(std::remove(name.begin(),name.end(),';'),name.end());
            if(name != ""){
                names[name]++;
            }
        }
        for(auto it = names.begin(); it != names.end(); it++){
            std::cout<<"Name: "<<it->first<<" number: "<<it->second<<std::endl;
        }

    }
    else{
        std::cout<<"File does not exist"<<std::endl;
    }
    file.close();
}

int main() {
//    checkStringIfFloat("+6.789");
//    checkStringIfFloat("-7.234");
//    checkStringIfFloat("FloatNumber:)");
//    checkStringIfHour("12:34:56");
//    checkStringIfHour("23:59");
//    checkStringIfHour("Godzina 24:00");
//    checkHomeAddres("ul. Kolejowa 14/232B, 12-345 Warszawa");
//    checkHomeAddres("ul. Leszetyckiego 5/14, 20-345 Lublin");
//    checkHomeAddres("ul. Leszetyckiego 5/14, 20-345");
//    checkPerson("Jan Kowalski 67 523123321 maciej@gmail.com");
//    checkPerson("Maciej Kowalski 67 523123321 maciej_potrec@gmail.com");
//    checkPerson("Jacek Kowalski 67 523123321 maciej_potrec@gmail.1com"); //wrong email
//    checkPerson("Kamil Kowalski 67 523123321 maciej_potrec@gmail.pl");
//    checkPerson("Jan Kowalski 67 523123321 maciej_potrec@gmail.to");
//    for(int i = 0; i < 5; i++){
//        readFromUser();
//    }
    statistic();
    //readFromFile(1,1);
    return 0;
}

