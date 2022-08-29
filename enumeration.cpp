#include<stdio.h>
//mike@flashmike.com

enum EnumBits {
	one = 1,
	two = 2,
	three = 3,
	four = 4,
	five = 5
};

int main(){
	printf("Math Operations\n");
	printf("1. ADDITION: one + two = %d\n", (one + two)); //addition
	printf("2. SUBTRACTION: four - three = %d\n", (four - three)); //subtraction
	printf("3. MULTIPLICATION: five * three = %d\n", (five * three)); //multiplication
	printf("4. DIVISION: four / two = %d\n", (four / two)); //division
	printf("5. five * four / two - four + three + one = %d\n\n\n", (five * four / two - four + three + one)); //multiple operations
	printf("Bitwise Operations\n");
	printf("6. AND: five & four = %d\n", (five & four)); //AND
	printf("7. OR: one | two = %d\n", (one | two)); //OR
	printf("8. XOR: one ^ three = %d\n", (one ^ three)); //XOR
	printf("9. LEFT SHIFT: two << one = %d\n", (two << one)); //LSHIFT
	printf("10. RIGHT SHIFT: five >> one = %d\n", (five >> one)); //RSHIFT
	
	return 0;
}
