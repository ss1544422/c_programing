CC = gcc
CFLAGS = -Wall -Wextra
TARGET = all_programs
SRCS = main.c 01_Area_Rectangle.c 02_Perimeter_circle.c 03_Perimeter_square.c 04_Area_sqarea.c 05_Average.c 06_Subject_sum.c 07_Resistance.c 08_Power.c 09_SumOf_Current.c 10_ValueOf_X.c 11_Largest_number.c 12_Positive_Negetive.c 13_LargestOf_3.c 14_Grade.c 15_Kiechhoffs_law.c 16_Driving_license.c 17_Greatings.c 18_Sum.c 19_Even_Odd.c 20_20_Natural_number.c 21_First10_even.c 22_First30_Odd.c 23_EvenIn_Range.c 24_EvenIn_Reverse.c 25_N_natural_NumIn_Reverse.c 26_N_EvenIn_Reverse.c 27_Series1.c 28_Series2.c 29_MultiplicationOf_Table3.c 30_N_Multiplication_Table.c 31_Pattern1.c 32_Pattern2.c 33_Pattern3.c 34_Pattern4.c 35_Pattern5.c 36_Pattern6.c 37_Factorial.c 38_Factor.c 39_Prime_number.c 40_Reverse_number.c 41_Fibanocci_Series.c 42_GCD.c 43_Billing.c 44_Palindrome.c 45_BCD.c 46_Decimal_HexDecimal.c 47_HexaDecimal_Decimal.c 48_Ascending_order.c 49_NumTo_Zero.c 50_nPrime_num.c
OBJS = $(SRCS:.c=.o) 

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

