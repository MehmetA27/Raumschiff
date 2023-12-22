#include "Raumschiff.h"
#include "rettungskapsel.h"
#include "triebwerk.h"
#include "raumstation.h"


#include <iostream>
using namespace std;

int main()
{
    // objekt erstellen
    Raumschiff* r1 = new Raumschiff;
    Rettungskapsel* rk1 = new Rettungskapsel;
    Triebwerk* t1 = new Triebwerk;

    //Objekt mit Werten belegen
    r1->setName("Enterprise");
    r1->setBesatzung(100);
    r1->setEnergie(100);
    r1->setPosition(50,60);

    cout << "Daten des Raumschiffs:" << endl;
    r1->printRaumschiff();

    cout << "************************************" << endl;
    cout << "Raumschiff erhält die Rettungskapsel" << endl;


    return 0;
}
