#beskrivelse af koden

Programmet undersøger, hvor mange felter en ridder kan nå at besøge på et skakbræt ved hjælp af en simpel, såkaldt *greedy*-algoritme.
For hver startposition på brættet forsøger ridderen at bevæge sig i den første mulige retning, for hver gang den er på et nyt feldt, blandt de otte standard spring, indtil der ikke længere er nogen gyldige træk.
Når ridderen ikke kan komme videre, gemmes antallet af felter, den har besøgt.

Til sidst udskrives resultaterne i en tabel, hvor hvert tal viser, hvor mange felter ridderen kunne besøge fra den pågældende startposition.
Brættets størrelse kan let ændres i koden, ved at ændre på "size_t board_size = 8;" i main.c.

Programmet er opdelt i tre filer:
`main.c` står for at starte programmet og vise resultaterne,
`knights_tour.c` indeholder selve beregningen,
og `knights_tour.h` indeholder de funktioner og konstanter, som bruges af de andre filer.
