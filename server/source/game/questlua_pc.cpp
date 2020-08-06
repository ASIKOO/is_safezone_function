Search:
-------------------------

	int pc_is_gm(lua_State* L)
	{
		LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();
		lua_pushboolean(L, ch->GetGMLevel() >= GM_HIGH_WIZARD);
		return 1;
	}
 
Add:
-------------------------

#ifdef ENABLE_SAFEZONE_FUNCTION
	int pc_is_safezone(lua_State* L)
	{
		LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();
		lua_pushboolean(L, (!ch->GetSectree() || ch->GetSectree()->IsAttr(ch->GetX(), ch->GetY(), ATTR_BANPK)));
		return 1;
	}
#endif

Search:
-------------------------

			{ "is_gm",			pc_is_gm		},

Add:
-------------------------

#ifdef ENABLE_SAFEZONE_FUNCTION
			{ "is_safezone",			pc_is_safezone		},
#endif
