#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int guess, num, tries = 0;

    srand(time(0));

    num = rand() % 100 + 1;
    cout << "\n" << endl;

    cout << "                    Welcome!!                    " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "             Guess the number Game\n\n";

    while (guess != num){
        cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

        if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    }


    return 0;
}