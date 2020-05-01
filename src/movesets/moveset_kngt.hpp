#ifndef __KNIGHT_MS__
#define __KNIGHT_MS__

// Loops through all possible knight move combinations
// (+- x , +- y) where x, y element of {+- 1, +- 2} && |x| != |y| 

void kngt_moves(std::vector<std::vector<int>> &_vec, int &_team, int _coord, bool king_check){
	
	int temp_coord;
	int temp_rank;
	int temp_team;

	for(int x = -2; x < 3; x++){
		if(x!=0){
			for(int y = -2; y < 3; y++){
				if(y!=0 && abs(x)!=abs(y)){
					if(
						!wrapping_x(_coord, x)
						&&
						!out_bounds_y(_coord, y)
						&&
						!team_obstruction(_coord + x + (8*y), _team)
						) {
						_vec.push_back(std::vector<int>{x, y});
						
						temp_coord = _coord + x + (8*y);
						temp_team = main_board.at(temp_coord).get_tenant_team();
						temp_rank = main_board.at(temp_coord).get_tenant_rank();

						if(king_check && temp_team != _team && temp_rank == 3 ){
							if(_team == 1){
								check_vec_w.push_back(0);
							} else {
								check_vec_b.push_back(0);
							}
						}
					}
				}
			}
		}
	}
}




#endif