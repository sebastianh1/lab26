#include "header.h"

char GetSeason(Seasons today, char inputSeason)
{

	bool invalid;

	do
	{
		cout << "********************" << endl;
		cout << "   FRUIT SELECTOR   " << endl;
		cout << "********************" << endl;
		cout << "(W) Winter" << endl;
		cout << "(S) Spring" << endl;
		cout << "(U) Summer" << endl;
		cout << "(W) Winter" << endl;
		cout << "(X) Exit" 	 << endl;

		//inputSeason = toupper(inputSeason);
		cout << "What season is it? ";
		cin.get(inputSeason);
		cin.ignore(1000, '\n');

		invalid = (!(inputSeason == 'S' || inputSeason == 'U'
				|| inputSeason == 'F' || inputSeason == 'W'
						|| inputSeason == 'X'));

		if(invalid)
		{
			cout << "*** INVALID INPUT - Please input a W, S, U, F or X ***";
			cout << endl;
		}


	}while (invalid);

	while (toupper(inputSeason != 'X'))
	{
		switch(toupper(inputSeason))
		{
			case 'S': today = SPRING;
					  break;
			case 'U': today = SUMMER;
					  break;
			case 'F': today = FALL;
					  break;
			case 'W': today = WINTER;
					  break;

		}

		cout << "********************" << endl;
		cout << "   FRUIT SELECTOR   " << endl;
		cout << "********************" << endl;
		cout << "(W) Winter" << endl;
		cout << "(S) Spring" << endl;
		cout << "(U) Summer" << endl;
		cout << "(W) Winter" << endl;
		cout << "(X) Exit" 	 << endl;

		cout << "What season is it? ";
				cin.get(inputSeason);
				cin.ignore(1000, '\n');

	}

	return inputSeason;
}


