#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void printZameen() {
    const int w = 50;      
    const int h = 10; 
    bool isJumping = false; 
    int dinoY = h - 2; 
    int jumph = 3;     
    int groundLength = w;
    int currentJumph = 0;
    bool goingUp = true;      
    int score = 0;            
    int difficulty = 200;
    
    vector<int> treePositions;
    int passedTrees = 0; 

    srand(time(0));

    for (int i = 10; i < w; i++) {
        if (rand() % 20 == 0 ) {
            treePositions.push_back(i);
        }
    } 

    while (true) {
        if (score == 0) {
            system("cls"); 
        }

        cout << "Score: " << score << endl;

        for (int i = 0; i < h - 1; i++) {
            if (i == dinoY - currentJumph) {
                cout << "D";
            } 
            else {
                cout << endl;
            }
        }

        for (int i = 0; i < groundLength; i++) {
            if (find(treePositions.begin(), treePositions.end(), i) != treePositions.end()) {
                cout << "T";
            } 
            else {
                cout << "_";
            }
        }
        cout << endl;

        if (kbhit() && getch() == ' ') {
            if (!isJumping) {
                isJumping = true;
                currentJumph = 0;
                goingUp = true;
            }
        }

        if (isJumping) {
            if (goingUp) {
                currentJumph++;
                if (currentJumph >= jumph) {
                    goingUp = false; 
                }
            }
            else {
                currentJumph--;
                if (currentJumph <= 0) {
                    isJumping = false;
                }
            }
        }

        for (int &treePos : treePositions) {
            treePos--;
        }

        for (int treePos : treePositions) {
            if (treePos == 0 && dinoY - currentJumph == h - 2) {
                cout << "\nGame Over :( \nFinal Score: " << score << endl;
                return; 
            }
        }

        for (auto it = treePositions.begin(); it != treePositions.end();) {
            if (*it == 0) {
                passedTrees++;
                it = treePositions.erase(it); 
            } 
            else {
                ++it;
            }
        }

        if (passedTrees > score) {
            score = passedTrees;
        }

        if (score > 0 && score % 100 == 0) {
            difficulty = max(50, difficulty - 10); 
        }

        // if (rand() % 100 < 10) { 
        if (rand() % 100 < 10) { 
            treePositions.push_back(w - 1); 
        }

        if (score > 0 && score % 50 == 0) {
            treePositions.push_back(w - 1); 
        }
         if (rand() % 100 < 10) { 
            if (treePositions.empty() || treePositions.back() < w - 5) {
                treePositions.push_back(w - 1); 
            }
        }
        Sleep(difficulty); 
        system("cls"); 
    }
}

int main() {
    printZameen();
    
    return 0;
}