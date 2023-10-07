
#include <stdio.h> 
#include <string.h> 

// Function to find the maximum 
// time possible by replacing 
// each '_' with any digit 
char* maximumTime(char s[]) 
{ 
	// If the first character is '_' 
	if (s[0] == '_') { 

		// If s[1] is '_' or 
		// s[1] is less than 4 
		if ((s[1] == '_') || (s[1] >= '0' && s[1] < '4')) { 

			// Update s[0] as 2 
			s[0] = '2'; 
		} 
		else { // Otherwise, update s[0] = 1 
			s[0] = '1'; 
		} 
	} 

	// If s[1] is equal to '_' 
	if (s[1] == '_') { 

		// If s[0] is equal to '2' 
		if (s[0] == '2') { 
			s[1] = '3'; 
		} 
	// otherwise 
		else { 
			s[1] = '9'; 
		} 
	} 

	// If S[3] is equal to '_' 

	if (s[3] == '_') { 

		s[3] = '5'; 
	} 

	// If s[4] is equal to '_' 

	if (s[4] == '_') { 

		s[4] = '9'; 
	} 

	return s; // Return the modified string 
} 
int main() 
{ 
	char S[] = "0_:4_"; 
	printf("%s", maximumTime(S)); 
	return 0; 
} 

