/*******************************************************************************
* AUTHOR	 : Maryam AL-Qadhi & Sebastian Hooshmand
* LAB #25b	 : Array Train - Set #2
* CLASS	 	 : CS1A
* SECTION 	 : MW: 8am
* DUE DATE 	 : 4/25/18
*******************************************************************************/

#include "header.h"

/******************************************************************************
 * Array Train - Set #2
 * --------------------------------------------------------------------------
 * This program will:
 * 1 - choose an initializing function:
 * 		a - Initialize the int array to the value -1.
 * 		b - Initialize the string array to str.clear().
 * 		c - Initialize both arrays in 1 function.
 * 2 - Read from an input file into the array.
 * 3 - Read from a user into the array.
 * 4 - Output array contents in table format to the console.
 * 5 - Output array contents in table format to a file.
 *
 * --------------------------------------------------------------------------
 * INPUTS:
 * 		names and ages from an input file.
 *
 * OUTPUTS:
 *		names and ages into an output file.
 ******************************************************************************/

int main()
{
	/***************************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------------
	* AR_SIZE    		: array size for names and ages
	***************************************************************************/


	// variable declarations

	char seasons;
	char inputSeason;

	// OUTPUT - Print header
	PrintHeader("Array Train - Set #2", 25, 'L');


	/***************************************************************************
	 * INPUT - names and ages from the input file.
	 **************************************************************************/


	/***************************************************************************
	* PROCESSING & OUTPUT - the user's choice of what to calculate, and average,
	* instanceIndex, instances, search, greatestIndex, smallestIndex, sum.
	**************************************************************************/
	Seasons today;
	seasons = GetSeason(today, inputSeason);





	return 0;
}


