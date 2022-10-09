 #include <iostream>
 #include "Person.h"
 #include "Teacher.h"
 #include "Student.h"
 using namespace std;
 int main()
 {
// cout<<endl<<"Obiekty klasy Person"<<endl;
// Person o1("Grazyna","Nowak",45);
// o1.showInfoPerson();
// cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
// o1.setAge(16);
// cout<<endl<<"Obiekty klasy Teacher"<<endl;
// Teacher n1("Barbara","Kowalska",56,30,"Phd");
// n1.showInfoTeacher();
// cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
// n1.setAge(34);
// return 0;

//     Person p1[3];
//     Person* p2;
//     Person* p3[3];
//     Person** p4;
//     for(int i=0; i<3; i++)
//          {
//          p1[i].init("Anna","Nowak",20+i);
//          p1[i].showInfoPerson();
//          }
//      p2=new Person[3];
//      for(int i=0; i<3; i++)
//          {
//          p2[i].init("Ola","Adamek",20+i);
//          p2[i].showInfoPerson();
//          }
//      for(int i=0; i<3; i++)
//          {
//          p3[i]=new Person("Kasia","Kowalska",20+i);
//          p3[i]->showInfoPerson();
//          }
//      p4=new Person*[3];
//      for(int i=0; i<3; i++)
//          {
//          p4[i]=new Person("Pawel","Wojcik",20+i);
//          p4[i]->showInfoPerson();
//          }
//      for(int i=0;i<3;i++){
//          delete p3[i];
//          }
//      for(int i=0;i<3;i++){
//          delete p4[i];
//          }
//      delete [] p4;
//      delete [] p2;
//      return 0;

int index = 95536;
Student s1[3];
Student* s2;
Student* s3[3];
Student** s4;
string name[3] = {{"Anna"}, {"Damian"}, {"Krzysiek"}};
string surname[3] = {{"Nowak"}, {"Holak"}, {"Dowak"}};
int age[3] = {20, 21, 22};

for(int i=0; i<3; i++)
{
s1[i].init(name[i],surname[i],age[i]);
s1[i].setIndex(to_string(index));
s1[i].showInfoStudent();
 index++;
}
s2=new Student[3];
for(int i=0; i<3; i++)
{
s2[i].init(name[i],surname[i],age[i]);
s2[i].setIndex(to_string(index));
s2[i].showInfoStudent();
index++;
}
for(int i=0; i<3; i++)
{
s3[i]=new Student("Kasia","Kowalska",20+i, to_string(index));
s3[i]->setIndex(to_string(index));
s3[i]->showInfoStudent();
index++;
}
s4=new Student*[3];
for(int i=0; i<3; i++)
{
s4[i]=new Student("Pawel","Wojcicki",20+i, to_string(index));
s4[i]->setIndex(to_string(index));
s4[i]->showInfoStudent();
index++;
}
for(int i=0;i<3;i++){
delete s3[i];
}
for(int i=0;i<3;i++) {
    delete s4[i];
}
delete [] s4;
delete [] s2;
return 0;





 }