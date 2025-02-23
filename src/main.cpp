/*
Universidad Amerike
Author: José Sierra
Practice#:2
Date: 22/02/25
Description: This code prints all my personal information including some personal tastes
*/

#include <iostream>
using namespace std;

int Age = 17;

//This saves Types of Data
struct Data
{
    string Name, Job, Origin, Hobby, Food, Music;
};

struct Data2
{
    string messageName, messageJob, messageOrigin, messageHobby, messageFood, messageMusic; 
};


//This execute all the messages for the console

void printuser(Data2 message, Data user)
{
    cout<<message.messageName + user.Name + "\n";
    cout<< "His age is: " + to_string(Age) + "\n";
    cout<<message.messageJob + user.Job + "\n";
    cout<<message.messageOrigin + user.Origin + "\n";
    cout<<message.messageHobby + user.Hobby + "\n";
    cout<<message.messageFood + user.Food + "\n";
    cout<<message.messageMusic + user.Music + "\n";
}

//Here i specify all the values of each variable

int main ()
{
    Data User;
    Data2 messageUser;
    User.Name = "Jose Luis Sierra Lopez";
    User.Job = "Student";
    User.Origin = "Mexico City";
    User.Hobby = "Play VideoGames";
    User.Food = "Hamburguer";
    User.Music = "Rock";
    messageUser.messageName = "Here is the name of the user: ";
    messageUser.messageJob = "He Jobs in: ";
    messageUser.messageOrigin = "He is from: ";
    messageUser.messageHobby = "His hobby is: ";
    messageUser.messageFood = "His favorite food is ";
    messageUser.messageMusic = "His favorite type of music is ";
    printuser(messageUser, User);

    return 0;
}

