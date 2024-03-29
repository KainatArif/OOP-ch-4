// 4.16
// Fundraising initiative calculator


#include<iostream>
#include<string>
using namespace std;
int main()
{
    double total_funds = 0;
    while (true) {
        int laps;
        double sponsorship_rate, contribution;
        cout << "Enter laps completed(-1 to end): ";
        cin >> laps;
        if (laps == -1) {
            cout << "Total funds raised: " << total_funds;
            return 0;
        }
        cout << "Enter sponsorship rate: ";
        cin >> sponsorship_rate;
        contribution = laps*sponsorship_rate;
        if (laps > 40) {
            contribution += (40-laps)*sponsorship_rate*1.5;
        }
        cout << "Student contribution: " << contribution << "\n";
        total_funds += contribution;
    }
    return 0;
}
