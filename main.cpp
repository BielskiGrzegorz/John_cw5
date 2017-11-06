#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Probka.HPP"
#include "Analizator.HPP"
#include "Loader.HPP"
#include "Sygnal.HPP"


using namespace std;

int main(int argc, char*argv[])
{
    if(argc !=2)
    {
        return -1;
    }
    Sygnal John;
    Loader Josh;
    Analizator Mario;
    Probka Dan;
    John=Josh.wczytaj(argv[1]);
    Josh.zapiszSygnal(John,"out.csv");
    cout<<endl<<"Srednia: "<<Mario.srednia(John);
    cout<<endl<<"Minimum: "<<Mario.minimum(John);
    cout<<endl<<"Maksimum: "<<Mario.maksimum(John);
cout<<endl<<"Calka: "<<Mario.calka(John);


    return 0;
}
