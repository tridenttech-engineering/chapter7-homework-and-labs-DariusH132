//Lab7-1.cpp - calculates the average number of text
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
    for(day = 1; day < 8; day += 1){
        cout << "How many text messeges did you send on day " << day << "?";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
    }
    average = static_cast<double>(totalTexts) / (day - 1);
    cout << fixed << setprecision(0);
    cout << "You sent an average of " << average << " text messages per day." << endl;
    return 0;
}   //end of main function