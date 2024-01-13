// main.c


#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main() {
    int option;

    printf("Options:\n");
    printf("  1: Perform to find area of rectangle\n");
    printf("  2: Perform to find perimeter of circle\n");
    printf("  3: Perform to find perimeter of square\n");
    printf("  4: Perform to find area of square\n");
    printf("  5: Perform to find average  of numbers\n");
    printf("  6: Perform to find sum of markss\n");
    printf("  7: Perform to find resistance value\n");
    printf("  8: Perform to find power\n");
    printf("  9: Perform to find sum of current\n");
    printf("  10: Perform to find Value of x\n");
    printf("  11: Perform to find the largest\n");
    printf("  12: Perform to find the number is positive or negative\n");
    printf("  13: Perform to find the number is largest\n");
    printf("  14: Perform to find the grade\n");
    printf("  15: Perform to find Kirchhoff's current law is satisfied or not\n");
    printf("  16: Perform to find eligible for driving license or not\n");
    printf("  17: Perform to find age to greatings\n");
    printf("  18: Perform to find the sum of two numbers\n");
    printf("  19: Perform to find the number is even or odd\n");
    printf("  20: Perform to find the 20 natural numbers\n");
    printf("  21: Perform to find the 10 even numbers\n");
    printf("  22: Perform to find the 30 odd numbers\n");
    printf("  23: Perform to find the even numbers in a given range\n");
    printf("  24: Perform to find the even numbers in reverse\n");
    printf("  25: Perform to find n natural numbers in reverse\n");
    printf("  26: Perform to find n even numbers in reverse\n");
    printf("  27: Perform to print the given Series 1:\n");
    printf("  28: Perform to print the given Series 2:\n");
    printf("  29: Perform to print the Multiplication table of 3:\n");
    printf("  30: Perform to print the Multiplication table of n:\n");
    printf("  31: Perform to print the given Pattern 1:\n");
    printf("  32: Perform to print the given Pattern 2:\n");
    printf("  33: Perform to print the given Pattern 3:\n");
    printf("  34: Perform to print the given Pattern 4:\n");
    printf("  35: Perform to print the given Pattern 5:\n");
    printf("  36: Perform to print the given Pattern 6:\n");
    printf("  37: Perform to find the Factorial of given number:\n");
    printf("  38: Perform to find the Factor of given number:\n");
    printf("  39: Perform to find the prime of given number:\n");
    printf("  40: Perform to find the reverse of given number:\n");
    printf("  41: Perform to find the given number is Fibonacci Series or not:\n");
    printf("  42: Perform to find the GCD of given number:\n");
    printf("  43: Perform to Print the total cost of a bill:\n");
    printf("  44: Perform to find the given number is palindrome or not :\n");
    printf("  45: Perform to find the BCD of given number:\n");
    printf("  46: Perform Decimal to Hexadecimal Conversion\n");
    printf("  47: Perform Hexadecimal to Decimal Conversion\n");
    printf("  48: Perform Hexadecimal to print the Sorted array in ascending order\n");
    printf("  49: Perform Hexadecimal to print the modified array and position\n");
    printf("  50: Perform Decimal to Print prime numbers up to n\n");
    
    printf("Enter your option: ");
    scanf("%d", &option);

    switch (option) {
        
        case 1:
            area();
            break;
            
             case 2:
            perimeter();
            break;
            
             case 3:
            perimeter1();
            break;
            
            case 4:
            area1();
            break;
            
             case 5:
            Avg();
            break;
            
            case 6:
            sum();
            break;
            
            case 7:
            resistance();
            break;
            
            case 8:
            power();
            break;
            
            case 9:
             sum1();
            break;
            
            case 10:
             x();
            break;
            
            case 11:
             large();
            break;
            
            case 12:
             pos_neg();
            break;
            
            case 13:
            largest();
            break;
            
            case 14:
            Avg1();
            break;
            
            case 15:
            current();
            break;
            
            case 16:
            age();
            break;
            
            case 17:
            age1();
            break;
            
            case 18:
            sum2();
            break;
            
            case 19:
            even_odd();
            break;
            
            case 20:
            natural();
            break;
            
            case 21:
            tenEven();
            break;
            
            case 22:
            thirtyOdd();
            break;
            
            case 23:
            evenRange();
            break;
            
            case 24:
            evenReverse();
            break;
            
            case 25:
            nuturalReverse();
            break;
            
            case 26:
            nEven_reverse();
            break;
            
            case 27:
            series1();
            break;
            
            case 28:
            series2();
            break;
            
            case 29:
            mulOf_3();
            break;
            
            case 30:
            mulOf_n();
            break;
            
            case 31:
            pattern1();
            break;
            
            case 32:
            pattern2();
            break;
            
            case 33:
            pattern3();
            break;
            
            case 34:
            pattern4();
            break;
            
            case 35:
            pattern5();
            break;
            
            case 36:
            pattern6();
            break;
            
            case 37:
            factorial();
            break;
            
            case 38:
            factor();
            break;
            
            case 39:
            prime();
            break;
            
            case 40:
            reverse();
            break;
            
            case 41:
            fibonacci();
            break;
            
            case 42:
            gcd();
            break;
            
            case 43:
            shoppingBill();
            break;
            
            case 44:
            palindrome();
            break;
            
            case 45:
            bcd();
            break;
            
            case 46:
            decimalToHex();
            break; 
            
            case 47:
            hexToDecimal();
            break;
            
            case 48:
            ascending();
            break; 
            
            case 49:
            numTo_zero();
            break; 
            
            case 50:
            nPrime();
            break; 
            
            default:
            printf("Invalid option. Please choose 1 to 50\n");
            return 1;
    }

    return 0;
}

