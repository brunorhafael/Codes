//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
////For this assignment you will be required to write a C++ program which accepts a text file
//containing a list of books that will be stored in an array. The size of the array should be 200
//that is stored in a constant named TABLE_SIZE.
// HOMEWORK 5 ­ due Tuesday, May 5th no later than 5:00PM
#include "BookRecord.h"


BookRecord::BookRecord()
{

}

void BookRecord::setTitle(string t)
{
    title = t;
}

void BookRecord::setAuthor(string a)
{
    author = a;
}

void BookRecord::setPublisher(string p)
{
    publisher = p;
}

void BookRecord::setIsbn(int i)
{
    isbn = i;
}

string BookRecord::getTitle()
{
    return title;
}

string BookRecord::getAuthor()
{
    return author;
}

string BookRecord::getPulisher()
{
    return publisher;
}

int BookRecord::getIsbn()
{
    return isbn;
}

BookRecord::~BookRecord()
{

}


