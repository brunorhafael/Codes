//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
////For this assignment you will be required to write a C++ program which accepts a text file
//containing a list of books that will be stored in an array. The size of the array should be 200
//that is stored in a constant named TABLE_SIZE.
// HOMEWORK 5 ­ due Tuesday, May 5th no later than 5:00PM
#ifndef BOOKRECORD_H
#define BOOKRECORD_H


#include <iostream>
#include <string>
#include <fstream>



#define STRING_LENGHT 40
#define ISBN_LENGHT 10

using namespace std;

class BookRecord
{

private:
    string title;
    string author;
    string publisher;
    int isbn;


public:
    BookRecord();

    void setTitle(string title);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setIsbn(int);

    string getTitle();
    string getAuthor();
    string getPulisher();
    int getIsbn();

    ~BookRecord();

};


#endif
