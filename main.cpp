#include <iostream>
using namespace std;



int main() {

    char ans;
    cout << "Do you want to want to check if some student pasess the class? (y/n) ";
    cin >> ans;
    
    while (ans == 'y'){
        int studPoints;
        int minPass = 41;

        cout << "Enter the student points: ";
        cin >> studPoints;

        if (studPoints<minPass)
        {
            cout << "This student has failed";
        } else {
            cout << "Congratulations you have passed the exam"<<endl;
        }
        
        cout << "Do you want to check some other student grade? (y/n)";
        cin >> ans;
    }
    do{
        if(ans == 'n'){
            cout<<"The program is being terminated";
            exit(0);

        }
        if(ans!= 'y'){
            cout<< "This is not a valid answer";
            exit(0);
        }
    
        /* code */
    } while (false);
    

    return 0;
}