#include <stdio.h>

int main(){
    int income;
    float tax = 0; // Changed to float to handle decimals accurately
    
    printf("Enter income: \n");
    scanf("%d", &income);

    if(income <= 250000){ // Added '=' to catch exactly 250,000
        tax = 0;
    }
    else if(income > 250000 && income <= 500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income > 500000 && income <= 1000000){
        // 12500 is the absolute max tax from the 5% bracket
        tax = 12500 + 0.2 * (income - 500000);
    }
    else{
        // 112500 is the absolute max tax from BOTH lower brackets (12500 + 100000)
        tax = 112500 + 0.3 * (income - 1000000);
    }
    
    // Using %.2f to print the tax nicely with 2 decimal places
    printf("The total tax u need to pay is %.2f\n", tax);
    
    return 0;
}
