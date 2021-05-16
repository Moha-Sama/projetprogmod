#include <stdexcept>
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


const int TAILLEGRILLE=9;


class Coord {

    public:
    
    Coord(int lig, int col);
    const int lignes(){return numLigne;}
    const int colonnes(){return numColonne;}
    
    private:
    int numLigne;
    int numColonne;

};