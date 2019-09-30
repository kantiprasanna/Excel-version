#include <stdio.h>

void setZeroes(int **a);
// void set(char *requiredCell);
// int get(char *enteringCell);
void print(int **a);
// void export(char *fileName);
// void import(char *fileName);
void execute();

int main(int argc, char const *argv[]){
	/* code */
	execute();

	return 0;
}

void execute(){
	int **a = (int **)malloc(sizeof(int *) * 10);
	for(int i = 0; i < 10; i++){
		a[i] = (int *)malloc(sizeof(int) * 10);
	}
	// int choice;
	// char *cellNumber = (char *)malloc(sizeof(char) * 10);
	// while(1){
	// 	printf("The options available are:\n");
	// 	printf("1.Add the value in the sheet.\n");
	// 	printf("2.Remove the value in the sheet.\n");
	// 	printf("3.Print the sheet.\n");
	// 	printf("4.Import the sheet.\n");
	// 	printf("5.Export the sheet.\n");
	// 	printf("Enter your choice: ");
	// 	scanf("%d", &choice);
	// 	switch(choice){
	// 		case 1: printf("Enter the cell in which you want to add the value: ");
	// 				scanf("%s", cellNumber);
	// 				set(cellNumber);
	// 	}
	// }
	setZeroes(a);
	print(a);
}

void setZeroes(int **a){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			a[i][j] = 0;
		}
	}
}

// void set(char *requiredCell){

// }

// int get(char *enteringCell){

// }

void print(int **a){
	printf("The data in the excel sheet is \n");
	printf("CELL\t");
	for(int i = 0; i < 10; i++){
		printf("%c\t", 'A' + i);
	}
	printf("\n");
	for(int i = 0; i < 10; i++){
		printf("%d\t", i + 1);
		for(int j = 0; j < 10; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

// void export(char *fileName){

// }

// void import(char *fileName){

// }