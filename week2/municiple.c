 
#include <stdio.h> 
#include <math.h>
int main() { 
double revenue; 
double expenses; 
double balance;

printf("Enter total revenue: "); 
scanf("%lf", &revenue);

printf("Enter total expenses: "); 
scanf("%lf", &expenses); 

balance = revenue - expenses; 
printf("Budget balance: %.2f\n", balance);

if(balance > 0){
    printf("Surplus:%.2f\n", balance);
}    else if(balance < 0){
           printf("Deficit: %.2f\n", balance);

}
return 0; 
} 