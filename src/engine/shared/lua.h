#ifndef ENGINE_SHARED_LUA_H
#define ENGINE_SHARED_LUA_H

#include <engine/lua.h>

class CLua : public ILua
{
	lua_State *m_pLuaState;

public:
	CLua() : m_pLuaState(NULL) {}

	lua_State *L() { return m_pLuaState; }
	lua_State *L() const { return m_pLuaState; }

};

#endif
