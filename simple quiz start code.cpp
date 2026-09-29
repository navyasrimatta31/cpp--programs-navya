#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char ans;
    int score = 0;

    cout << "=====================================\n";
    cout << "        SIMPLE QUIZ GAME\n";
    cout << "=====================================\n";

    cout << "Enter Your Name: ";
    cin >> name;

    cout << "\nWelcome " << name << "!\n";
    cout << "Answer the following questions.\n\n";

    // Question 1
    cout << "Q1. What is the capital of India?\n";
    cout << "A. Mumbai\nB. Delhi\nC. Chennai\nD. Kolkata\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 'B' || ans == 'b')
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct Answer: B. Delhi\n\n";
    }

    // Question 2
    cout << "Q2. Which language is used for Object-Oriented Programming?\n";
    cout << "A. HTML\nB. SQL\nC. C++\nD. CSS\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 'C' || ans == 'c')
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct Answer: C. C++\n\n";
    }

    // Question 3
    cout << "Q3. How many days are there in a week?\n";
    cout << "A. 5\nB. 6\nC. 7\nD. 8\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 'C' || ans == 'c')
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct Answer: C. 7\n\n";
    }

    // Question 4
    cout << "Q4. Which planet is known as the Red Planet?\n";
    cout << "A. Earth\nB. Mars\nC. Venus\nD. Jupiter\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 'B' || ans == 'b')
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct Answer: B. Mars\n\n";
    }

    // Question 5
    cout << "Q5. Who is known as the Father of Computers?\n";
    cout << "A. Charles Babbage\nB. Bill Gates\nC. Steve Jobs\nD. Alan Turing\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 'A' || ans == 'a')
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct Answer: A. Charles Babbage\n\n";
    }

    cout << "=====================================\n";
    cout << "Quiz Completed!\n";
    cout << "Player Name : " << name << endl;
    cout << "Score       : " << score << " / 5\n";

    if(score == 5)
        cout << "Grade : Excellent!\n";
    else if(score >= 3)
        cout << "Grade : Good Job!\n";
    else
        cout << "Grade : Keep Practicing!\n";

    cout << "=====================================\n";

    return 0;
}