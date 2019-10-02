#include <stdio.h>

int stringCmpIgnore(char *string1,char *string2); 
void setZeroes(int **a);
// void set(char *requiredCell);
int get(char *enteringCell, int **a);
void print(int **a);
// void export(int **a);
// void import(int **a);
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
	setZeroes(a);
	
	a[5][4] = 5;
	while(1){
		char *command = (char *)malloc(sizeof(char) * 30);
		int f = 0;
		printf("Enter the command: ");
		scanf(" %[^\n]s",command);
		printf("%s %d\n", command, !stringCmpIgnore(command, "get"));

		if(!stringCmpIgnore(command, "get")){
			f = 1;
			get(command + 4, a);
		}
		else if(!stringCmpIgnore(command, "set")){
			f = 1;
			set(command + 4, a);
		}
		else if(!stringCmpIgnore(command, "print")){
			f = 1;
			print(a);
		}
		// else if(!stringCmpIgnore(command, "import")){
		// 	f = 1;
		// 	import(a);
		// }
		// else if(!stringCmpIgnore(command, "export")){
		// 	f = 1;
		// 	export(a);
		// }
		
		if(f == 0){
			printf("Please enter a valid input.\n");
		}
		free(command);
	}

	print(a);
}

int stringCmpIgnore (char *string1,char *string2){
    int i = 0, difference = 0;
    for(i = 0; string1[i] != ' '; i++){
        if( toupper(string1[i]) != toupper(string2[i]) )
            return 1;           
    }
    return 0;
}

void setZeroes(int **a){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			a[i][j] = 0;
		}
	}
}

// void set(char *requiredCell, int **board){
// 	int x, y;
// 	if(requiredCell[0] > 96){
// 		x = requiredCell[0] - 'a';
// 	}
// 	else{
// 		x = requiredCell[0] - 'A';	
// 	}
// 	y = (requiredCell[1] - '0');
// 	if(requiredCell[2] != '=' || y > 9 || x > 9){
// 		printf("Please enter correct input");
// 	} 
// 	else{

// 	}
	
// }

int get(char *requiredCell, int **a){
	int x, y;
	if(requiredCell[0] > 96){
		x = requiredCell[0] - 'a';
	}
	else{
		x = requiredCell[0] - 'A';	
	}
	y = (requiredCell[1] - '0');
	if(y > 9 || x > 9 || requiredCell[2] != '\0'){
		printf("Please enter correct input.\n");
		return -1;
	} 
	else{
		printf("%d\n", a[y][x]);
		return a[y][x]; 
	}

}

void print(int **a){
	printf("The data in the excel sheet is \n");
	printf("CELL\t");
	for(int i = 0; i < 10; i++){
		printf("%c\t", 'A' + i);
	}
	printf("\n");
	for(int i = 0; i < 10; i++){
		printf("%d\t", i);
		for(int j = 0; j < 10; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

// void export(int **a){

// }

// void import(int **a){

// }



