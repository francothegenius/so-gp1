#include "types.h"
#include "user.h" 
#include "date.h"
//aplicacion de usuario
int
main(int argc, char *argv[])
{
	struct rtcdate r;
	
	date(&r);
		//codigo para imprimir fecha
		printf(1, "%d/%d/%d %d: %d: %d\n", r.month, r.day, r.year, r.hour, r.minute, r.second);
		
	
	exit();
}