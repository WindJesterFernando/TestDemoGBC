//
//  main.cpp
//  LearnC++
//
//  Created by Fernando  Restituto on 2022-10-07.
//

#include <iostream>
#include <cstdlib>
//#include <chrono>
//
//
//
//#include <chrono>
using namespace std::chrono;
using namespace std;



//#include <chrono>
//#include <iostream>
//#include <sys/time.h>
//#include <ctime>

//using std::cout;
//using std::endl;
//using std::chrono::duration_cast;
//using std::chrono::milliseconds;
//using std::chrono::seconds;
//using std::chrono::system_clock;

//
//void Update(long long deltaTime)
//{
//    cout << "function call\n";
//    cout << "delta time == " << deltaTime << "\n";
//}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    string playerName1;
    string playerName2;
    int numberForPlayersToTryAndGuess = -1;
    bool isPlayer1Turn;
    int numberGuessedByPlayer = 0;
    
    
    
    
    cout << "Hello, World!, in the year 2000\n";
    cout << "Welcome to my awesome game, very much awesome\n";
    cout << "Enter player one's name...\n";
    cin >> playerName1;
    cout << "Enter player two's name...\n";
    cin >> playerName2;
    cout << "Player one's name is " << playerName1 << "\n";
    cout << "Player two's name is " << playerName2 << "\n";
    
    
    srand (time(NULL));
    
    numberForPlayersToTryAndGuess = rand() % 100 + 1;
    
    
//    for(int i = 0; i < 1000; i++)
//    {
        if(rand() % 2 == 1)
            isPlayer1Turn = true;
        else
            isPlayer1Turn = false;
        
//        cout << isPlayer1Turn << "\n";
//    }
//
    
    
    
    while (numberGuessedByPlayer != numberForPlayersToTryAndGuess)
    {
        if(isPlayer1Turn)
            cout << playerName1 << " please guess a number between 100 and 1\n";
        else
            cout << playerName2 << " please guess a number between 100 and 1\n";
        
        cin >> numberGuessedByPlayer;
        
        
       // cout << numberGuessedByPlayer << "\n";
        
        
        if(numberGuessedByPlayer > 100 || numberGuessedByPlayer < 1)
        {
            if(isPlayer1Turn)
                cout << playerName1 << " my dude, you didnt enter a valid guess, try again\n";
            else
                cout << playerName2 << " my dude, you didnt enter a valid guess, try again\n";
        }
        else if(numberGuessedByPlayer < numberForPlayersToTryAndGuess)
        {
            if(isPlayer1Turn)
                cout << playerName1 << " you guessed low\n";
            else
                cout << playerName2 << " you guessed low\n";
            
            isPlayer1Turn = !isPlayer1Turn;
        }
        else if(numberGuessedByPlayer > numberForPlayersToTryAndGuess)
        {
            if(isPlayer1Turn)
                cout << playerName1 << " you guessed high\n";
            else
                cout << playerName2 << " you guessed high\n";
            
            isPlayer1Turn = !isPlayer1Turn;
        }
        else
        {
            if(isPlayer1Turn)
                cout << playerName1 << " Correct\n";
            else
                cout << playerName2 << " correct\n";
        }
        
        
        
//
//
//
//        Get input and store in numberGuessed
//
//
//        If number guessed is greater than 100 OR if number guessed is less than 0
//            Print “bruh!  Input a number between 0 and 100”
//        Else If number guessed is less than numberForPlayersToGuess
//        Print “you guessed to low”
//        Set isPlayer1Turn to NOT isPlayer1Turn (isPlayer1Turn = !isPlayer1Turn;)
//        Else If number guessed is greater than numberForPlayersToGuess
//            Print “you guessed to high”
//        Set isPlayer1Turn to NOT isPlayer1Turn (isPlayer1Turn = !isPlayer1Turn;)
//        Else
//        Print “you guessed correct”

        
        
    }
    
    cout << "press any key to exit\n";
    
    
    
    
    
    return 0;
    
    
    
    
    //SAMPLE CODE
    
    
    //
    //    for(int i = 0; i < 1000; i++)
    //    {
    //        numberForPlayersToTryAndGuess = rand() % 100 + 1;
    //
    //        cout << numberForPlayersToTryAndGuess << "\n";
    //    }
    
    
    
    
    
    
    //
    
    //    srand (time(NULL));
    //    cout << "Hello, World!, in the year 2000\n";
    //
    //    for (int i = 0; i < 10; i++)
    //    {
    //        cout << "rng == " <<  rand() << "\n";
    //    }
    
    //cout << time(NULL) << "\n";
    //
    //    auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    //
    //    auto lastTime = millisec_since_epoch;
    //
    //    while (true) {
    //
    //
    //        millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    //
    //
    //        auto deltaTime = millisec_since_epoch - lastTime;
    //
    ////        cout << "millisec_since_epoch == " << millisec_since_epoch << " - " << lastTime << "\n";
    //
    //        lastTime = millisec_since_epoch;
    //        //cout << "milliseconds since epoch: " << millisec_since_epoch << endl;
    //
    //
    //        Update(deltaTime);
    //    }
    
    
}


