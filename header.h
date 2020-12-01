
#include<string>

enum scale {ounces, kilograms};
class ZooAnimal
 {
 private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
 public:
    void Create (char*, int, int, int);
    void Destroy (); // destroy function
    void isMotherOf(ZooAnimal&);
    void changeWeight(int pounds);
    inline void changeWeightDate(int today);
    char* reptName();
    int reptWeight();
    void reptWeight(scale which);
    inline int reptWeightDate();
    int daysSinceLastWeighed(int today);
 };