#ifndef TAREA_HPP
#define TAREA_HPP

#include <string>

class Tarea
{
private:
    std::string descripcion;
    int prioridad;
    std::string fechaLimite;

public:
    Tarea(std::string desc, int prio, std::string fecha);

    std::string getDescripcion() const;
    int getPrioridad() const;
    std::string getFechaLimite() const;

    void mostrarTarea() const;
};

#endif
