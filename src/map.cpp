#include <iostream>
#include <string>
#include <map>

using namespace std;
enum TipoPokemon{
    FUEGO,
    AGUA,
    ELECTRICO,
    PLANTA,
};

class Pokemon{

private:
    string nombre;
    int ataque;
    TipoPokemon tipo;
public:
    Pokemon(string nombre, int ataque, TipoPokemon tipo){
        this ->nombre = nombre;
        this ->ataque = ataque;
        this ->tipo = tipo;
    }
};
int main(int argc, char const *argv[]){

    map<int, Pokemon> pokedex;
    pokedex[1] = Pokemon("Bulbasour",1,TipoPokemon::PLANTA);
    pokedex[2] = Pokemon("ivisaur",2,TipoPokemon::PLANTA);
    pokedex[3] = Pokemon("venusaur",3,TipoPokemon::PLANTA);
    pokedex[4] = Pokemon("charmander",1,TipoPokemon::FUEGO);
    pokedex[5] = Pokemon("charmeleon",2,TipoPokemon::FUEGO);
    pokedex[6] = Pokemon("charizard",3,TipoPokemon::FUEGO);
    pokedex[7] = Pokemon("squirtle",1,TipoPokemon::AGUA);
    pokedex[8] = Pokemon("wartortle",2,TipoPokemon::AGUA);
    pokedex[9] = Pokemon("Blastoise",3,TipoPokemon::AGUA);

    map<string, string> diccionario;
    diccionario["programa"] = "serie de elementos organizados";
    diccionario["aleatorios"] = "que depende del azar";





    return 0;
}