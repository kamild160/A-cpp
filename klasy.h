//
// Created by Kamil Dłutowski on 06/11/2018.
//

#ifndef LISTA3_KLASY_H
#define LISTA3_KLASY_H
#include "klasy.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <exception>
using namespace std;


class myexception: public exception
{          //nazwa funkcji    Działanie funkcji, w której nastąpi instrukcja throw, zostaje natychmiast przerwane, a rzucony obiekt zostaje natychmiast przekazany do bloku catch jako argument, gdzie zostaje obsłużona sytuacja wyjątkowa.
    const char * what() const throw() // const char* -> zwraca typ funkcji
    {
        return "Delta mniejsza od zera";
    }
};
class Kwadrat{


public:
    int a;
    int b;
    int c;


    Kwadrat(int aa, int bb, int cc){
        a=aa;
        b=bb;
        c=cc;
    }




    double miejscezerowe(unsigned int ktore, myexception myex){

        double delta=(b*b)-(4*a*c);
        double m1;
        double m2;
        if(delta>0){

            m1 =  ( (-b) +( pow(delta,0.5)) )  / (2*a);
            m2 =  ( (-b) -( pow(delta,0.5)) )  / (2*a);

            if(ktore==1){
                return (m1<m2)?m1:m2;
            }

            else{
                return (m1>m2)?m1:m2;
            }

        }

        else if(delta==0){
            return m1 = (-b)/(2*a);
        }

        else{
            throw myex;
        }

    }
};



#endif //LISTA3_KLASY_H
