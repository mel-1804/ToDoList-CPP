# Compilador y opciones
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Directorios
SRC_DIR = src
OBJ_DIR = obj
BIN = gestor_tareas

# Archivos fuente y objetos
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Regla principal: compilar y enlazar
$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilar archivos .cpp en .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Ejecutar el programa (compila si es necesario)
run: $(BIN)
	./$(BIN)

# Limpiar archivos generados
clean:
	rm -f $(OBJ_DIR)/*.o $(BIN)

