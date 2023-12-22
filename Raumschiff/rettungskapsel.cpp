#include <iostream>
using namespace std;
#include "rettungskapsel.h"

Rettungskapsel::Rettungskapsel()
{

}

void Rettungskapsel::setName(string inName)
{
    Name = inName;
}

string Rettungskapsel::getName(void)
{
    return Name;
}

void Rettungskapsel::setPosition(int inX, int inY)
{
    xPosition = inX;
    yPosition = inY;
}

int Rettungskapsel::getXPosition(void)
{
    return xPosition;
}

int Rettungskapsel::getYPosition(void)
{
    return yPosition;
}

void Rettungskapsel::setMaxBesatzung(int inBesatzung)
{
    maxBesatzung = inBesatzung;
}

int Rettungskapsel::getMaxBesatzung(void)
{
    return maxBesatzung;
}
