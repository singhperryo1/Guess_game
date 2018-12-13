// Project Source Flie
#include<iostream>
#include<cstdlib>
#include"Bag.h"
#include<time.h>

using namespace std;

int main()
{
	Bag myBag;

	int selection = 0;
	while (selection != 4) {
		cout << "Please select from the following options: 1,2,3 or 4\n";
		cout << " ___________________________________________________\n";
		cout << "| 1. Enter then Display numbers in descending order |\n";
		cout << "| 2. Guessing Game                                  |\n";
		cout << "| 3. Name of Developer                            |\n";
		cout << "| 4. Exit                                           |\n";
		cout << "|___________________________________________________|\n";
		cin >> selection;
		switch (selection) {
		case 1:
		{
			int a, counter = 1;
			cout << "Please enter 12 integers." << endl;
			cout << " " << endl;
			for (int i = 0; i < 12; i++) {
				cout << counter;
				cout << ". Please enter an integer: ";
				cin >> a;
				myBag.add(a);
				counter++;
			}
			cout<<endl;
			cout<<"The integers in descending order are :"<<endl ;
			for (int i = 0; i < 12; i++) {
				cout << myBag.getMax() << endl;
				myBag.remove(myBag.getMax());
				if (myBag.isEmpty() == true)
					break;
			}
			cout << "The size of the bag now is: " << myBag.getSize() << endl;
			cout << " " << endl;
			myBag.display();
			break;
		}
		case 2:
		{
			//myBag.clear();
			srand(time(0));
			for (int i = 0; i < 6; i++) {
				myBag.add(rand() % 100);
			};
			int guess = 0;
			int attempts = 1;
			int score = 0;
			cout << "Welcome to the guessing game!" << endl;
			cout << " " << endl;
			for (int i = 0; i < 10; i++) {
				cout << attempts;
				cout << ". Please make a guess" << endl;
				cout << "Guess: ";
				cin >> guess;
				cout << " " << endl;
				if (myBag.contains(guess) == true) {
					cout << "Congratulations you got it!!" << endl;
					cout << " " << endl;
					score += 10;
					myBag.remove(guess);
					if (myBag.isEmpty() == true) {
						cout << "Congratulations you've emptied the entire bag" << endl;
						cout << " " << endl;
						cout << "GAME OVER" << endl;
						cout << " " << endl;
						score += 200;
						break;
					}
				}
				else {
					cout << "Sorry you did not guess correctly. Please try again!" << endl;
				}
				attempts++;
				cout << " " << endl;
			}
			cout << "Total score is " << score << endl;

			break;
		}
		case 3:
		{
			cout << "Thank you for choosing the developers page " << endl;
			cout << "Gangandeep Singh " << endl;

			break;
		}
		case 4:
			cout << " Have a nice day, BYE BYE!" << endl;
			break;
		default:
			cout << "Sorry, there were only 4 options. 1,2,3 or 4 " << selection << endl;
			cout << "XXXXXXXXXX    XXXXXXXXXXX    XXXXXXXXXX      XXXXXX      XXXXXXXXXX" << endl;
			cout << "XXXXXXXXXX	   XXX     XXX    XXX    XXX    XXX    XXX    XXX    XXX" << endl;
			cout << "XX            XXX   XXXX     XXX   XXXX   XX        XX   XXX   XXXX" << endl;
			cout << "XX            XXXXXXXX       XXXXXXXX     XX        XX   XXXXXXXX" << endl;
			cout << "XXXXXXXX      XXXXXXXXXXX    XXXXXXXXXX   XX        XX   XXXXXXXXXX" << endl;
			cout << "XX            XXX     XXX    XXX     XXX  XX        XX   XXX     XXX" << endl;
			cout << "XX            XXX     XXX    XXX     XXX  XX        XX   XXX     XXX" << endl;
			cout << "XXXXXXXXXX    XXX      XXX   XXX      XXX  XXX    XXX    XXX      XXX" << endl;
			cout << "XXXXXXXXXX    XXX      XXX   XXX      XXX    XXXXXX      XXX      XXX" << endl;

		}

	}
	system("pause");
	return 0;
}



