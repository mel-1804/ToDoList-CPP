#include "gestor_tareas.hpp"
#include <iostream>

int main()
{
    GestorTareas gestor;
    gestor.cargarDesdeArchivo("data/tareas.txt");

    int opcion;
    do
    {
        std::cout << "\n--- GESTOR DE TAREAS ---\n";
        std::cout << "1. Agregar tarea\n";
        std::cout << "2. Ver tareas\n";
        std::cout << "3. Guardar y salir\n";
        std::cout << "Opción: ";
        std::cin >> opcion;
        std::cin.ignore(); // limpiar buffer

        if (opcion == 1)
        {
            std::string desc, fecha;
            int prio;

            std::cout << "Descripción: ";
            getline(std::cin, desc);
            std::cout << "Prioridad (1-5): ";
            std::cin >> prio;
            std::cin.ignore();
            std::cout << "Fecha límite (YYYY-MM-DD): ";
            getline(std::cin, fecha);

            Tarea nueva(desc, prio, fecha);
            gestor.agregarTarea(nueva);
        }
        else if (opcion == 2)
        {
            gestor.mostrarTareas();
        }

    } while (opcion != 3);

    gestor.guardarEnArchivo("data/tareas.txt");
    std::cout << "Tareas guardadas. ¡Hasta pronto!\n";

    return 0;
}
