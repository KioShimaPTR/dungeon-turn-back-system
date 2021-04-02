//Search:

	BYTE			skill_group;

//Add below:

	long			d_map_index;

//Search:

};

ESex GET_SEX(LPCHARACTER ch);

//Add on:

	public:
		long	GetPlayerDungeonIndex()	{ return m_points.d_map_index; }
		void	SetPlayerDungeonIndex(long vnum)	{ m_points.d_map_index = vnum; }