#include <stdio.h>

#define SIZE 3

int A[SIZE + 1];
int B[SIZE + 1];
int C[SIZE + 1];

void initialization();
int Len(int arr[]);
void hanoi(int size, int from[], int temp[], int to[]);
void printgraph();

int main() {

	initialization();
	printgraph();
	hanoi(SIZE, A, B, C);

	return 0;
}

void initialization() {
	int i;

	for (i = 0; i <= SIZE; i++) {
		A[i] = SIZE - i;
		B[i] = 0;
		C[i] = 0;
	}
}

int Len(int arr[]) {
	
}

void hanoi(int size, int from[], int temp[], int to[]) {

}

void printgraph() {
	
}
