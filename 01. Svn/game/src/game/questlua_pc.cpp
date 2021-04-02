//Search:

	void RegisterPCFunctionTable()

//Add on:

	int pc_get_dungeonindex(lua_State* L)
	{
		lua_pushnumber(L, CQuestManager::instance().GetCurrentCharacterPtr()->GetPlayerDungeonIndex());
		return 1;
	}

	int pc_set_dungeonindex(lua_State* L)
	{
		if (!lua_isnumber(L, 1))
		{
			sys_err("invalid argument");
			return 0;
		}
		else
		{
			long newIndex = lua_tonumber(L, 1);
			LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();

			ch->SetPlayerDungeonIndex(newIndex);

			return 0;
		}
	}

//Search:

			{ NULL,			NULL			}

//Add on:

			{"get_dungeonindex", pc_get_dungeonindex},
			{"set_dungeonindex", pc_set_dungeonindex},