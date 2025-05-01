#include <iostream>
#include <string>
#include <list>

using namespace std;

class persona{
private:
    string nombre;
    string edad;
public:
    persona(string nombre, int edad){
        this ->nombre = nombre;
        this ->edad = edad;
    }
};

int main(int argc, char const *argv[]){

    list<string> nombres;
    nombres.push_back("pablo");
    nombres.push_back("maria");
    nombres.push_back("juan");
    nombres.push_back("paco");
    nombres.push_back("ray");

    list<int> edades;
    edades.push_back(5);
    edades.push_back(51);
    edades.push_back(15);
    edades.push_back(2);
    edades.push_back(25);

    list<persona> persona;
    
    for (auto it = nombres.begin(); it != nombres.end(); it++)
     {
     personas.push_back(Persona(
     *it,
     5
    ));
}
    







    return 0;
}