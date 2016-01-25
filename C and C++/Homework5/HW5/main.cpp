//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//Description:
////For this assignment you will be required to write a C++ program which accepts a text file
//containing a list of books that will be stored in an array. The size of the array should be 200
//that is stored in a constant named TABLE_SIZE.
// HOMEWORK 5 ­ due Tuesday, May 5th no later than 5:00PM

#include <fstream>
#include <iostream>
#include <stdio.h>
#include "BookRecord.cpp"
#include "ListRecords.cpp"

using namespace std;

// Main Function
int main()
{
    BookRecord book;
    int option = 0;
    int isbn;
    string fileName;
    string title;
    string author;
    string publisher;
    int ISBN_number;



    cout << "Enter a file name: \n";
    cin >> fileName;

    ListRecords lista(fileName);
    // Main menu
    while(option!=5){
    cout << "\n\n";
    cout << "Select an option from the following menu: \n";
    cout << "1)Insert a new book into the list\n";
    cout << "2)Print the info of a specific book by ISBN number\n";
    cout << "3)Print the list sorted by ISBN\n";
    cout << "4)Print the list sorted alphabetically by title\n";
    cout << "5)Quit the program\n";
    cout << "Please select the option\n";
    cin >> option;

    switch(option)
    {

    case 1:

        fflush(stdin);
        cout <<"Enter book's title: \n";
        getline(cin,title);

        cout <<"Enter author's name: \n";
        getline(cin,author);

        cout <<"Enter book's publisher: \n";
        getline(cin,publisher);

        cout <<"Enter book's ISBN: \n";
        cin >>isbn;

        book.setTitle(title);
        book.setAuthor(author);
        book.setPublisher(publisher);
        book.setIsbn(isbn);

        lista.insertBookInfo(book);
        break;

    case 2:
        cout << "Enter an ISBN number:";
        cin >> ISBN_number;
        lista.printBookInfo(ISBN_number);
        break;

    case 3:
        lista.printListByISBN();
        break;

    case 4:
        lista.printListByTitle();
        break;

    case 5:
        cout << "Program terminating...";
        break;
        return 0;

    default:
        cout << "Invalid Option\n\n";
        break;

    }
}

    return 0;
}
