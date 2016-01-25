//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
//For this assignment you will be required to write a C++ program which
//accepts a text file containing information about a series of hits to various
//websites. Your program will then store this information and will provide
//the user with a menu that will look up information about a website of his
//or her choosing.
// HOMEWORK 4 - due Tuesday, April 14th no later than 5:00PM

#ifndef HIT_H
#define HIT_H

#define LINK_LENGHT 50
#define IP_LENGHT 180

// Class Hit
class Hit {

	private:
		char IP[IP_LENGHT];
		char link[LINK_LENGHT];
		int day;
		int month;
		int year;
		static int counter;

	public:
		Hit();

		void setIp(char []);
		void setLink(char []);
		void setMonth(int);
		void setDay(int);
		void setYear(int);

        char* getIp();
        char* getLink();
        int getMonth();
        int getDay();
        int getYear();
        int getCounter();

        ~Hit();

};


#endif
