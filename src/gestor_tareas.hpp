#ifndef GESTOR_TAREAS_HPP
#define GESTOR_TAREAS_HPP
// Esto es una guarda de inclusión igual que en los otros headers, evita que se incluya más de una vez el mismo archivo.
#include "tarea.hpp" // Se necesita para poder usar objetos de tipo Tarea.
#include <vector>
#include <string>
using namespace std;

class GestorTareas // Aquí defines la clase GestorTareas con un solo atributo privado.
{
private:
    vector<Tarea> tareas; // tareas: un vector que almacena múltiples objetos de tipo Tarea. Es el "corazón" del gestor.

public:
    void agregarTarea(const Tarea &tarea);                  // Agrega una nueva tarea al vector.
    void mostrarTareas() const;                             // Muestra todas las tareas almacenadas.
    void guardarEnArchivo(const string &rutaArchivo) const; // Guarda las tareas en un archivo (para persistencia de datos).
    void cargarDesdeArchivo(const string &rutaArchivo);     // Carga tareas desde un archivo. Le da al usuario la posibilidad de restaurar sus tareas guardadas previamente.
};

#endif // Fin de la clase y de la guarda de inclusión.

// --------------------------------------------------------------------------------------------------------------------------------
// Clase GestorTareas
// gestor_tareas.hpp: Declaración de la clase.
// gestor_tareas.cpp: Implementación.
// Función: Administra una lista de tareas, por ejemplo:
// Agregar, eliminar, listar tareas.
// Leer y guardar tareas en el archivo tareas.txt.
