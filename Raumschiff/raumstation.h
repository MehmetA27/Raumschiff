#ifndef RAUMSTATION_H
#define RAUMSTATION_H
#include <iostream>
using namespace std;


class Raumstation
{
private:
    string Name;
    int xPosition;
    int yPosition;
    int Besatzung;
    int Energie;
public:
    Raumstation(); // Konstructur
    ~Raumstation(); //  Destructer
    void setName(string inName);
    void setPosition(int inX, int inY);
    void setBesatzung(int inBesatzung);
    void setEnergie(int inEnergie);
    string getName(void);
    int getXPosition(void);
    int getYPosition(void);
    int getEnergie(void);
    int getBesatzung(void);

};

#endif // RAUMSTATION_H

