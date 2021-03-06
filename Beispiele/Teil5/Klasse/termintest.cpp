/*
 * termintest.cpp
 *
 * Beispielprogramm Klasse.
 *
 * Autor: H.Drachenfels
 * Erstellt am: 2.8.2019
 */
#include "termin.h"
#include <list>
#include <iostream>

int main()
{
    std::list<termin*> pruefer_kalender;
    std::list<termin*> kandidaten_kalender;
    termin pruefung = {datum::heute(), "Pruefung Systemprogrammierung"};

    pruefer_kalender.push_back(&pruefung);
    kandidaten_kalender.push_back(&pruefung);
    pruefung.verschieben({1, 4, 2040}); // datum(1, 4, 2040)

    for (auto t : pruefer_kalender)
    {
        std::cout << "Pruefer: "
                  << t->get_datum()
                  << ", "
                  << t->get_beschreibung()
                  << std::endl;
    }

    for (auto t : kandidaten_kalender)
    {
        std::cout << "Kandidat: "
                  << t->get_datum()
                  << ", "
                  << t->get_beschreibung()
                  << std::endl;
    }
}

