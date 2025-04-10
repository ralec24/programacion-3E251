PROYECTO =  main
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

$(EXE) : $(SRC)/main.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run : $(EXE)
	./$<

clean:
	rm$(BIN)/*

#Practicas
PRACTICAS = ejecutable
EXE2 := $(BIN)/$(PRACTICAS)
practicas: bin/ejecutable
	./$<

$(EXE2) : $(SRC)/memoria.cpp #nombre archivo
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)
bin/ejecutable: src/memoria.cpp
	c++ $< -o $@ -I$(INCLUDE)

run2: $(EXE2)
archivo: bin/archivo
	./$<

clean2 :
	rm $(BIN)/*
bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)

