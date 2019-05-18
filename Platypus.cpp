#include <iostream>
#include <stdlib.h>
#include "Platypus.h"

using namespace std;

/** Auxiliary Functions **/


/** Constructors **/
Platypus::Platypus()
: weight(1), age(0), name('A'), gender('M'), alive(false), mutant(false)
{
}

Platypus::Platypus(char initGender, float initWeight, short initAge, char initName)
{
    gender = initGender;
    weight = initWeight;
    age = initAge;
    name = initName;

    alive = true;
    mutant = false;

}

/** Input/Output **/
void Platypus::print(ostream & out) const
{
    out << "Platypus's name is: " << name << "\n"
    << name << "'s gender is: " << gender << "\n"
    << name << "'s age is: " << age << "\n"
    << name << "'s weight is: " << weight << "\n"
    << name << (alive == true ? " is alive\n" : " is dead\n")
    << name << (mutant == true ? " is a mutant\n" : " is not a mutant\n");
}

void Platypus::read(istream & in, ostream & out)
{
    float inWeight;
    short inAge;
    char inName;
    char inGender;

    out << "Name the Platypus: (One letter names)" << endl;
    in >> inName;
    out << "What gender is the Platypus? (M/F)" << endl;
    in >> inGender;
    out << "How old is the Platypus? (Age is in terms of months)" << endl;
    in >> inAge;
    out << "How much does the Platypus weigh?" << endl;
    in >> inWeight;
    out << endl;


    if ( ( (inName >= 65 && inName <= 90)|| (inName >= 97 && inName <= 122) )
        && ( (inGender == 'M' || inGender == 'm') || (inGender == 'F' || inGender == 'f') ) )
    {
        name = inName;
        if(inGender == 'f' || inGender == 'F')
        {
            gender = 'F';
        }
        else if(inGender == 'm' || inGender == 'M')
        {
            gender = 'M';
        }
        age = inAge;
        weight = inWeight;
        alive = true;
        mutant = false;
    }
    else
    {
        cerr << "*** There are some invalid inputs for the Platypus ***\n";
    }
}

/** Incremental Operations **/
void Platypus::age_me(short inc)
{
    short temp = age;
    srand((int)time(0));
    int mutatedProbability = (rand()%100)+1;
    int deathFactor = weight*10;
    int deathProbability = (rand()%100)+1;
    age = age + inc;
    cout << name << "'s previous age was " << temp << " months. Its age was increased by " << inc << " months. Its new age is " << age << " months.\n" << endl;

    if(mutatedProbability == 1 || mutatedProbability == 2)
    {
        if(mutant == true)
        {
            cout << name << " has already been mutated.\n";
        }
        else
        {
            mutant = true;
            cout << name << " has mutated\n" << endl;
        }
    }
    else
    {
            cout << name << " is not mutated.\n" << endl;
    }

    if(deathProbability >= 1 || deathProbability <= deathFactor)
    {
        if(alive == false)
        {
            cout << name << " is already dead.\n" << endl;
        }
        else
        {
            alive = false;
            cout << name << " has died.\n" << endl;
        }
    }
    else
    {
        cout << name << " is alive\n" << endl;
    }
}

void Platypus::eat()
{
    float temp = weight;
    srand((int)time(0));
    float increment = (rand()%50)+1;
    weight = (increment/10) + weight;

    cout << name << "'s old weight was " << temp << ". " << name << "'s weight was increased by " << increment/10 << ". "
    << name << "'s new weight is " << weight << ".\n" << endl;
}

/** Accessors **/
float Platypus::getWeight() const
{
    return weight;
}

short Platypus::getAge() const
{
    return age;
}

char Platypus::getName() const
{
    return name;
}

char Platypus::getGender() const
{
    return gender;
}

bool Platypus::getAlive() const
{
    return alive;
}

bool Platypus::getMutant() const
{
    return mutant;
}

/** Mutators **/
void Platypus::setAlivetoFalse()
{
    alive = false;
}

/** Miscellaneous **/
void Platypus::fight(Platypus & p)
{
    float fightratio;
    int compToFR;
    fightratio = (weight/p.getWeight())*50;
    srand((int)time(0));
    compToFR = (rand()%100)+1;

    cout << name << " is fighting " << p.getName() << endl << endl;

    if(compToFR < fightratio)
    {
        p.setAlivetoFalse();
        cout << name << " wins\n" << endl;
    }
    else if(compToFR > fightratio)
    {
        alive = false;
        cout << p.getName() << " wins\n" << endl;
    }
}

void Platypus::hatch()
{
    srand((int)time(0));
    float weight1 = (rand()%10)+1;
    weight = weight1/10;
    int genderSelector = (rand()%2)+1;
    name = (rand()%26)+65;

    if(genderSelector == 1)
    {
        gender = 'M';
    }
    else if(genderSelector == 2)
    {
        gender = 'F';
    }

    alive = true;
    mutant = false;
    age = 0;

    cout << "An egg has hatched!\n" << "The Platypus is named " << name << ". It's gender is " << gender << ". It is "
    << age << " months old. It weighs " << weight << " lbs. " << name << (alive == true ? " is alive. " : " is dead. ")
    << name << (mutant == true ? " is a mutant.\n" : " is not a mutant.\n") << endl;
}

/** << and >> operators **/
ostream & operator<<(ostream & out, const Platypus & p)
{
    p.print(out);
    return out;
}












