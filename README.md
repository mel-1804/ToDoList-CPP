# 📝 Gestor de Tareas en C++ (To-Do List)

Este es un proyecto en C++ que implementa un **gestor de tareas**, permitiendo al usuario crear, listar, buscar, eliminar y priorizar tareas. Es un proyecto práctico para reforzar conocimientos de estructuras de datos, programación orientada a objetos y manejo de archivos.

## 💡 Objetivos del Proyecto

- Practicar **estructuras dinámicas** como listas enlazadas y colas de prioridad.
- Aplicar **programación orientada a objetos** (POO).
- Utilizar **archivos** para guardar las tareas.
- Desarrollar un programa de consola interactivo.
- Comprender y aplicar **análisis de coste algorítmico** en operaciones comunes como búsqueda, inserción y ordenamiento.

## 🧱 Estructura del Proyecto

- Cada tarea es un objeto con:

  - `id`: identificador único
  - `título`: nombre de la tarea
  - `descripción`: breve detalle
  - `fecha_limite`: opcional, usada para ordenar
  - `prioridad`: entera, mientras más alta, más importante
  - `completada`: booleano

- Las tareas se almacenan en una **lista enlazada**, y una **cola de prioridad** gestiona las más urgentes.

## 🛠 Funcionalidades

- [x] Agregar nueva tarea
- [x] Eliminar tarea por ID
- [x] Marcar tarea como completada
- [x] Ver todas las tareas
- [x] Buscar tarea por título
- [x] Ordenar tareas por prioridad
- [x] Guardar tareas en archivo `.txt`
- [ ] Cargar tareas desde archivo al iniciar
- [ ] Ordenar por fecha límite

## ▶️ Cómo compilar y ejecutar

Este proyecto está escrito en C++ y puedes compilarlo de dos formas:

# Opción 1: Compilación Manual:

Compila desde la terminal usando g++:

g++ gestor_tareas.cpp -o gestor
./gestor

# Opción 2: Usando Makefile (recomendado)

Este proyecto está escrito en C++ y utiliza un archivo Makefile para automatizar el proceso de compilación y ejecución.

✅ Requisitos
Compilador g++ (C++17 o superior)
Terminal compatible con comandos make

🚀 Compilación y ejecución con Makefile
Para compilar el proyecto y generar el ejecutable:
make

Para compilar y ejecutar el programa en un solo paso:
make run

Esto compilará todos los archivos fuente del directorio src/, generará los archivos objeto en obj/ y creará el ejecutable gestor_tareas.

🧹 Limpiar archivos generados
Si deseas eliminar los archivos .o y el ejecutable para empezar desde cero, puedes ejecutar:
make clean
