#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H
#include <iostream>
using namespace std;


class Rettungskapsel
{
private:
    string Name;
    int xPosition;
    int yPosition;
    int maxBesatzung;
public:
    Rettungskapsel(); // Konstructur
    ~Rettungskapsel(); //  Destructer
    void setName(string inName);
    void setPosition(int inX, int inY);
    void setMaxBesatzung(int inBesatzung);
    string getName(void);
    int getXPosition(void);
    int getYPosition(void);
    int getMaxBesatzung(void);

};

#endif // RETTUNGSKAPSEL_H
