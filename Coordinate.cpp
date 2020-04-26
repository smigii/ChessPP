#include "Coordinate.hpp"

Coordinate::Coordinate(int _x, int _y, char _c)
: pos_x{_x}, pos_y{_y}, default_charset{_c}, charset{_c}, tenant{nullptr} {

}

int Coordinate::get_x(){
	return pos_x;
}
int Coordinate::get_y(){
	return pos_y;
}


char Coordinate::get_charset(){
	return charset;
}
void Coordinate::set_charset(char _c){
	charset = _c;
}
void Coordinate::reset_charset(){
	charset = default_charset;
}

void Coordinate::print_generic(){
	std::cout << get_charset() << get_charset() << get_charset();
}
void Coordinate::print_unique(){
	std::cout << get_charset() << get_tenant_symbol() << get_charset();
}

char Coordinate::get_tenant_symbol(){
	if(!tenant){
		return get_charset();
	} else {
		return tenant -> get_symbol();
	}
}
void Coordinate::set_tenant(Piece* ptr){
	tenant = ptr;
}
void Coordinate::move_tenant(Coordinate &new_coord){
	new_coord.set_tenant(tenant);
	set_tenant(nullptr);
}