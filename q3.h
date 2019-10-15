#ifndef Q3_H
#define Q3_H
#include<cstring>
#include <string>
#include<iostream>
#include<conio.h>

using namespace std;
class q3
{
private:
    int player1_Score;
    int player2_Score;

    string p1_q1;
    string p1_q1_opt1;
    string p1_q1_opt2;
    string p1_q1_opt3;
    string p1_q1_opt4;
    int p1_q1_answer;

    string p1_q2;
    string p1_q2_opt1;
    string p1_q2_opt2;
    string p1_q2_opt3;
    string p1_q2_opt4;
    int p1_q2_answer;

    string p1_q3;
    string p1_q3_opt1;
    string p1_q3_opt2;
    string p1_q3_opt3;
    string p1_q3_opt4;
    int p1_q3_answer;

    string p1_q4;
    string p1_q4_opt1;
    string p1_q4_opt2;
    string p1_q4_opt3;
    string p1_q4_opt4;
    int p1_q4_answer;

    string p1_q5;
    string p1_q5_opt1;
    string p1_q5_opt2;
    string p1_q5_opt3;
    string p1_q5_opt4;
    int p1_q5_answer;




    string p2_q1;
    string p2_q1_opt1;
    string p2_q1_opt2;
    string p2_q1_opt3;
    string p2_q1_opt4;
    int p2_q1_answer;

    string p2_q2;
    string p2_q2_opt1;
    string p2_q2_opt2;
    string p2_q2_opt3;
    string p2_q2_opt4;
    int p2_q2_answer;

    string p2_q3;
    string p2_q3_opt1;
    string p2_q3_opt2;
    string p2_q3_opt3;
    string p2_q3_opt4;
    int p2_q3_answer;

    string p2_q4;
    string p2_q4_opt1;
    string p2_q4_opt2;
    string p2_q4_opt3;
    string p2_q4_opt4;
    int p2_q4_answer;

    string p2_q5;
    string p2_q5_opt1;
    string p2_q5_opt2;
    string p2_q5_opt3;
    string p2_q5_opt4;
    int p2_q5_answer;





public:
    q3();
    ~q3();

    void Start_Playing();
    void Player1();
    void Player2();
    void Show_Results(int playerID);
    void Start_Player1();
    void Start_Player2();
    void whowins();




};

#endif // Q3_H
