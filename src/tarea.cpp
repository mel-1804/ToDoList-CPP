#include "tarea.hpp" // Incluye la definición de la clase Tarea, necesaria para poder implementar sus métodos.
#include <iostream>
using namespace std;

// Este es el constructor de la clase. Usa una lista de inicialización para asignar los valores directamente a los atributos privados.
// Es más eficiente que hacerlo dentro del cuerpo del constructor.

Tarea::Tarea(string desc, int prio, string fecha)
    : descripcion(desc), prioridad(prio), fechaLimite(fecha) {}

// Estos son los getters, cada uno retorna el valor de su atributo correspondiente.
// El const indica que no modifican el objeto. Importante para mantener la seguridad y consistencia del estado del objeto.

string Tarea::getDescripcion() const
{
    return descripcion;
}

int Tarea::getPrioridad() const
{
    return prioridad;
}

string Tarea::getFechaLimite() const
{
    return fechaLimite;
}

// Este método muestra en consola los detalles de la tarea. También es const, ya que solo lee los atributos sin modificarlos.
void Tarea::mostrarTarea() const
{
    cout << "Descripción: " << descripcion << "\n";
    cout << "Prioridad: " << prioridad << "\n";
    cout << "Fecha Límite: " << fechaLimite << "\n";
}

// ---------------------------------------------------------------------------------------------------------------------------------
// Clase Tarea
// tarea.hpp: Contiene la declaración de la clase (atributos y métodos).
// tarea.cpp: Contiene la implementación de esos métodos.
// Función: Representa una tarea individual. Puede tener atributos como descripción, fecha, completada, etc.