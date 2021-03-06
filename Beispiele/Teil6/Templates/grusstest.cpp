/*
 * grusstest.cpp
 *
 * Autor: H.Drachenfels
 * Erstellt am: 20.11.2020
 */

#include "gruss.h"
#include "systemuhr.h"
#include "testuhr.h"
#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        gruss<systemuhr> g;
        std::cout << g.gruessen() << std::endl;

        gruss<testuhr> h;
        int stunde, minute;
        while (std::cin >> stunde >> minute)
        {
            h.uhr.stellen(stunde, minute);
            std::cout << h.gruessen() << std::endl;
        }
    }
    catch (std::exception &x)
    {
        std::cerr << x.what() << std::endl;
    }
    catch (std::string &s)
    {
        std::cerr << s << std::endl;
    }
}

