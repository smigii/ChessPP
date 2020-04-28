#ifndef __PAWN_MS__
#define __PAWN_MS__


void pawn_moves(std::vector<std::vector<int>> &_vec, int &_team, int _coord){
	// check if a team or enemy piece is blocking one tile ahead
	if(
		!team_obstruction(_coord + (8*_team), _team)
	  	&&
	  	!enmy_obstruction(_coord + (8*_team), _team)
  	) 	{
			_vec.push_back(std::vector<int>{0, _team*1});
			
			// check if a team or enemy piece is blocking two tiles ahead
			// and checks if this is the piece's first move
			if(main_board.at(_coord).get_tenant_first_move()){
				if(
					!team_obstruction(_coord + (16*_team), _team)
			   		&&
			   		!enmy_obstruction(_coord + (16*_team), _team)
					) {
						_vec.push_back(std::vector<int>{_team*0, _team*2});
				}
			}
	}

	// Checking if the pawn can capture a diagonal enemy
	// without wrapping around the board
	
	// Also checks for special case where White H7 / coord 55 or 
	// Black A2 / coord 8, prevents out of bounds vector index
	if(
		_coord != 31.5+(_team*23.5)
		&&
		main_board.at(_coord + (9 * _team)).get_tenant_team() == _team*-1
		&&
		(_coord + (_team > 0)) % 8 != 0
		) 	{
				_vec.push_back(std::vector<int>{_team*1, _team*1});
			}
	if(
		main_board.at(_coord + (7 * _team)).get_tenant_team() == _team*-1
		&&
		(_coord + ((_team*-1) > 0)) % 8 != 0
		) 	{
				_vec.push_back(std::vector<int>{_team*-1, _team*1});
	}
				
}




#endif