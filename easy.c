#include <stdio.h>
#include <string.h>

int superSecurePasswordCheck(char* inputPassword){
	return strcmp(inputPassword, "ABCD-1234-EFGH-5678");
}

void triggerSuccessState(){
	printf("Valid key!");
}

void indicateInvalidKey(){
	printf("Invalid key! exiting...");
}

int main(int argc, char **argv){ //this is where the magic happens
	if(argc < 2){
		printf("Usage: easy [password]"); //verify input args
	}
	char *password = argv[1];  //load in user input
	if(!superSecurePasswordCheck(password)){  //verify password through function call
		triggerSuccessState(); //call success state
	}
	else(indicateInvalidKey()); //otherwise, quit
	return 0;
}

