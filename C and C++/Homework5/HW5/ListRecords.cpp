//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
////For this assignment you will be required to write a C++ program which accepts a text file
//containing a list of books that will be stored in an array. The size of the array should be 200
//that is stored in a constant named TABLE_SIZE.
// HOMEWORK 5 ­ due Tuesday, May 5th no later than 5:00PM
#include "ListRecords.h"
#include "BookRecord.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>


int ListRecords::size_array = 0;

ListRecords::ListRecords(string filename)
{

    string title;
    string author;
    string publisher;
    string line;
    string temp_isbn;

    int isbn;

    int i=0;


    ifstream inFile (filename.c_str( ) );
    if(!inFile )
    {
        cout << "Error Reading File";

    }
    else
    {

        while(!inFile.eof())
        {
            getline(inFile,line);
            title = line;

            getline(inFile,line);
            author = line;

            getline(inFile,line);
            publisher = line;

            getline(inFile,line);
            isbn = atoi(line.c_str());

            getline(inFile,line);

            // This IF check if an ISBN already exists inside the array.
            if(!checkIsbn(isbn))
            {
                books[i].setTitle(title);
                books[i].setAuthor(author);
                books[i].setPublisher(publisher);
                books[i].setIsbn(isbn);
                size_array++;  // Always that one object is inserted in the class size_array is incremented.
            }
            else continue;

           // cout << books[i].getIsbn()<<"\n";
            i++;
        }

    }

}

ListRecords::~ListRecords()
{

}
// Function to check if an ISBN exists or not inside the array.
bool ListRecords::checkIsbn(int ISBN)
{
    if(size_array != 0 )
    {
        for (int i  = 0; i <= size_array ; i++ )
        {
            if(ISBN == books[i].getIsbn())
                return true;
            else return false;
        }
    }
    else return false;
}
// Function to insert a new book inside the array of objects.
void ListRecords::insertBookInfo(BookRecord record)
{
    books[size_array].setTitle(record.getTitle());
    books[size_array].setAuthor(record.getAuthor());
    books[size_array].setPublisher(record.getPulisher());
    books[size_array].setIsbn(record.getIsbn());
    size_array++;
    cout << "The record has been added to the list \n";

    cout << books[size_array].getAuthor()<<"\n";

}

void ListRecords::printBookInfo(int bookISBN)
{
    int aux=0;
    cout <<"\n";
    for (int i = 0; i < size_array; i++)
    {
        if(bookISBN == books[i].getIsbn())
        {
            cout << books[i].getTitle() <<"\n";
            cout << books[i].getAuthor() <<"\n";
            cout << books[i].getPulisher() <<"\n";
            cout <<"ISBN ";
            cout.width(10);
            cout.setf( ios::right);
            cout <<setfill('0') << books[i].getIsbn()<<"\n";
            cout.unsetf( ios::right);
            aux=1;
        }
    }

    if(aux==0)
    {
        cout << "The record you requested was not found in the list.";
    }
}

void ListRecords::printListByISBN()
{
    cout << "       Title                  Author                publisher           ISBN";
    cout << "\n";
    cout << "---------------------- ---------------------- ---------------------- ----------";
    cout << "\n";

    sortISBN();

    for (int i = 0; i < size_array; i++)
    {
        cout.setf( ios::left);
        cout.width(23);
        cout <<setfill(' ')<< (books[i].getTitle()).substr(0,22);
        cout.width(23);
        cout <<setfill(' ')<< (books[i].getAuthor()).substr(0,22);
        cout.width(23);
        cout <<setfill(' ')<< (books[i].getPulisher()).substr(0,22);
        cout.width(10);
        cout.unsetf( ios::left);
        cout.setf( ios::right);
        cout <<setfill('0')<< books[i].getIsbn()<<endl;
        cout.unsetf( ios::right);

    }

}


void ListRecords::printListByTitle()
{
    cout << "       Title                  Author                publisher           ISBN";
    cout << "\n";
    cout << "---------------------- ---------------------- ---------------------- ----------";
    cout << "\n";

    sortAlpha();

    for (int i = 0; i < size_array; i++)
    {
        cout.setf( ios::left);
        cout.width(23);
        cout <<setfill(' ')<< (books[i].getTitle()).substr(0,22);
        cout.width(23);
        cout <<setfill(' ')<< (books[i].getAuthor()).substr(0,22);
        cout.width(23);
        cout <<setfill(' ')<< (books[i].getPulisher()).substr(0,22);
        cout.width(10);
        cout.unsetf( ios::left);
        cout.setf( ios::right);
        cout <<setfill('0')<< books[i].getIsbn()<<endl;
        cout.unsetf( ios::right);

    }

}
// Function to sort by ISBN
void ListRecords::sortISBN(){

    int i, j;
    BookRecord tmp;
      for (i = 1; i < size_array; i++) {
            j = i;
            while (j > 0 && books[j-1].getIsbn() > books[j].getIsbn()) {
                  tmp = books[j];
                  books[j] = books[j - 1];
                  books[j - 1] = tmp;
                  j--;
            }
      }
}
// Function to sort alphabetically.
void ListRecords::sortAlpha() {

 int i, j;
    BookRecord tmp;
      for (i = 1; i < size_array; i++) {
            j = i;
            while (j > 0 && books[j-1].getTitle() > books[j].getTitle()) {
                  tmp = books[j];
                  books[j] = books[j - 1];
                  books[j - 1] = tmp;
                  j--;
            }
      }
}
