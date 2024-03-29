#ifndef __BOARD_DRAW__
#define __BOARD_DRAW__


void draw_board(){
	std::cout << GAME_COL << "                   ~ CHESS ~\n";
	std::cout << GAME_COL << "      A    B    C    D    E    F    G    H" << std::endl;
	for(int i = 7; i >= 0; i--){
		for(int j = 0; j < 3; j++){
			if(j == 0 || j == 2){
					std::cout << GAME_COL << "   |";
				} else {
					std::cout << GAME_COL << " " << i+1 << " |";
			}
			for(int k = 0; k < 8; k++){
				if(j == 0 || j == 2){
					main_board.at((i*8) + k).print_generic();
				} else {
					main_board.at((i*8) + k).print_unique();
				}
			}
			if(j == 0 || j == 2){
					std::cout << GAME_COL << "|   ";
				} else {
					std::cout << GAME_COL << "| " << i+1 << " ";
			}
			std::cout << std::endl;	
		}
	}
	std::cout << "      A    B    C    D    E    F    G    H" << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------------------" << std::endl << std::endl;
}

#endif