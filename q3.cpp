#include "q3.h"

q3::q3()
{
    player1_Score = 0;
    player2_Score = 0;

    p1_q1 = " What is the most common blood type in humans?";
    p1_q1_opt1 = " AB ";
    p1_q1_opt2 = " O";
    p1_q1_opt3 = " A";
    p1_q1_opt4 = " B";
    p1_q1_answer = 2;

    p1_q2 = " Which of these was not imported to Europe from the \"New World\"?";
    p1_q2_opt1 = " Tomato ";
    p1_q2_opt2 = " Sweet Potato ";
    p1_q2_opt3 = " Chocolate ";
    p1_q2_opt4 = " Cucumber ";
    p1_q2_answer = 4;

    p1_q3 = " How many letters are there in the Greek alphabet?";
    p1_q3_opt1 = " 32 ";
    p1_q3_opt2 = " 23 ";
    p1_q3_opt3 = " 24 ";
    p1_q3_opt4 = " 26 ";
    p1_q3_answer = 3;

    p1_q4 = " Which of the following is not the color of any of the 'Teletubbies'? ";
    p1_q4_opt1 = " Red ";
    p1_q4_opt2 = " Blue ";
    p1_q4_opt3 = " Yellow ";
    p1_q4_opt4 = " Green ";
    p1_q4_answer = 2;

    p1_q5 = " How many prime numbers are there between 10 and 100?";
    p1_q5_opt1 = " 20 ";
    p1_q5_opt2 = " 21 ";
    p1_q5_opt3 = " 23 ";
    p1_q5_opt4 = " 26 ";
    p1_q5_answer = 2;




    p2_q1 = " How many rows of stars are there on an American flag?";
    p2_q1_opt1 = " 7 ";
    p2_q1_opt2 = " 8 ";
    p2_q1_opt3 = " 9 ";
    p2_q1_opt4 = " 10 ";
    p2_q1_answer = 3;

    p2_q2 = " In the board game Monopoly, how many \"Chance\" squares are there?";
    p2_q2_opt1 = " 2 ";
    p2_q2_opt2 = " 3 ";
    p2_q2_opt3 = " 4 ";
    p2_q2_opt4 = " 5 ";
    p2_q2_answer = 2;

    p2_q3 = " How many elements in the periodic table begin with the letter 'Z'? ";
    p2_q3_opt1 = " 3 ";
    p2_q3_opt2 = " 4 ";
    p2_q3_opt3 = " 2 ";
    p2_q3_opt4 = " 5 ";
    p2_q3_answer = 3;

    p2_q4 = " How many dots are there on a Pac-Man board? ";
    p2_q4_opt1 = " 240 ";
    p2_q4_opt2 = " 245 ";
    p2_q4_opt3 = " 260 ";
    p2_q4_opt4 = " 230 ";
    p2_q4_answer = 1;

    p2_q5 = " How many employees were at Google as of December 31, 2007?";
    p2_q5_opt1 = " 16,805 ";
    p2_q5_opt2 = " 16,850 ";
    p2_q5_opt3 = " 16,880 ";
    p2_q5_opt4 = " 16,890 ";
    p2_q5_answer = 1;


    Player1();
    Player2();
    whowins();

}


void q3::Player1()
{
    char ready = 'n';
    system("cls");
    cout<<"\n\n\t\t Welcome Player 1";
    cout<<"\n\n\t Are you ready?\n****************************\nPress y for yes : \t";
    cin>>ready;
    if(ready == 'y' || ready == 'Y')
    {
        Start_Player1();
    }

}


void q3::Player2()
{
    char ready = 'n';
    system("cls");
    cout<<"\n\n\t\t Welcome Player 2";
    cout<<"\n\n\t Are you ready?\n****************************\nPress y for yes : \t";
    cin>>ready;
    if(ready == 'y' || ready == 'Y')
    {
        Start_Player2();
    }

}

void q3::Show_Results(int playerID)
{
    cout<<"\n\n";
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    if(playerID == 1)
    {
        cout<<"\n\t\t your Scores are : "<<player1_Score<<"\n";
    }
    if(playerID == 2)
    {
        cout<<"\n\t\t your Scores are : "<<player2_Score<<"\n";
    }
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\n";
    system("pause");
}

void q3::whowins()
{
    system("cls");
    cout<<"\n\n";
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
        if(player1_Score > player2_Score)
        {
            cout<<"\n\t\t Player 1 Wins \n";
        }
        if(player1_Score == player2_Score)
        {
            cout<<"\n\t\t WIN WIN (Both wins) \n";
        }
        else {
            cout<<"\n\t\t Player 2 Wins \n";
        }
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n\n";
}

void q3::Start_Player1()
{
    int userOpt = 0;
    cout<<"\n\n\n";
    cout<<"Q1 :: "<<p1_q1;
    cout<<"\n\t 1.\t"<<p1_q1_opt1;
    cout<<"\n\t 2.\t"<<p1_q1_opt2;
    cout<<"\n\t 3.\t"<<p1_q1_opt3;
    cout<<"\n\t 4.\t"<<p1_q1_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p1_q1_answer)
        {
            player1_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";

    cout<<"Q2 :: "<<p1_q2;
    cout<<"\n\t 1.\t"<<p1_q2_opt1;
    cout<<"\n\t 2.\t"<<p1_q2_opt2;
    cout<<"\n\t 3.\t"<<p1_q2_opt3;
    cout<<"\n\t 4.\t"<<p1_q2_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p1_q2_answer)
        {
            player1_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";

    cout<<"Q3 :: "<<p1_q3;
    cout<<"\n\t 1.\t"<<p1_q3_opt1;
    cout<<"\n\t 2.\t"<<p1_q3_opt2;
    cout<<"\n\t 3.\t"<<p1_q3_opt3;
    cout<<"\n\t 4.\t"<<p1_q3_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p1_q3_answer)
        {
            player1_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";


    cout<<"Q4 :: "<<p1_q4;
    cout<<"\n\t 1.\t"<<p1_q4_opt1;
    cout<<"\n\t 2.\t"<<p1_q4_opt2;
    cout<<"\n\t 3.\t"<<p1_q4_opt3;
    cout<<"\n\t 4.\t"<<p1_q4_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p1_q4_answer)
        {
            player1_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";

    cout<<"Q5 :: "<<p1_q5;
    cout<<"\n\t 1.\t"<<p1_q5_opt1;
    cout<<"\n\t 2.\t"<<p1_q5_opt2;
    cout<<"\n\t 3.\t"<<p1_q5_opt3;
    cout<<"\n\t 4.\t"<<p1_q5_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p1_q5_answer)
        {
            player1_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";


    Show_Results(1);
} // end of player1 function


void q3::Start_Player2()
{
    int userOpt = 0;
    cout<<"\n\n\n";
    cout<<"Q1 :: "<<p2_q1;
    cout<<"\n\t 1.\t"<<p2_q1_opt1;
    cout<<"\n\t 2.\t"<<p2_q1_opt2;
    cout<<"\n\t 3.\t"<<p2_q1_opt3;
    cout<<"\n\t 4.\t"<<p2_q1_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p2_q1_answer)
        {
            player2_Score += 10;
        }
    }
    else {
        cout<<"\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";

    cout<<"Q2 :: "<<p2_q2;
    cout<<"\n\t 1.\t"<<p2_q2_opt1;
    cout<<"\n\t 2.\t"<<p2_q2_opt2;
    cout<<"\n\t 3.\t"<<p2_q2_opt3;
    cout<<"\n\t 4.\t"<<p2_q2_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p2_q2_answer)
        {
            player2_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";

    cout<<"Q3 :: "<<p2_q3;
    cout<<"\n\t 1.\t"<<p2_q3_opt1;
    cout<<"\n\t 2.\t"<<p2_q3_opt2;
    cout<<"\n\t 3.\t"<<p2_q3_opt3;
    cout<<"\n\t 4.\t"<<p2_q3_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p2_q3_answer)
        {
            player2_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";


    cout<<"Q4 :: "<<p2_q4;
    cout<<"\n\t 1.\t"<<p2_q4_opt1;
    cout<<"\n\t 2.\t"<<p2_q4_opt2;
    cout<<"\n\t 3.\t"<<p2_q4_opt3;
    cout<<"\n\t 4.\t"<<p2_q4_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p2_q4_answer)
        {
            player2_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";

    cout<<"Q5 :: "<<p2_q5;
    cout<<"\n\t 1.\t"<<p2_q5_opt1;
    cout<<"\n\t 2.\t"<<p2_q5_opt2;
    cout<<"\n\t 3.\t"<<p2_q5_opt3;
    cout<<"\n\t 4.\t"<<p2_q5_opt4;
    cout<<"\n----------------------------------------";
    cout<<"\n\t Type correct option : \t";
    cin>>userOpt;
    if(userOpt > 0 && userOpt < 5)
    {
        if(userOpt == p2_q5_answer)
        {
            player2_Score += 10;
        }
    }
    else {
        cout<<"\n\n\t False Option typed\n";
    }
    cout<<"*****************************************************\n\n\n";


    Show_Results(2);
}

