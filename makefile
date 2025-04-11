PROYECTO := main
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXXFLAGS := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

# Asegura que el directorio bin exista
$(BIN):
	mkdir -p $(BIN)

# Compilación principal
$(EXE): $(BIN) $(SRC)/archivo.cpp
	c++ $(CXXFLAGS) $< -o $@ $(LIB) -I$(INCLUDE)

run: $(EXE)
	./$(EXE)

clean:
	rm -f $(BIN)/*

# ------------------------
# PRÁCTICAS

PRACTICAS := ejecutable
EXE2 := $(BIN)/$(PRACTICAS)

$(EXE2): $(BIN) $(SRC)/memoria.cpp
	c++ $(CXXFLAGS) $< -o $@ $(LIB) -I$(INCLUDE)

practicas: $(EXE2)
	./$(EXE2)

# ------------------------
# ARCHIVO BINARIO

ARCHIVO := archivo
EXE3 := $(BIN)/$(ARCHIVO)

$(EXE3): $(SRC)/binario.cpp | $(BIN)

	c++ $(CXXFLAGS) $< -o $@ -I$(INCLUDE)

archivo: $(EXE3)
	./$(EXE3)

clean2:
	rm -f $(BIN)/*
