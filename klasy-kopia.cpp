#include "klasy.h"
#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int main(){



    Kwadrat kw(2.5,5,1.00);

    unsigned int a=0;



    try{
        cout<<kw.miejscezerowe(a);
    }catch (exception& e){
        cout<<e.what();
    }

    return 0;
}