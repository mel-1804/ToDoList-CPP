#include "gestor_tareas.hpp"
#include <iostream>
using namespace std;

// Función: Punto de entrada del programa. Aquí es donde comienza la ejecución.
// Qué hace: Normalmente crea instancias de clases como GestorTareas y gestiona la lógica del menú o flujo de la aplicación.

int main()
{
    GestorTareas gestor;
    gestor.cargarDesdeArchivo("data/tareas.txt");

    int opcion;
    do
    {
        cout << "\n--- GESTOR DE TAREAS ---\n";
        cout << "1. Agregar tarea\n";
        cout << "2. Ver tareas\n";
        cout << "3. Guardar y salir\n";
        cout << "Opción: ";
        cin >> opcion;
        cin.ignore(); // limpiar buffer

        if (opcion == 1)
        {
            string desc, fecha;
            int prio;

            cout << "Descripción: ";
            getline(cin, desc);
            cout << "Prioridad (1-5): ";
            cin >> prio;
            cin.ignore();
            cout << "Fecha límite (YYYY-MM-DD): ";
            getline(cin, fecha);

            Tarea nueva(desc, prio, fecha);
            gestor.agregarTarea(nueva);
        }
        else if (opcion == 2)
        {
            gestor.mostrarTareas();
        }

    } while (opcion != 3);

    gestor.guardarEnArchivo("data/tareas.txt");
    cout << "Tareas guardadas. ¡Hasta pronto!\n";

    return 0;
}
