// bunch of offsets not updated so yeah :(

bool yes = true;
DWORD rbx;

int top_off = 0;
int base_off = 0;

int network_dm = 0;
int game_loaded = 0;

int identity1 = 0;
int identity2 = 0;

int namecallmethod_off = 0;

//lua

int R_LUA_TUSERDATA =      0;
int R_LUA_TFUNCTION =      0;
int R_LUA_TSTRING =        0;
int R_LUA_TBOOLEAN =       0;
int R_LUA_TNUMBER =        0;
int R_LUA_TTABLE =         0;
int R_LUA_TNIL =           0;
int R_LUA_TTHREAD =        0;
int R_LUA_TLIGHTUSERDATA = 0;

//other junk

DWORD script_context = (0x0); //needs aslr
DWORD getdatamodel_1 = (0x0);
DWORD getdatamodel_2 = (0x0);

DWORD lua_state_rbx(DWORD rbx); //not coded lol

//basic c functions

DWORD rlua_getfield = (0x0);
DWORD rlua_setfield = (0x0);
DWORD rlua_pushboolean = (0x0);
DWORD rlua_pushstring = (0x0);
DWORD rlua_pushnil = (0x0);
DWORD rlua_pushvalue = (0x0);
DWORD rlua_settop = (0x0);
DWORD rlua_gettop = (0x0);
DWORD rlua_pcall = (0x0);
