// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h" //not necessary
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <cmath>
#include <cctype>
#include <sstream>



class ttt{
    public:
        std::string a,b,c,d,e,f,g,h,i;
};
void stars() {
	for (int i = 0; i <= 10; ++i) { std::cout << "*"; }
	return;
}
void locations(std::string input){
    ttt alpha;
    ttt beta;
    ttt delta;
    ttt gamma;
    ttt epsilon;
    ttt pi;
    ttt sigma;
    ttt kapa;
    ttt ro;
    int x = rand();
    stars();
    if (input == "1"){
            alpha.a = "X";
            while (true){
                if (x%2 == 0|| x%5 == 0 || x%4 == 0){
                        if (x%2 == 0){
                            alpha.b = "O";
                            stars();
                            std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n 4 | 5 | 6 \n 7 | 8 | 9 \n";
                            stars();
                            std::cout << "Enter another position here: ";
                            while (true){
                                std::cin >> input;
                                if (input == "1" || input == "2") {
                                    std::cout << "Please try another input: ";
                                }
                                else if(input == "3"){}
                                else if(input == "4"){}
                                else if(input == "5"){}
                                else if(input == "6"){}
                                else if(input == "7"){}
                                else if(input == "8"){}
                                else if(input == "9"){
                                        alpha.i = "X";
                                        while (true) {
                                            if (x%5 == 0){
                                                alpha.e = "O";
                                                stars();
                                                std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n 4 | "<< alpha.e << " | 6 \n 7 | 8 | " << alpha.i << " \n";
                                                stars();
                                                std::cout << "Enter another position here: ";
                                                while (true){
                                                    std::cin >> input;
                                                    if (input == "1" || input == "2" || input == "9" || input == "5"){
                                                        std::cout << "Please try another input: ";
                                                    }
                                                    else if(input == "3"){
                                                        alpha.c = "X";
                                                        while (true){
                                                            if (x%8 ==0){
                                                                alpha.h = "O";
                                                                stars();
                                                                std::cout << "\n" << alpha.a << " | " << alpha.b << " | " << alpha.c << " \n 4 | "<< alpha.e << " | \n 7 | " << alpha.h << " | " << alpha.i << " \n";
                                                                stars();
                                                                std::cout << "You lose! - Dominic";
                                                                return exit(0);

                                                            }
                                                            else if (x%8 != 0){}
                                                            x = rand();

                                                        }
                                                    }
                                                    else if(input == "4"){
                                                        alpha.d = "X";
                                                        while (true){
                                                            if (x%8 ==0){
                                                                alpha.h = "O";
                                                                stars();
                                                                std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n " << alpha.d << " | "<< alpha.e << " | 6 \n 7 | " << alpha.h << " | " << alpha.i << " \n";
                                                                stars();
                                                                std::cout << "You lose! - Dominic";
                                                                return exit(0);

                                                            }
                                                            else if (x%8 != 0){}
                                                            x = rand();

                                                        }
                                                    }
                                                    else if(input == "6"){
                                                        alpha.f = "X";
                                                        while (true){
                                                            if (x%8 ==0){
                                                                alpha.h = "O";
                                                                stars();
                                                                std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n 4 | "<< alpha.e << " | " << alpha.f <<  "\n 7 | " << alpha.h << " | " << alpha.i << " \n";
                                                                stars();
                                                                std::cout << "You lose! - Dominic";
                                                                return exit(0);

                                                            }
                                                            else if (x%8 != 0){}
                                                            x = rand();

                                                        }
                                                    }
                                                    else if(input == "7"){
                                                        alpha.g = "X";
                                                        while(true){
                                                            if (x%8 == 0){
                                                                alpha.h = "O";
                                                                stars();
                                                                std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n 4 | "<< alpha.e << " | 6 \n "<< alpha.g << " | " << alpha.h << " | " << alpha.i << "\n";
                                                                stars();
                                                                std::cout << "You lose! - Dominic";
                                                                return exit(0);
                                                            }
                                                            else if (x%3 != 0 || x%4 != 0 || x%6 != 0 || x%8 != 0){
                                                                x = rand();
                                                                }

                                                            }
                                                    }
                                                    else if(input == "8"){
                                                        alpha.h = "X";
                                                        if (x%7 == 0){
                                                            alpha.g = "O";
                                                            stars();
                                                            std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n 4 | "<< alpha.e << " | 6 \n "<< alpha.g << " | " << alpha.h << " | " << alpha.i << " \n";
                                                            stars();
                                                            std::cout << "Enter another position here: ";
                                                            while (true){
                                                                std::cin >> input;
                                                                if (input == "1" || input == "2" || input == "5" || input == "7" || input == "8" || input == "9"){
                                                                    std::cout << "Please try another input: ";
                                                                }
                                                                else if (input == "3"){
                                                                    alpha.c = "X";
                                                                    stars();
                                                                    std::cout << "\n" << alpha.a << " | " << alpha.b << " | " << alpha.c << "\n 4 | " << alpha.e << " 6 \n " << alpha.g << " | " << alpha.h << " | " << alpha.i;
                                                                    stars();
                                                                    std::cout << "Looks like it's a draw. The program will end now since I really don't want to create another loop for this to keep it going....";
                                                                }
                                                                else if (input == "4"){
                                                                    alpha.d = "X";
                                                                    alpha.c = "O";
                                                                    stars();
                                                                    std::cout << "\n" << alpha.a << " | " << alpha.b << " | 3 \n " << alpha.d << " | " << alpha.e << " 6 \n " << alpha.g << " | " << alpha.h << " | " << alpha.i;
                                                                    stars();
                                                                    std::cout << "game over! -Dominic";
                                                                    return exit(0);
                                                                }
                                                                else if (input == "6"){
                                                                    alpha.f = "X";
                                                                    alpha.c = "O";
                                                                    stars();
                                                                    std::cout << "\n" << alpha.a << " | " << alpha.b << " | " << alpha.c << "\n 4 | " << alpha.e << " | " << alpha.f <<  "\n " << alpha.g << " | " << alpha.h << " | " << alpha.i;
                                                                    stars();
                                                                    std::cout << "Game over! -Dominic";
                                                                    return exit(0);

                                                                }
                                                            }
                                                        }
                                                        else if(x%7 != 0)
                                                            x = rand();
                                                    }
                                                }
                                            }
                                            else if (x%5 != 0){
                                                x = rand();
                                                }
                                    }
                                }

                            }
                        }
                        else if (x%5 == 0){
                            alpha.e = "O";
                            std::cout << "\n " << alpha.a << " | 2 | 3 \n 4 | " << alpha.e << " | 6 \n 7 | 8 | 9 \n";
                        }
                        else if (x%4 == 0){
                            alpha.d = "O";
                            std::cout << "\n 1 | 2 | 3 \n " << alpha.d << " | 5 | 6 \n 7 | 8 | 9 \n";
                        }
                }
                else if(x%2 != 0|| x%5 != 0 || x%4 != 0) {
                    x = rand();
                }
            }
    }
    else if (input == "2"){
            beta.b = "X";
    }
    else if (input == "3"){
            delta.c = "X";
    }
    else if (input == "4"){
            gamma.d = "X";
    }
    else if (input == "5"){
            epsilon.e = "X";
    }
    else if (input == "6"){
            pi.f = "X";
    }
    else if (input == "7"){
            sigma.g = "X";
    }
    else if (input == "8"){
            kapa.h = "X";
    }
    else if (input == "9"){
            ro.i = "X";
    }
}
int main(){
	std::string input;
	std::cout << "Hi! Welcome to this game of tic tac toe. Below is a chart of the game. \n Out of simplicity you will go first.";
	std::cout << "Enjoy :) \n";
	stars();
	std::cout << "\n 1 | 2 | 3 \n 4 | 5 | 6 \n 7 | 8 | 9 \n";
	stars();
	std::cout << "\n Remember that by entering \"exit\" you can exit the program anytime. \n this can contain caps if you are that crazy.... \n";
	while (true){
        std::cout << "Enter your input here: ";
	    std::cin >> input;
	    for (int i = 0; i <= input.length(); ++i){
	        input[i] = tolower(input[i]);
    }
		if (input == "exit") {
			return 0;
		}
		else if (input != "exit" &&  input != "1" &&  input != "2" &&  input != "3" &&  input != "4" &&  input != "5" &&  input != "6" &&  input != "7" &&  input != "8" &&  input != "9"){
			std::cout << "Please input a valid respond...! \n";
		}
		else if (input == "1"||  input == "2" ||  input == "3" ||  input == "4" ||  input == "5" ||  input == "6" ||  input == "7" ||  input == "8" ||  input == "9"){
            locations(input);
		}
	}

	return 0;
}
