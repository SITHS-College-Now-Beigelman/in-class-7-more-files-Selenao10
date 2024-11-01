//Selena Ouyang 
//Lab #7
//10-31-2024

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{   
    //Declare stream variables
    ifstream inFile;
    ofstream outFile;

    //declaring variables to manipulate data
    double average,scoreOne, scoreTwo, scoreThree;
    string name;

    //opening files
    inFile.open("game_score.txt");
    outFile.open("results.txt");

    
    inFile >> name >> scoreOne >> scoreTwo >> scoreThree; //initialize the loop control variable 

    //while the end of inFile has not been reached yet 
     while (inFile) {

        //Given that Score one is 20% of the player’s average, score two is 30% of the player’s average and score three is 50% of the player’s average: 
        average = 0.2*scoreOne + 0.3*scoreTwo + 0.5*scoreThree; //evaluating the average
         
        //setting conditions for the average 
        if (average > 2000) //if the average is greater than 2000
            outFile << "Player: " << name << endl << "Average: " << average << endl
            << "Congrats! You are an Expert!" << endl << endl; 
            
        if (average >= 1800 && average <= 2000) //if the average is 1800 to 2000
            outFile << "Player: " << name << endl << "Average: " << average << endl 
            << "Master - Good Job!" << endl << endl;

        if(average >= 1500 && average <= 1800) //if the average is 1500 to 1800
            outFile << "Player: " << name << endl << "Average: " << average << endl << 
            "Advanced - Good Job!" << endl << endl;

        if (average >= 1000 && average <= 1500) //if the average is 1000 to 1500
            outFile << "Player: " << name << endl << "Average: " << average << endl << 
                "Intermediate" << endl << endl; 

        if (average < 1000) //if the average is less than 1000
            outFile << "Player: " << name << endl << "Average: " << average << endl << 
            "Beginner - Keep Practicing!" << endl << endl;
         
        inFile >> name >> scoreOne >> scoreTwo >> scoreThree; //update the loop control variable
    }
    
    // Close the file when finished
    inFile.close(); 
    outFile.close();
    
    return 0;
}
/*
Player: Simon
Average: 1270
Intermediate

Player: Albert
Average: 1880
Master - Good Job!

Player: Alvin
Average: 2662
Congrats! You are an Expert!
*/
