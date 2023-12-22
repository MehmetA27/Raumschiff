#include <iostream>
using namespace std;
#include "raumstation.h"

Raumstation::Raumstation()
{

}

void Raumstation::setName(string inName)
{
    Name = inName;
}

string Raumstation::getName(void)
{
    return Name;
}

void Raumstation::setBesatzung(int inBesatzung)
{
    Besatzung = inBesatzung;
}


int Raumstation::getBesatzung(void)
{
    return Besatzung;
}

void Raumstation::setPosition(int inX, int inY)
{
    xPosition = inX;
    yPosition = inY;
}

int Raumstation::getXPosition(void)
{
    return xPosition;
}

int Raumstation::getYPosition(void)
{
    return yPosition;
}

void Raumstation::setEnergie(int inEnergie)
{
    Energie = inEnergie;
}

int Raumstation::getEnergie(void)
{
    return Energie;
}
