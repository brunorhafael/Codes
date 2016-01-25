//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
//For this assignment you will be required to write a C++ program which
//accepts a text file containing information about a series of hits to various
//websites. Your program will then store this information and will provide
//the user with a menu that will look up information about a website of his
//or her choosing.
// HOMEWORK 4 - due Tuesday, April 14th no later than 5:00PM
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include "Hit.cpp"
#include "functions.c"
#include <vector>

// Main Function
int main()
{


    char file_name[20];
    int counterHit;
    int counterUnique;
    int option;
    char IP[IP_LENGHT];
    char link[LINK_LENGHT];
    char date[10];        // Date typed by the user
    int day;
    int month;
    int year;
    Hit hits[200];
    int i;
    int j;
    int aux = 0;
    char linkName[LINK_LENGHT];
    char startDate[11];  //Date typed by the user used in the range
    char finishDate[11]; //Date typed by the user used in the range
    vector <string> links;


    cout << "Enter the name of the file to load:" << endl;
    cin >> file_name;
    // Open File hits.txt
    FILE *input;
    input = fopen(file_name,"r");

    if(input == NULL)
    {
        //Error Message
        printf("Error Reading File");
        return 1;
    }
    cout << "Loading  hits.txt \n\n\n" << endl;

    while(fscanf(input,"%s %s %s\n",IP,link,date) != EOF)
    {
        // Split date in a valid format and separate into integers
        sscanf(date, "%2d/%2d/%4d", &month, &day, &year);

        if (strlen(date)!=10)
        {
            cout << "Found a record with an invalid date format (not mm/dd/yyyy)...\n" << endl;
            cout << "ignoring entry" << endl;
        }
        else if (! checkDate(month, day, year))
        {
            cout << "Found a record with an invalid date ... ignoring entry \n" << endl;
        }
        else
        {
            // Setting values to the objects
            hits[aux].setIp(IP);
            hits[aux].setLink(link);
            hits[aux].setDay(day);
            hits[aux].setMonth(month);
            hits[aux].setYear(year);
            aux++;
        }
    }

    // Main Menu
    cout << "Please select a menu option: \n";
    cout << "1)Link Information in date range \n";
    cout << "2)Information about all links \n";
    cout << "3)Quit the program \n";
    cout << "Option (1,2,3): ";
    cin >> option;
    cout <<"\n";
    cout <<"\n";

    switch (option)
    {

    case 1:
        cout << "Enter a link name: " <<endl;
        cin >> linkName;
        cout <<"\n";

        cout << "Enter a start date: " <<endl;
        cin >> startDate;
        cout <<"\n";

        cout << "Enter a finish date:" <<endl;
        cin >> finishDate;
        cout <<"\n";


        checkDateRange(hits, linkName, startDate, finishDate, counterHit, counterUnique);

        cout <<"Link:  "<< linkName <<endl;
        cout <<"Total Hits: "<< counterHit <<endl;
        cout <<"Unique:     "<<counterUnique<<endl;
        cout <<"Returning:  "<<counterHit - counterUnique<<endl;
        break;

    case 2:

        cout << "     Link Name            Unique Visits  Return Visits  Total Visits" << endl;
        cout << "------------------------  -------------  -------------  ------------" << endl;

        for(int i = 0; i < hits->getCounter() ; i++ ){

            if(! vectorHas(hits[i].getLink(), links)){
                links.push_back(hits[i].getLink());
                checkDateRange(hits, hits[i].getLink(), "01/01/1000", "01/12/2100", counterHit, counterUnique);
                printf("%-24s         %-8d       %-9d    %d \n",hits[i].getLink(), counterUnique, counterHit - counterUnique, counterHit  );
            }
        }
        break;
    case 3:
        cout <<"\n";
        cout << "Program terminating normally...";
        cout <<"\n";
        return 0;

    default:
        cout << "Invalid Entry" << endl;
        return 1;
    }
}
