#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	//printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;
	printf("%f", getAverage(row));
	return 1;

	double getAverage(int myArray[]) {
		double sum = 0;
		int index, count = 0;
		for (index = 0; index < 500; index++) {
			sum += myArray[index];
			count++;
		}
		return (sum / count);
	}

}


void printGroupMemberNames() {
	printf("Emsamboramy Vong\nLeng Saing\nPiseth Chhom\nRomanea Nin\nSovuthea Yi\n");

}

