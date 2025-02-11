# Libft - 42 Málaga 🌟

Bienvenido a mi implementación de la **libft**, el primer proyecto del programa de 42. Este proyecto consiste en recrear una biblioteca personalizada en C que incluye múltiples funciones estándar de la librería `<string.h>` y otras utilidades adicionales.

## 📜 Descripción

La **libft** es una librería personalizada creada desde cero en el lenguaje **C** como parte del plan de estudios de la escuela **42**. Su objetivo principal es desarrollar nuestras habilidades en programación básica, prácticas de memoria y organización de código.

Con esta biblioteca, podemos utilizar funciones estándar de C (como manipulación de cadenas, asignación de memoria, etc.) e implementar algunas completamente nuevas, listas para usarse en proyectos futuros.

---

## 🛠️ Funcionalidades

### Categorías principales:
- **Funciones de la libc:** Implementaciones de funciones estándar como `strlen`, `strdup`, `atoi`, entre otras.
- **Manipulación de memoria:** Funciones como `memset`, `calloc`, `bzero`, `memcpy`.
- **Manipulación de cadenas:** Implementaciones de funciones como `strncmp`, `strchr`, `strrchr`.
- **Funciones adicionales (bonus):** Implementación de estructuras como listas enlazadas con apoyo de funciones auxiliares (`lst_new`, `lst_add` etc.).

### Lista de funciones principales:
- **Funciones obligatorias:**
    - `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`
    - `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`
    - `atoi`, `isdigit`, `isalpha`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`

- **Funciones adicionales:**
    - `ft_substr`, `ft_split`, `ft_itoa`, `ft_strjoin`, `ft_strtrim`

- **Funciones Bonus:** (opcional)
    - Manipulación de listas enlazadas con punteros.

---

## 🚀 Cómo usar la biblioteca

### 1️⃣ Descargar el repositorio:
Clona este repositorio en tu máquina:
```bash
git clone https://github.com/miguelfdez03/Libft-42.git
cd libft
```

### 2️⃣ Compilar la librería:
Para compilar los archivos y generar la biblioteca estática `libft.a`, puedes usar el siguiente comando:
```bash
make
```

![Build Status](https://img.shields.io/badge/build-passing-brightgreen) *(si pasaste :) )*

### 3️⃣ Incluir en tus proyectos:
Incluye `libft.h` en tu código y usa la biblioteca compilada:
```c
#include "libft.h"

int main(void)
{
    char str[] = "42 Málaga";
    ft_putstr_fd(str, 1);
    return (0);
}
```

Compila tu programa junto con la librería al agregar `libft.a`:
```bash
gcc -Wall -Werror -Wextra main.c -L. -lft
```

---

## 🧪 Tests

Si deseas probar las funciones, puedes usar los siguientes testers recomendados para evaluar la funcionalidad de tu biblioteca:

1. [libftTester](https://github.com/Tripouille/libftTester)
2. [unit-test](https://github.com/alelievr/libft-unit-test)
3. [libft-war-machine](https://github.com/ska42/libft-war-machine)

Descarga cualquiera de ellos, sigue sus instrucciones y verifica que tu código cumple con los requisitos de la escuela **42**. 🛡️

---

El Makefile está configurado para compilar todo automáticamente y generar la librería `libft.a`.

---

## 🏫 Sobre el proyecto 42

### ¿Qué es **42 Málaga**?

**42 Málaga** es parte de la red internacional de escuelas de programación **42**, donde los estudiantes aprenden a programar desarrollando proyectos y enfrentando desafíos técnicos, sin profesores ni clases tradicionales. La metodología fomenta el aprendizaje autodirigido, la colaboración y la resiliencia.

**libft** es el primer proyecto obligatorio como base para progresar en este emocionante recorrido como programador.

---


- LinkedIn: https://www.linkedin.com/in/miguelfdezmunoz

---

Nota: Este repositorio se sube con el propósito de compartir mi progreso y ofrecer un recurso orientativo para aquellos que necesiten ayuda en su aprendizaje. Espero que se utilice como base de estudio y no solo para copiar y pegar soluciones.
<p align="center">🚀 Never stop learning!</p>
