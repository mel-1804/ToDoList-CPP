#ifndef GESTOR_TAREAS_HPP
#define GESTOR_TAREAS_HPP

#include "tarea.hpp"
#include <vector>
#include <string>

class GestorTareas
{
private:
    std::vector<Tarea> tareas;

public:
    void agregarTarea(const Tarea &tarea);
    void mostrarTareas() const;
    void guardarEnArchivo(const std::string &rutaArchivo) const;
    void cargarDesdeArchivo(const std::string &rutaArchivo);
};

#endif
