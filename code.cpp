#include <iostream>
#include<windows.h>
#include <cctype>
#include <fstream>

using namespace std;

class logoPage{
    public:
    int logo(){
        system("CLS");
        string s1;
        ifstream filestream("autoDealerships.txt");
        if(filestream.is_open()){
            while(getline(filestream,s1)){
                cout << s1 << endl;
            }
            filestream.close();
        }
        else{
            cout << "Failed to open file" << endl;
        }
    Sleep(5);
    cout << "\t\t\t\t\tWelcome to our AutoDealership program!\n";
    cout << "\t\t\t\t\t--------------------------------------\n\n";
    cout << "\t\t\t\t\t\tWe provide you the best cars at the cheapest rate!" << endl;
    cout << "\t\t\t\t\t\t--------------------------------------------------\n\n";
    return 0;
    }
};

class customer{
    public:
        string custname;
        char carmodel;
};

class rent : public customer{
    public:
        int rentAmt = 0, days = 0;


        void carA(int curline, string line){
        	system("CLS");
            cout << "\n\n\n";
            ifstream carA;
            carA.open("car1.txt");

            while(!carA.eof()){
                curline++;
                getline(carA, line);
                cout << "\t\t\t" << line << endl;
            };	
        }
        
        void carB(int curline, string line){
        	system("CLS");
            cout << "\n\n\n";
            ifstream carB;
            carB.open("car2.txt");

            while(!carB.eof()){
                curline++;
                getline(carB, line);
                cout << "\t\t\t" << line << endl;
            };	
        }
        
        void carC(int curline, string line){
        	system("CLS");
            cout << "\n\n\n";
            ifstream carC;
            carC.open("car3.txt");

            while(!carC.eof()){
                curline++;
                getline(carC, line);
                cout << "\t\t\t" << line << endl;
            };	
        }
        
        
        void data(){
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

            int curline = 0;
            string line;

            try{ //Exception handling using try-catch method
                if (carmodel!='a' || (char) tolower(carmodel)!='b' ||(char) tolower(carmodel)!='c' ){
                    throw carmodel;
                /*Try for carmodel w.r.t the given 3 carmodels (A, B & C)
                If carmodel!=given_models; #exception; execute catch part
                */
                };
            }
            catch(char carmodel){
                cout << "Invalid carmodel entered." << endl; //Inform user about invalid carmodel; exits the program at this stage
            }
        switch((char) tolower(carmodel)){
            case 'a':{
                // system("CLS");
                // cout << "\n\n\n";
                // ifstream carA;
                // carA.open("car1.txt");

                // while(!carA.eof()){
                //     curline++;
                //     getline(carA, line);
                //     cout << "\t\t\t" << line << endl;
                // };
            carA(curline, line);
                break;
            }

            case 'b':{
            // system("CLS");
            // cout << "\n\n\n";
            // ifstream carB;
            // carB.open("car2.txt");

            // while(!carB.eof()){
            //     curline++;
            //     getline(carB, line);
            //     cout << "\t\t\t" << line << endl;
            // };
                carB(curline, line);

                break;
            }

            case 'c':{
                // system("CLS");
                // cout << "\n\n\n";
                // ifstream carC;
                // carC.open("car3.txt");

                // while(!carC.eof()){
                //     curline++;
                //     getline(carC, line);
                //     cout << "\t\t\t" << line << endl;
                // };
                carC(curline, line);

                break;
            }
        }
        cout << "Enter the following information:" << endl;
        cout << "Enter no. of days car want's to be rented: ";
        cin >> days;
        cout << endl;
        }
    void loadingScr(){
        Sleep(1);
        cout << "Please wait";
        Sleep(700);
        cout << ".";
        Sleep(700);
        cout << ".";
        Sleep(700);
        cout << ".";
        Sleep(700);
        cout << ".";
        Sleep(700);
        system("CLS");
    }
    void FixedRent(){
        if(carmodel=="A") rentAmt = days*7200;
        if(carmodel=="B") rentAmt = days*3000;
        if(carmodel=="C") rentAmt = days*1000;
    }
    void invoice(){        
    }
};



int main(){
    logoPage l1;
    l1.logo();
    rent r1;
    r1.data();
    r1.loadingScr();
    r1.FixedRent();

    return 0;
}