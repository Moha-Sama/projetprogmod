
CXX=g++
CXXFLAGS=-std=c++11
EXEC_FILES=test

all: test

# Regle generique
%.o: %.cpp
	$(CXX) -c $< $(CXXFLAGS)

# fichiers objets

coord.o: coord.hpp
    
# fichier executable

test: test.o coord.o 
	$(CXX) -o $@ $^ $(LDFLAGS)
    

check: test

clean:
	rm -f *.o $(EXEC_FILES)