#include "gestor_tareas.hpp"
#include <fstream>
#include <iostream>

void GestorTareas::agregarTarea(const Tarea &tarea)
{
    tareas.push_back(tarea);
}

void GestorTareas::mostrarTareas() const
{
    for (const auto &tarea : tareas)
    {
        tarea.mostrarTarea();
        std::cout << "----------------------\n";
    }
}

void GestorTareas::guardarEnArchivo(const std::string &rutaArchivo) const
{
    std::ofstream archivo(rutaArchivo);
    for (const auto &tarea : tareas)
    {
        archivo << tarea.getDescripcion() << "|"
                << tarea.getPrioridad() << "|"
                << tarea.getFechaLimite() << "\n";
    }
}

void GestorTareas::cargarDesdeArchivo(const std::string &rutaArchivo)
{
    tareas.clear();
    std::ifstream archivo(rutaArchivo);
    std::string linea;
    while (getline(archivo, linea))
    {
        size_t p1 = linea.find("|");
        size_t p2 = linea.rfind("|");

        std::string desc = linea.substr(0, p1);
        int prio = std::stoi(linea.substr(p1 + 1, p2 - p1 - 1));
        std::string fecha = linea.substr(p2 + 1);

        tareas.push_back(Tarea(desc, prio, fecha));
    }
}
