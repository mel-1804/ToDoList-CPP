#include "gestor_tareas.hpp" // para usar la clase GestorTareas y acceder a Tarea.
#include <fstream>           // para leer y escribir archivos (ifstream, ofstream).
#include <iostream>
using namespace std;

// Añade una tarea al vector. Súper simple y eficiente.
void GestorTareas::agregarTarea(const Tarea &tarea)
{
    tareas.push_back(tarea);
}
// Recorre el vector de tareas y llama a mostrarTarea() de cada una.
// Muy buena práctica el const auto& para evitar copias y respetar inmutabilidad.
void GestorTareas::mostrarTareas() const

{
    for (const auto &tarea : tareas)
    {
        tarea.mostrarTarea();
        cout << "----------------------\n";
    }
}

// Crea un archivo (o sobrescribe uno existente).
// Escribe los atributos de cada tarea en una línea separados por |.
// Perfecto para luego hacer un split cuando se quiera leer esa línea.
// Es const porque no modifica el objeto GestorTareas.
void GestorTareas::guardarEnArchivo(const string &rutaArchivo) const
{
    ofstream archivo(rutaArchivo);
    for (const auto &tarea : tareas)
    {
        archivo << tarea.getDescripcion() << "|"
                << tarea.getPrioridad() << "|"
                << tarea.getFechaLimite() << "\n";
    }
}

// Limpia el vector (tareas.clear()) antes de cargar nuevas tareas.
// Lee cada línea del archivo.
// Usa find y substr para extraer los datos.
// Convierte la prioridad de string a entero con stoi.
// Crea una nueva instancia de Tarea y la guarda.
void GestorTareas::cargarDesdeArchivo(const string &rutaArchivo)
{
    tareas.clear();
    ifstream archivo(rutaArchivo);
    string linea;
    while (getline(archivo, linea))
    {
        size_t p1 = linea.find("|");
        size_t p2 = linea.rfind("|");

        string desc = linea.substr(0, p1);
        int prio = stoi(linea.substr(p1 + 1, p2 - p1 - 1));
        string fecha = linea.substr(p2 + 1);

        tareas.push_back(Tarea(desc, prio, fecha));
    }
}

// ------------------------------------------------------------------------------------------------------------------------------
// Clase GestorTareas
// gestor_tareas.hpp: Declaración de la clase.
// gestor_tareas.cpp: Implementación.
// Función: Administra una lista de tareas, por ejemplo:
// Agregar, eliminar, listar tareas.
// Leer y guardar tareas en el archivo tareas.txt.