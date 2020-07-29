#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	char uncryptedText[]="text"; // uncrypted text
	int number; // textlenght
	number = strlen(uncryptedText); //textlenght
	int key=2; // key , 2 is standart key. , if you want to decrypt a text, write (-)2 .
	char alphabet[100]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"; // from 0 up to 25, alphabet
    char encrpytedText[number];
	int i=0;
	int c=number;
	int a=0;
	int b=0;
	for(c; c>0; c--) // that's purpose is to cycle for every character
	{
	for(i; i<1; i)
	{ 
	if(uncryptedText[a] == alphabet[b]) { 
	encrpytedText[a]= alphabet[b+key]; 
 	i=1;	
	a++;
 	} 	
	b++;}
	i=0;
	b=0;
}
  printf(encrpytedText); //print of encrypted text 
	return(0);
}
	
