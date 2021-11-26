#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
char str[100];
	
	int i,a=0,numchar;
	
	printf("Digite uma frase:\n");              
	gets (str);
	
	numchar = strlen(str);
	
	i=0;
	
	while(str[i]!='\0'){
		
		if (str [i] == ' ' ){
			
			numchar = numchar - 1;
			
		} 
		
		i = i+1;
	}
	
	
	
	while (numchar > 100 ){
		numchar=0;
		printf("\n Por favor, digite uma frase com menos de 100 caracteres\n");
		printf("\n Digite uma frase: \n");
		gets (str);			
		numchar = strlen(str);
		i=0;
		while(str[i]!='\0'){
			if (str [i] == ' ' ){
				numchar = numchar - 1;
				} 
				
			i = i+1;
			
			a = 0;
		
		}
		
	}
	
	i=0;
	
	while(str[i]!='\0'){
		
		if (str [i] == 'a' || str [i] == 'A' || str [i] == 'd' ||
		str [i] == 'D' || str [i] == 'o' || str [i] == 'O' ||
		str [i] == 'p' || str [i] == 'P' || str [i] == 'q' ||
		str [i] == 'Q' || str [i] == 'b' || str [i] == 'R' ){
			
			a = a+1;
			
		} else if(str [i] == 'g' || str [i] == 'B' ){
			
			a = a+2;
			
		} else {
			
			a = a;
			
		}
		
		i = i+1;
	}
	
	printf("Quantidade de buracos contidos na frase: %d \n \n", a);
	
	system("pause");
	
	
}
