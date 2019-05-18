#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#ifndef Platypus_h
#define Platypus_h

class Platypus
{

public:
    /** Constructors **/
    Platypus();
    Platypus(char initGender, float initWeight, short initAge, char initName);
    /** Accessors **/
    float getWeight() const;
    short getAge() const;
    char getName() const;
    char getGender() const;
    bool getAlive() const;
    bool getMutant() const;
    /** Mutators **/
    void setAlivetoFalse();
    /** Input/Output **/
    void print(ostream & out) const;
    void read(istream & in, ostream & out);
    /** Incremental Operations **/
    void age_me(short inc);
    void eat();
    /** Miscellaneous **/
    void fight(Platypus & p);
    void hatch();
private:

    float weight;
    short age;
    char name;
    char gender;
    bool alive;
    bool mutant;

};

/** << and >> operators **/
ostream & operator<<(ostream & out, const Platypus & p);

#endif // Platypus_h
