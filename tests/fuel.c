#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int time_spent, average_speed;
     double distance, fuel_needed;
     const double fuel = 12.0;
     
     scanf("%d %d", &time_spent, &average_speed);
     
     distance = time_spent * average_speed;
     
     fuel_needed = distance / fuel;
     
     printf("%.3lf\n",fuel_needed);
 
    return 0;
}
