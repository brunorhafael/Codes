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

using std::cout;
using std::cin;
using std::endl;
using namespace std;

#include "hit.h"

int Hit::counter = 0;

Hit::Hit(){

}

void Hit::setIp(char* ip){
    strcpy(IP,ip);
}

void Hit::setLink(char* Link){
    counter++;
    strcpy(link,Link);
}

void Hit::setMonth(int m){
    month = m;
}


void Hit::setDay(int d){
    day = d;
}

void Hit::setYear(int y){
    year = y;
}


char* Hit::getIp(){
    return IP;
}
char* Hit::getLink(){
    return link;
}
int Hit::getMonth(){
    return month;
}
int Hit::getDay(){
    return day;
}
int Hit::getYear(){
    return year;
}
int Hit::getCounter(){
    return counter;
}

Hit::~Hit(){
    counter--;
}
