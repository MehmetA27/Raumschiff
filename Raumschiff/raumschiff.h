#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include <iostream>
using namespace std;
#include"rettungskapsel.h"
#include "triebwerk.h"

class Raumschiff
{
private:
    string Name;
    int xPosition;
    int yPosition;
    int Besatzung;
    int Energie;
    Rettungskapsel* rk = NULL; // rk: degisken ancak burada pointer, Rettungskapsel: rk nin türü(int, string vs de olabilirdi)
    Rettungskapsel* save1;
    Triebwerk t1; // Komposition
    Triebwerk* t2;
public:
    Raumschiff(); // constructur
    Raumschiff(Rettungskapsel** k); // Aggregation // ** isaretci isaretcisi
    ~Raumschiff(); //  Destructer
    void setName(string inName);
    void setPosition(int inX, int inY);
    void setBesatzung(int inBesatzung);
    void setEnergie(int inEnergie);
    string getName(void);
    int getXPosition(void);
    int getYPosition(void);
    int getEnergie(void);
    int getBesatzung(void);
    void printRaumschiff(void);
    Rettungskapsel* getRettungskapsel();
    void setRettungskapsel(Rettungskapsel* r);
};

#endif // RAUMSCHIFF_H

