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
#include <vector>


// Function to check if the date is correct
bool checkDate(int month, int day, int year)
{
    int daysPerMonth[12] =
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( month >= 1 && month <=12)
    {
        if(day>=1 && day <= daysPerMonth[month - 1])
        {
            return true;
        }
    }
    if  ( month == 2 && day == 29 && ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) ) )
    {

        return true;
    }
    return false;
}

// Function to check the hits of a link inside a date range.
void checkDateRange(Hit hits[], char* link, char* StartDate, char* FinishDate, int &counterHit, int &counterUnique)
{
    int dayS;
    int monthS;
    int yearS;
    int dayF;
    int monthF;
    int yearF;
    counterHit = 0;
    counterUnique = 0;
    int counterEquals = 0;

    sscanf(StartDate,"%2d/%2d/%4d", &monthS, &dayS, &yearS);
    sscanf(FinishDate,"%2d/%2d/%4d", &monthF, &dayF, &yearF);

        if (strlen(StartDate)!=10 || strlen(FinishDate)!=10 )
        {
            cout << "Invalid date ...\n" << endl;
        }
        else if (! checkDate(monthS, dayS, yearS && ! checkDate(monthF, dayF, yearF)))
        {
            cout << "Invalid date ... \n" << endl;
        }
        else{

    for(int i = 0; i < hits->getCounter() ; i++ )
    {
        if ((hits[i].getYear() >= yearS && hits[i].getYear() <= yearF) && (strcmp(hits[i].getLink(),link)==0))
        {

            if (hits[i].getMonth() >= monthS && hits[i].getMonth() <= monthF )
            {
                if (hits[i].getDay() >= dayS && hits[i].getDay() <= dayF)
                    counterHit++;
                counterEquals = 0;

                for(int j=0; j < hits->getCounter(); j++)
                {
                    int m = strcmp(hits[i].getIp(),hits[j].getIp());
                    int n = strcmp(hits[i].getLink(),hits[j].getLink());

                    if((m == 0 && n==0) && j>i)
                    {
                        if (hits[j].getYear() >= yearS && hits[j].getYear() <= yearF)
                        {
                            if (hits[j].getMonth() >= monthS && hits[j].getMonth() <= monthF )
                            {
                                if (hits[j].getDay() >= dayS && hits[j].getDay() <= dayF)
                                {
                                    counterEquals++;
                                }
                            }
                        }
                    }
                }

                if(counterEquals == 0) counterUnique++;
            }
        }
      }
    }






}
// Function to verify if a link is inside the vector that contains all the links
bool vectorHas(string link, vector<string> links){

    for(int i =0; i< links.size(); i++ ){

        if(link == links[i]){
            return true;
        }}
        return false;
}
