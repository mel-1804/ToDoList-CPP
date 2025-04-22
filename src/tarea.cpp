#include "tarea.hpp"
#include <iostream>

Tarea::Tarea(std::string desc, int prio, std::string fecha)
    : descripcion(desc), prioridad(prio), fechaLimite(fecha) {}

std::string Tarea::getDescripcion() const
{
    return descripcion;
}

int Tarea::getPrioridad() const
{
    return prioridad;
}

std::string Tarea::getFechaLimite() const
{
    return fechaLimite;
}

void Tarea::mostrarTarea() const
{
    std::cout << "Descripción: " << descripcion << "\n";
    std::cout << "Prioridad: " << prioridad << "\n";
    std::cout << "Fecha Límite: " << fechaLimite << "\n";
}
