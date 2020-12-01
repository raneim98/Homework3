#include<string>
#include<iostream>
#include"header.h"
using namespace std;



 void ZooAnimal::Create (char *N, int cageNo, int weightDat, int Weight) {
     name=N;
     cageNumber=cageNo;
     weightDate=weightDat;
     weight=Weight;
 }

 void ZooAnimal::Destroy (){
    delete [] name;
 }
 char* ZooAnimal::reptName (){
    return name;
 }
int ZooAnimal::reptWeight(){
    return weightDate;

}
inline void ZooAnimal::changeWeightDate(int today){
    weightDate = today;
}

 int ZooAnimal::daysSinceLastWeighed (int today){
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
 }
 void ZooAnimal::isMotherOf(ZooAnimal& mamy){
    *mother=mamy;  
}
  
 int main() {
    ZooAnimal bozo;
    char bozo_arr[]={'B','o','z','o','\0'};
    bozo.Create (bozo_arr, 408, 1027, 400);
    cout << "This animal's name is " << bozo.reptName() << endl;
    bozo.Destroy ();
 }
 
 
   