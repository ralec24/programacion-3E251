#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){

    vector<string> nombres;
    nombres.emplace_back("ramon");
    nombres.emplace_back("segundo");
    nombres.emplace_back("tercer");

    cout << nombres.at(3) << endl;

    for (auto &&nombre : nombres){
        cout << nombre << endl;
    }



    return 0;
}
