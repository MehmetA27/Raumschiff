#include "Raumschiff.h"
#include <iostream>
using namespace std;

Raumschiff::Raumschiff()
{
    cout << "Raumschiff erstellt" << endl;
}


Raumschiff::Raumschiff(Rettungskapsel** k) {
    save1 = new Rettungskapsel; // save1'ı oluşturun ve Rettungskapsel'ı başlatın
    *k = save1; // Aggregation
    cout << "Konstruktur2 des Raumschiffs" << endl;
}

Raumschiff::~Raumschiff()
{
    cout << "Raumschiff zerstört" << endl;
}

void Raumschiff::setName(string inName)
{
    Name = inName;
}


string Raumschiff::getName(void)
{
    return Name;
}

void Raumschiff::setBesatzung(int inBesatzung)
{
    Besatzung = inBesatzung;
}

int Raumschiff::getBesatzung(void)
{
    return Besatzung;
}

void Raumschiff::setPosition(int inX, int inY)
{
    xPosition = inX;
    yPosition = inY;
}

int Raumschiff::getXPosition(void)
{
    return xPosition;
}

int Raumschiff::getYPosition(void)
{
    return yPosition;
}

void Raumschiff::setEnergie(int inEnergie)
{
    Energie = inEnergie;
}

int Raumschiff::getEnergie(void)
{
    return Energie;
}

void Raumschiff::printRaumschiff(void)
{
    cout << "Name:" << getName() << endl;
    cout << "Besatzung:" << getBesatzung() << endl;
    cout << "Energie:" << getEnergie() << endl;
    cout << "xPosition" << getXPosition() << endl;
    cout << "yPosition" << getYPosition() << endl;
}

void Raumschiff::setRettungskapsel(Rettungskapsel* r)
{

}
