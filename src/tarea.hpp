#ifndef TAREA_HPP
#define TAREA_HPP
// Estas dos líneas conforman una guarda de inclusión.
// Sirve para evitar que este archivo se incluya múltiples veces durante la compilación, lo que podría causar errores.
#include <string>
using namespace std;

class Tarea // Define la clase Tarea que representa una tarea individual en este gestor de tareas.
{
private: // Definimos sus atributos privados
    string descripcion;
    int prioridad;
    string fechaLimite;

public: // Este es el constructor de la clase. Se usa para inicializar los atributos cuando se crea una nueva tarea.
    Tarea(string desc, int prio, string fecha);

    // Estos son métodos getters, que permiten acceder de forma segura a los atributos privados.
    // El const al final significa que estos métodos no modifican el objeto.
    string getDescripcion() const;
    int getPrioridad() const;
    string getFechaLimite() const;

    // Este método sirve para mostrar la información de una tarea.
    void mostrarTarea() const;
};

#endif
// Finalizas la clase y la guarda de inclusión.

//-----------------------------------------------------------------------------------------------------------------------------------------------
// Clase Tarea
// tarea.hpp: Contiene la declaración de la clase (atributos y métodos).
// tarea.cpp: Contiene la implementación de esos métodos.
// Función: Representa una tarea individual. Puede tener atributos como descripción, fecha, completada, etc.

// ¿Qué son las guardas de inclusión (include guards)?
//  Son una forma de asegurarte de que un archivo de cabecera (.hpp) solo se incluya una vez por compilación, aunque esté referenciado múltiples veces.

// #ifndef TAREA_HPP
// #define TAREA_HPP
// ... contenido del archivo ...
// #endif

// Esto le dice al compilador:
// “Solo incluye este archivo si TAREA_HPP no ha sido definido antes. Y si lo vas a incluir, ahora lo defines.”
