//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Darius Haywood> on <3/9/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 0;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;
    while (day < 7){
        cout << "How many text messeges did you send on day " << day + 1 << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day+=1;
    }
    average = static_cast<double>(totalTexts) / (day);
    cout << fixed << setprecision(0);
    cout << "You sent an average of " << average << " text messages per day." << endl;
    return 0;
}   //end of main function