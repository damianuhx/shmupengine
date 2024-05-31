//eigne schüsse auf gegner
list<Move*>* firstlist = &shotlist;
list<Move*>* secondlist = &targetlist;
#include "test_loop.h"

//shiff auf gegner
firstlist = &hitlist;
secondlist = &targetlist;
#include "test_loop.h"

//shiff auf bullets
firstlist = &bulletlist;
secondlist = &hitlist;
#include "test_loop.h"



//laser auf bullets
firstlist = &bulletlist;
secondlist = &laserlist;
#include "test_loop.h"

hitlist.clear();
shotlist.clear();
bulletlist.clear();
targetlist.clear();
laserlist.clear();


