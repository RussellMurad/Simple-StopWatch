#include <cstdlib>
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

class Alarm
{
public:

    int Minute,Second;

    void interface()
    {
        cout << "\n\n\n\n\n";
        cout << "\t\t\t";
        cout << "__          __  _                            _______       _____ _               __          __   _       _     " << endl;
        cout << "\t\t\t";
        cout << "\\ \\        / / | |                          |__   __|     / ____| |              \\ \\        / /  | |     | |    " << endl;
        cout << "\t\t\t";
        cout << " \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___     | | ___   | (___ | |_ ___  _ __    \\ \\  /\\  / /_ _| |_ ___| |__  " << endl;
        cout << "\t\t\t";
        cout << "  \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\    | |/ _ \\   \\___ \\| __/ _ \\| '_ \\    \\ \\/  \\/ / _` | __/ __| '_ \\ " << endl;
        cout << "\t\t\t";
        cout << "   \\  /\\  /  __/ | (_| (_) | | | | | |  __/    | | (_) |  ____) | || (_) | |_) |    \\  /\\  / (_| | || (__| | | |" << endl;
        cout << "\t\t\t";
        cout << "    \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|    |_|\\___/  |_____/ \\__\\___/| .__/      \\/  \\/ \\__,_|\\__\\___|_| |_|" << endl;
        cout << "\t\t\t";
        cout << "                                                                         | |                                    " << endl;
        cout << "\t\t\t";
        cout << "                                                                         |_|                                    " << endl;
    }

    void inputA()
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\t\t\t\t";
        cout << "How many minutes later do you need alarm ?" << endl << endl;
        cout << endl << "\t\t\t\t\t\t\t\t\t ";
    }

    void inputB()
    {
        cout << endl << endl << "\t\t\t\t\t\t\t";
        cout << "OK...Now keep doing what you was doing." << endl;
        cout << endl << "\t\t\t\t\t\t\t";
        cout << "You will be alarmed after " << Minute << " Minute..." << endl;
        cout << endl << "\t\t\t\t\t\t\t";
        cout << "Please don't turn off the window, Minimize it..." << endl;
    }

    void finish()
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    }

    void repeat()
    {
        cout << endl << endl << "\t\t\t\t\t\t\t";
        cout << "Do you want again (If Yes press 1, Else 0) : ";
    }

};

int main()
{
    time_t start, end;
    double elapsed;
    int N=0,count=1;
    Alarm A;
    A.interface();

    while(count)
    {

        A.inputA();
        cin >> A.Minute;
        A.inputB();
        A.Second = A.Minute*60;

        time(&start);

        do {
            time(&end);

            elapsed = difftime(end, start);
            if(elapsed == N)
            {
                N++;
            }

        } while(elapsed < A.Second);

        system ("Sound.exe");
        system ("pause");

        A.repeat();
        cin >> count;

    }

    A.finish();
    return 0;
}
