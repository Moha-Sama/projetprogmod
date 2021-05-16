#include <stdexcept>
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

#define TEST_CASE DOCTEST_TEST_CASE
#include "coord.hpp"
#include "doctest.h"


Coord::Coord(int lig, int col) {
    if(lig > TAILLEGRILLE or col > TAILLEGRILLE) {
      throw invalid_argument("Coordonnées incorrectes");
    }
    lig=numLigne;
    col=numColonne;
}



TEST_CASE("Test"){
    Coord a(9,1);}
