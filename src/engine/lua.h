#ifndef ENGINE_EXTERNAL_LUA_H
#define ENGINE_EXTERNAL_LUA_H

#include "kernel.h"
#include "lua_include.h"

class ILua : public IInterface
{
	MACRO_INTERFACE("lua", 0)

public:
	virtual lua_State *L() = 0;
	virtual lua_State *L() const = 0;
};

#endif
