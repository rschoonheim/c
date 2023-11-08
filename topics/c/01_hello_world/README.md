# Hello World

## Imperative Programming

Bij `Imperative Programming` wordt er een reeks van gedetailleerde
instructies gegeven aan de computer waarmee een bepaald doel wordt
bereikt.

Instructries worden geschreven in een formele taal (programmeertaal) die door
een compiler of interpreter wordt vertaald naar een reeks van instructies die
de computer kan begrijpen.

## Hello World Code

### Pre-processing directive

Met een pre-processing directive kan je instructies geven aan de compiler
om bepaalde acties uit te voeren voordat het programma wordt gecompileerd.

### Include directive
Met de `#include` directive kan een bestand worden toegevoegd aan een
programma. De inhoud van het bestand wordt letterlijk toegevoegd aan het
programma op de plek waar de `#include` directive staat.

Stel je hebt de volgende code in een bestand `hello.c`:

```c
void printHello() {
    printf("Hello, World!\n");
}
```

En je voegt het bestand toe aan een ander bestand `main.c`:

```c
#include "hello.c"

int main() {
    printHello();
    return 0;
}
```

De compiler zal de code van `hello.c` letterlijk toevoegen aan `main.c` 
en het programma zal er als volgt uitzien:

```c
void printHello() {
    printf("Hello, World!\n");
}

int main() {
    printHello();
    return 0;
}
```
### Andere pre-processing directives
Naast `#include` bestaan er nog andere pre-processing directives zoals:
* #define
* #undef
* #if
* #ifdef
* #ifndef
* #error
* \_\_FILE\_\_


