# Práctica 3 - Funciones Primitivas Recursivas

## Descripción

Implementación de la función potencia mediante Funciones Primitivas Recursivas (FPR), utilizando las funciones básicas, composición y recursión primitiva.

La función implementada es:

```Power(x,y)=x^y```

## Funciones implementadas

El programa utiliza las siguientes funciones:

- **Zero:** función constante que devuelve 0.
- **Successor:** devuelve el sucesor de un número natural.
- **Projection:** devuelve uno de los argumentos recibidos.
- **One:** función constante que devuelve 1.
- **Addition:** suma dos números naturales mediante recursión primitiva.
- **Multiplication:** multiplica dos números naturales mediante recursión primitiva.
- **Power:** calcula la potencia mediante recursión primitiva.

## Requisitos

- Compilador compatible con C++17.
- GNU Make.

## Compilación

Para compilar el programa:

```bash
make
```

Para eliminar los archivos generados:

```bash
make clean
```

## Ejecución

El programa recibe dos argumentos:

```bash
./main <base> <exponente>
```

Ambos argumentos deben ser números naturales.

Ejemplo:

```bash
./main 2 5
```

## Salida

El programa muestra dos valores:

1. El resultado de elevar la base al exponente.
2. El número de invocaciones teóricas de las funciones primitivas recursivas.

Ejemplo:

```text
32
[conteo de invocaciones]
```

## Estructura del proyecto

- `include/`: archivos de cabecera (`.h`) y plantillas (`.tpp`).
- Archivos `.cpp`: implementaciones de las funciones.
- `build/`: archivos objeto generados durante la compilación.
- `main.cpp`: punto de entrada del programa.
- `Makefile`: automatización de la compilación.
