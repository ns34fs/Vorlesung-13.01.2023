// getFunc - Funktionen zur Überprüfung von Benutzereingaben für verschiedene Datentypen
// Autor: Kolja Eger
// Version: 1.0
// Datum: 30.5.2022

#include "getFunc.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// sichere Benutzerabfrage für short
short getShort(			// [out] user input
	char text[])		// [in] question text for user input
{
	short value;		// user input
	int finished = 0;		// flag for correct user input
	char ch;			// character behind number
	int retVal;			// return value of scanf

	do {
		finished = 0;	// set flag incorrect
		// get user input
		printf("%s: ", text);
		ch = '\0';
		retVal = scanf("%hd%c", &value, &ch);

		// check for valid user input
		if (retVal != 2) printf("Das war keine korrekte Zahl!\n");
		else if (ch != '\n') printf("Unerwartete Zeichen hinter der Zahl!\n");
		else finished = 1;

		// clear input stream
		while (ch != '\n') retVal=scanf("%c", &ch);

		// repeat if not finished
	} while (!finished); 

	// return user input
	return value;
}


// sichere Benutzerabfrage für short mit Min- und Max-Werten
short getShortMinMax(			// [out] user input
	char text[],		// [in] question text for user input
	short Min, short Max)	// [in] min & max values in which user input should be (incl min & max)
{
	short value;		// user input
	int finished = 0;		// flag for correct user input
	char ch;			// character behind number
	int retVal;			// return value of scanf

	do {
		finished = 0;	// set flag incorrect
		// get user input
		printf("%s: ", text);
		ch = '\0';
		retVal = scanf("%hd%c", &value, &ch);

		// check for valid user input
		if (retVal != 2) printf("Das war keine korrekte Zahl!\n");
		else if (ch != '\n') printf("Unerwartete Zeichen hinter der Zahl!\n");
		// check if in [Min, Max]
		else if (!(value >= Min && value <= Max)) printf("Zahl nicht zwischen %d und %d\n", Min, Max);
		else finished = 1;

				// clear input stream
		while (ch != '\n') retVal=scanf("%c", &ch);

		// repeat if not finished
	} while (!finished); 

	// return user input
	return value;
}

// sichere Benutzerabfrage für unsigned short 
unsigned short getUnsignedShort(			// [out] user input
	char text[])							// [in] question text for user input
{
	unsigned short value;	// user input
	int finished = 0;		// flag for correct user input
	char ch;				// character behind number
	int retVal;				// return value of scanf

	do {
		finished = 0;	// set flag incorrect
		// get user input
		printf("%s: ", text);
		ch = '\0';
		retVal = scanf("%hu%c", &value, &ch);

		// check for valid user input
		if (retVal != 2) printf("Das war keine korrekte Zahl!\n");
		else if (ch != '\n') printf("Unerwartete Zeichen hinter der Zahl!\n");
		else finished = 1;

		// clear input stream
		while (ch != '\n') retVal=scanf("%c", &ch);

		// repeat if not finished
	} while (!finished);

	// return user input
	return value;
}
