//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
////For this assignment you will be required to write a C++ program which accepts a text file
//containing a list of books that will be stored in an array. The size of the array should be 200
//that is stored in a constant named TABLE_SIZE.
// HOMEWORK 5 ­ due Tuesday, May 5th no later than 5:00PM
#ifndef LISTRECORDS_H
#define LISTRECORDS_H


#include <iostream>
#include <string>
#include "BookRecord.h"

#define TABLE_SIZE 200

using namespace std;


class ListRecords
{

    private:
        BookRecord books[TABLE_SIZE];
        static int size_array;  // Variable static to count the size of the array of books.

    public:
        ListRecords(string);
        void insertBookInfo(BookRecord);
        void printBookInfo(int);
        void printListByISBN();
        void printListByTitle();
        bool checkIsbn(int);
        void sortISBN();
        void sortAlpha();
        ~ListRecords();

};

#endif // LISTRECORDS_H
