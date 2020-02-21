#include <iostream>
#include <fstream>
#include <string>

//class Square {
//public:
//	int xCord;
//	int yCord;
	

//
//};


void top_border() {
	std::cout << "\n   .-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n";
};
void row_eight() {
	std::string top =  "8  |     |     |     |     |     |     |     |     |\n";
	std::string bottom = "   |_____|_____|_____|_____|_____|_____|_____|_____|\n";
	std::string row = top + bottom;
	std::cout << row;
};
void row_seven() {
	std::cout << "7  |     |     |     |     |     |     |     |     |\n";
	std::cout << "   !_____|_____|_____|_____|_____|_____|_____|_____!\n";
};
void row_six() {
	std::cout << "6  :     |     |     |     |     |     |     |     :\n";
	std::cout << "   :_____|_____|_____|_____|_____|_____|_____|_____:\n";
};
void row_five() {
	std::cout << "5  .     |     |     |     |     |     |     |     .\n";
	std::cout << "   ._____|_____|_____|_____|_____|_____|_____|_____.\n";
};
void row_four() {
	std::cout << "4  :     |     |     |     |     |     |     |     :\n";
	std::cout << "   :_____|_____|_____|_____|_____|_____|_____|_____:\n";
};
void row_three() {
	std::cout << "3  !     |     |     |     |     |     |     |     !\n";
	std::cout << "   |_____|_____|_____|_____|_____|_____|_____|_____|\n";
};
void row_two() {
	std::cout << "2  |     |     |     |     |     |     |     |     |\n";
	std::cout << "   |_____|_____|_____|_____|_____|_____|_____|_____|\n";
};
void row_one() {
	std::cout << "1  |     |     |     |     |     |     |     |     |\n";
	std::cout << "   |     |     |     |     |     |     |     |     |\n";
};
void bottom_border() {
	std::cout << "   `-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-'\n";
	std::cout << "      a     b     c     d     e     f     g     h  \n";
}

void blank_grid() {
	top_border();
	row_eight();
	row_seven();
	row_six();
	row_five();
	row_four();
	row_three();
	row_two();
	row_one();
	bottom_border();
};
char place_dot_prompt(char x_in, int y_in) {
	char x_in; int y_in;
	std::cout << "X COORDINATE:\n>>>";
	std::cin >> x_in;
	std::cout << "Y COORDINATE:";
	std::cin >> y_in;
	std::cout << "I'll try to place the dot at " << x_in << y_in << ".";
}

//void place_dot() {
	//;
//
//}

//void text_options(string prompt,string options,string failure) {
//	std::cin >> prompt;
//	if (prompt) not in 
//}

int main() {
	//Square.xCord
	blank_grid();
	place_dot_prompt(x_in, y_in);
return 0;
};
