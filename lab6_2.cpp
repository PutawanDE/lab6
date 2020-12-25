#include <iostream>
#include <string>

using namespace std;

//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

int main()
{
    cout << "Fahsai: " << "Sawadee ka...Can you tell me your name?" << "\n";
    string name;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: " << "Wow!!! " << name << " is a really cool name." << "\n";
    cout << "Fahsai: " << "I think you are an Engineering student. What is your student ID?" << "\n";
    cout << name << ": ";
    
    int id;
    int gear;
    int year;
    cin >> id;
    cin.ignore();
    year = id/10000000;
    gear = year - 12;
    cout << "Fahsai: " << "I think you may be GEAR "<< gear << ". I have a free movie ticket for you." << "\n";

    cout << "Fahsai: " << "Let's go to the cinema together!!!" << "\n";
    cout << "Fahsai: " << "What movie do you want to watch?" << "\n";
    cout << name << ": ";
    string movie;
    getline(cin, movie);
    cout << "Fahsai: " << "So....which day are you free to go with me?" << "\n";
    cout << name << ": ";
    string day;
    getline(cin, day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << "\n";
    cout << name << ": ";
    string text;
    getline(cin, text);
    cout << "Fahsai: " << "555+ see you " << day << ". Bye Bye \\(^ ^)/" << "\n";
    return 0;
}