/********************************/
/* Benedikt Abel, Justus Faust  */
/* Gruppe: Di08                 */
/* Uebungsblatt: 3, Aufgabe B-6 */
/* Thema: Steigung und Abstand  */
/* Version: v1.0.0              */
/* Datum: 09052016              */
/* Status: werks (lauffaehig)   */
/********************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // Einlesen von Punkt 1: (x1, y1)
    float x1 = 0, y1 = 0;
    printf("Koordinaten des ersten Punktes eingeben:");
    scanf("%f%f", &x1, &y1);

    // Einlesen von Punkt 2: (x2, y2)
    float x2 = 0, y2 = 0;
    printf("Koordinaten des zweiten Punktes eingeben:");
    scanf("%f%f", &x2, &y2);

    // Ausgabe der Punkte
    printf("Eingelesene Punkte:\nPunkt 1: (%.2f, %.2f)\nPunkt 2:(%.2f, %.2f)\n", x1, y1, x2, y2);

    // Testen auf Gleichheit der Punkte
    if (x1 == x2 && y2 == y1)
    {
	printf("Die angegeben Punkte stimmen überein. Es lässt sich keine Gerade berechnen. Der Abstand beträgt 0.\n");
	return 0;
    }

    // Berechnen und ausgeben des Abstandes
    float abstand = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("Der Abstand der beiden Punkte beträgt: %.2f\n", abstand);

    // Wenn x1 == x2, so ist die Steigung "unendlich"
    if (x1 == x2)
    {
	printf("Die Steigung der Geraden ist unendlich (Gerade is parallel zur Y-Achse)\n");
	return 0;
    }

    // Berechnen und ausgeben der Geradensteigung
    float steigung = (y2-y1)/(x2-x1);
    printf("Die Steigung einer Geraden durch diese beiden Punkte beträgt: %.2f\n", steigung);
    return 0;
}
