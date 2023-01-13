// getFunc - Funktionen zur Überprüfung von Benutzereingaben für verschiedene Datentypen
// Autor: Kolja Eger
// Version: 1.0
// Datum: 30.5.2022

#ifndef GET_FUNCTIONS
#define GET_FUNCTIONS

// sichere Benutzerabfrage für short
// [out] user input
// [in] question text for user input
short getShort(char text[]);		

// sichere Benutzerabfrage für short mit Min- und Max-Werten
// [out] user input
// [in] question text for user input
// [in] min & max values in which user input should be (incl min & max)
short getShortMinMax(char[], short, short);

// sichere Benutzerabfrage für unsigned short
// [out] user input
// [in] question text for user input
unsigned short getUnsignedShort(char text[]);								

#endif	// GET_FUNCTIONS
