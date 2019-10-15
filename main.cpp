#include <iostream>
#include<q3.h>
#include <conio.h>
#include <stdlib.h>
#include<limits>

using namespace std;

int main()
{
    char repeatAnswer = 'n';

    do{
        cout <<"\t\tWelcome to Q3 Solution" << endl;
        cout<<"\n\t Do you want to Play Trivia Game?\n\n \t Press y for yes :\t";

        while(!(cin >> repeatAnswer)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (cin.get() != '\n'){    continue; }
                cout << "\n\tInvalid input.  Try again: ";
            }



        if(repeatAnswer == 'y' || repeatAnswer == 'Y')
        {
            //creating class object
            q3 *q3_object = new q3();
        }
        else {
            system("cls");
            cout<<"\nThis program is not designed handle NO";
        }

        cout<<"\n\n Do you want to Re-consider this??\n\t Press y for Yes or any key for program termination :\t";
        cin>>repeatAnswer;
        if(repeatAnswer == 'y')
        {
            system("cls");
        }
    }while(repeatAnswer == 'y' || repeatAnswer == 'Y');


    return 0;
}
