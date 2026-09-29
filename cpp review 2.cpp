#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


// ===================== MODULE 1: QUESTION CLASS =====================

class Question
{
public:
    string question;
    string optionA, optionB, optionC, optionD;
    char correctAnswer;

    Question(string q, string a, string b, string c, string d, char ans)
    {
        question = q;
        optionA = a;
        optionB = b;
        optionC = c;
        optionD = d;
        correctAnswer = ans;
    }

    void displayQuestion()
    {
        cout << "\n" << question << endl;
        cout << "A. " << optionA << endl;
        cout << "B. " << optionB << endl;
        cout << "C. " << optionC << endl;
        cout << "D. " << optionD << endl;
    }
};


// ===================== MODULE 2: PLAYER & SCORE =====================

class Player
{
public:
    string name;
    int score;

    Player(string n)
    {
        name = n;
        score = 0;
    }
};


// ===================== MODULE 3: QUIZ CLASS =====================

class Quiz
{
private:
    vector<Question> questions;

public:

    Quiz()
    {
        questions.push_back(
            Question(
                "Which language is mainly used for Data Structures?",
                "HTML",
                "C++",
                "CSS",
                "SQL",
                'B'
            )
        );

        questions.push_back(
            Question(
                "Which data structure follows FIFO?",
                "Stack",
                "Tree",
                "Queue",
                "Graph",
                'C'
            )
        );

        questions.push_back(
            Question(
                "Which keyword is used to create a class in C++?",
                "class",
                "define",
                "struct",
                "object",
                'A'
            )
        );

        questions.push_back(
            Question(
                "Which of the following is an OOP concept?",
                "Compilation",
                "Inheritance",
                "Execution",
                "Debugging",
                'B'
            )
        );

        questions.push_back(
            Question(
                "Which file is used to store the quiz result?",
                "input.txt",
                "question.txt",
                "results.txt",
                "score.cpp",
                'C'
            )
        );
    }


    // ================= ANSWER VALIDATION MODULE =================

    void checkAnswer(char answer, Question q, Player &p)
    {
        answer = toupper(answer);

        if (answer == q.correctAnswer)
        {
            cout << "Correct Answer!" << endl;
            p.score++;
        }
        else
        {
            cout << "Wrong Answer!" << endl;
        }
    }


    // ================= STARTING THE QUIZ MODULE =================

    void startQuiz(Player &p)
    {
        char answer;

        cout << "\n====================================" << endl;
        cout << "          QUIZ GAME SYSTEM          " << endl;
        cout << "====================================" << endl;

        for (int i = 0; i < questions.size(); i++)
        {
            cout << "\nQuestion " << i + 1 << " of "
                 << questions.size() << endl;

            questions[i].displayQuestion();

            cout << "Enter your answer (A/B/C/D): ";
            cin >> answer;

            checkAnswer(answer, questions[i], p);
        }

        cout << "\n====================================" << endl;
        cout << "             QUIZ OVER              " << endl;
        cout << "====================================" << endl;

        cout << "Player Name : " << p.name << endl;
        cout << "Final Score : " << p.score
             << "/" << questions.size() << endl;


        // ================= FILE HANDLING MODULE =================

        ofstream file("results.txt", ios::app);

        if (file.is_open())
        {
            file << p.name << " - Score: "
                 << p.score << "/" << questions.size()
                 << endl;

            file.close();

            cout << "Result saved successfully!" << endl;
        }
        else
        {
            cout << "Unable to save result!" << endl;
        }
    }
};


// ===================== MODULE 4: MAIN / STARTING QUIZ =====================

int main()
{
    string name;

    cout << "====================================" << endl;
    cout << "          QUIZ GAME SYSTEM          " << endl;
    cout << "====================================" << endl;

    cout << "Enter Player Name: ";
    getline(cin, name);

    Player player(name);

    Quiz quiz;

    quiz.startQuiz(player);

    cout << "\nThank you for playing!" << endl;

    return 0;
}