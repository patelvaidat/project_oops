#include <iostream>
#include <windows.h>
#include <cctype>
#include <fstream>
#include <string>

using namespace std;

class logoPage {
public:x
    void logo() {
        system("CLS");
        string s1;
        ifstream filestream("./src/autoDealerships.txt");
        if (filestream.is_open()) {
            while (getline(filestream, s1)) {
                cout << s1 << endl;
            }
            filestream.close();
        } else {
            cout << "Failed to open file" << endl;
        }
        Sleep(5);
        cout << "\t\t\t\t\tWelcome to our AutoDealership program!\n";
        cout << "\t\t\t\t\t--------------------------------------\n\n";
        cout << "\t\t\t\t\t\tWe provide you the best cars at the cheapest rate!" << endl;
        cout << "\t\t\t\t\t\t--------------------------------------------------\n\n";
    }
};

class customer {
public:
    string custname;
    char carmodel;
};

class rent : public customer {
public:
    int rentAmt = 0, days = 0;

    void displayCarInfo(const string& filename) {
        system("CLS");
        cout << "\n\n\n";
        ifstream carFile(filename);
        string line;
        if (carFile.is_open()) {
            while (getline(carFile, line)) {
                cout << "\t\t\t" << line << endl;
            }
            carFile.close();
        } else {
            cout << "Failed to open car file." << endl;
        }
    }

    void data() {
        cout << "Enter customer name: ";
        cin >> custname;
        cout << endl;

        cout << "\t\t\t\tSelect a car from list below: " << endl;
        cout << "A. Ford Endeavour 2003" << endl;
        cout << "B. Jeep Compass 2021" << endl;
        cout << "C. Maruti Alto 800 2012" << endl;
        cout << endl;
        cout << "Enter your option (Eg. A -or- B -or- C,...): ";
        cin >> carmodel;
        cout << endl;

        carmodel = tolower(carmodel); // Normalize carmodel to lowercase

        switch (carmodel) {
            case 'a':
                displayCarInfo("./src/cars/car1.txt");
                break;
            case 'b':
                displayCarInfo("./src/cars/car2.txt");
                break;
            case 'c':
                displayCarInfo("./src/cars/car3.txt");
                break;
            default:
                cout << "Invalid carmodel entered." << endl;
                return; // Exit data collection if invalid input
        }

        cout << "Enter the following information:" << endl;
        cout << "Enter no. of days car wants to be rented: ";
        cin >> days;
        cout << endl;
    }

    void calculateRent() {
        // Calculate rent based on car model
        switch (carmodel) {
            case 'a':
                rentAmt = days * 7200;
                break;
            case 'b':
                rentAmt = days * 3000;
                break;
            case 'c':
                rentAmt = days * 1000;
                break;
            default:
                rentAmt = 0; // In case of an invalid car model
        }
    }

    void displayInvoice() {
        cout << "Customer Name: " << custname << endl;
        cout << "Car Model Selected: " << carmodel << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Rent Amount: " << rentAmt << endl;
    }

    void loadingScr() {
        Sleep(1);
        cout << "Please wait";
        for (int i = 0; i < 5; i++) {
            Sleep(700);
            cout << ".";
        }
        Sleep(700);
        system("CLS");
    }
};

int main() {
    logoPage l1;
    l1.logo();

    rent r1;
    r1.data();
    r1.loadingScr();
    r1.calculateRent();
    r1.displayInvoice();

    return 0;
}
