#include <stdio.h>
#include <stdlib.h>

// Déclaration des variables globales
int choix = 0;
double valeur = 0;
double resultat = 0;

// Fonctions de conversion
double calculCelsiusKelvin(double valeur, double resultat)
{
    resultat = valeur + 273.15;
    return resultat;
}

double calculKelvinCelsius(double valeur, double resultat)
{
    resultat = valeur - 273.15;
    return resultat;
}

double calculCelsiusFahrenheit(double valeur, double resultat)
{
    resultat = (valeur * 9 / 5) + 32;
    return resultat;
}

double calculFahrenheitCelsius(double valeur, double resultat)
{
    resultat = (valeur - 32) * 5 / 9;
    return resultat;
}

double calculKelvinFahrenheit(double valeur, double resultat)
{
    resultat = (valeur - 273.15) * 9 / 5 + 32;
    return resultat;
}

double calculFahrenheitKelvin(double valeur, double resultat)
{
    resultat = (valeur + 459.67) * 5 / 9;
    return resultat;
}

int main(int argc, char* argv)
{
    // Boucle de sélection du type de conversion
    while (choix < 1 || choix > 6)
    {
        printf("Faite votre choix\n");
        printf("1. Conversion degrés Celsius vers Kelvin\n");
        printf("2. Conversion degrés Kelvin vers Celsius\n");
        printf("3. Conversion degrés Celsius vers Fahrenheit\n");
        printf("4. Conversion degrés Fahrenheit vers Celsius\n");
        printf("5. Conversion degrés Kelvin vers Fahrenheit\n");
        printf("6. Conversion degrés Fahrenheit vers Kelvin\n");
        scanf("%d", &choix);
    
        switch (choix)
        {
            // Conversion degrés Celsius vers Kelvin
            case 1:
                printf("Entrez votre valeur en degrés Celsius\n");
                scanf("%lf", &valeur);
                resultat = calculCelsiusKelvin(valeur, resultat);
                printf("Votre valeur en Kelvin est de %lfK\n", resultat);
                break;
                
            // Conversion degrés Kelvin vers Celsius
            case 2:
                printf("Entrez votre valeur en Kelvin\n");
                scanf("%lf", &valeur);
                resultat = calculKelvinCelsius(valeur, resultat);
                printf("Votre valeur en degrés Celsius est de %lf°C\n", resultat);
                break;
                
            // Conversion degrés Celsius vers Fahrenheit
            case 3:
                printf("Entrez votre valeur en degrés Celsius\n");
                scanf("%lf", &valeur);
                resultat = calculCelsiusFahrenheit(valeur, resultat);
                printf("Votre valeur en degrés Fahrenheit est de %lf°F\n", resultat);
                break;
                
            // Conversion degrés Fahrenheit vers Celsius
            case 4:
                printf("Entrez votre valeur en degrés Fahrenheit\n");
                scanf("%lf", &valeur);
                resultat = calculFahrenheitCelsius(valeur, resultat);
                printf("Votre valeur en degrès Celsius est de %lf°C\n", resultat);
                break;
                
            // Conversion degrés Kelvin vers Fahrenheit
            case 5:
                printf("Entrez votre valeur en Kelvin\n");
                scanf("%lf", &valeur);
                resultat = calculKelvinFahrenheit(valeur, resultat);
                printf("Votre valeur en degrés Fahrenheit est de %lf°F\n", resultat);
                break;
                
            // Conversion degrés Fahrenheit vers Kelvin
            case 6:
                printf("Entrez votre valeur en Kelvin\n");
                scanf("%lf", &valeur);
                resultat = calculFahrenheitKelvin(valeur, resultat);
                printf("Votre valeur en degrés Fahrenheit est de %lf°F\n", resultat);
                break;
        }
    }    

    return 0;
}
