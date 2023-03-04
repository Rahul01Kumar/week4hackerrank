int main() { int num, digit, sum = 0; scanf("%d", &num);

// Extract each digit and add it to the sum
digit = num % 10; // Extract the last digit
sum += digit;
num /= 10; // Remove the last digit

digit = num % 10; // Extract the next digit
sum += digit;
num /= 10; // Remove the next digit

digit = num % 10; // Extract the next digit
sum += digit;
num /= 10; // Remove the next digit

digit = num % 10; // Extract the next digit
sum += digit;
num /= 10; // Remove the next digit

digit = num % 10; // Extract the first digit
sum += digit;

printf("%d", sum); // Print the sum of all digits
return 0;
}
