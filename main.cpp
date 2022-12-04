#include <iostream>
using namespace std;



int main(){

    char ans;
    cout << "Do you want to want to check if some student pasess the class? (y/n) ";
    cin >> ans;
    

    while (ans == 'y'){
        int studPoints;
        int minPass = 41;

        cout << "Enter the student points: ";
        cin >> studPoints;

        if (studPoints<minPass){
            cout << "This student has failed";
            cout << "You got a D-";
        } else {

            cout << "Congratulations you have passed the exam"<<endl;
            if (studPoints>41 && studPoints<51){
                cout<<"You got a D";
            }else if (studPoints>50 && studPoints<61){
                cout<<"You got a C-";
            }else if (studPoints>60 && studPoints<71){
                cout<<"You got a C";
            }else if (studPoints>70 && studPoints<81){
                cout<<"You got a B-";
            }else if (studPoints>80 && studPoints<91){
                cout<<"You got a B";
            }else if (studPoints>90 && studPoints<90){
                cout<<"You got a A-";
            }else if(studPoints>=91 && studPoints<=94){
                cout<<"Congratiulations you got an A";
            }else if(studPoints>=95 && studPoints<=100){
                cout<< "Congratulations you are in top tier max grade A+";
            }else{
                cout<<"The given data is not valid please check!";
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
    
       
    } while (false);
    }

    return 0;
}
