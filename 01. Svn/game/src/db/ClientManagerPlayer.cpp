//Search:

		"horse_skill_point = %d, "

//Add below:

		"d_map_index = %d, "

//Search:

		pkTab->horse_skill_point)

//Change:

		pkTab->horse_skill_point,
		pkTab->d_map_index)

//Search:

		snprintf(queryStr, sizeof(queryStr),
			"SELECT "
			"id,name,job,voice,dir,x,y,z,map_index,exit_x,exit_y,exit_map_index,hp,mp,stamina,random_hp,random_sp,playtime,"
			"gold,level,level_step,st,ht,dx,iq,exp,"
			"stat_point,skill_point,sub_skill_point,stat_reset_count,part_base,part_hair,"
			"skill_level,quickslot,skill_group,alignment,horse_level,horse_riding,horse_hp,horse_hp_droptime,horse_stamina,"
			"UNIX_TIMESTAMP(NOW())-UNIX_TIMESTAMP(last_play),horse_skill_point"
			" FROM player%s WHERE id=%d",
			GetTablePostfix(), packet->player_id);

//Change:

		snprintf(queryStr, sizeof(queryStr),
			"SELECT "
			"id,name,job,voice,dir,x,y,z,map_index,exit_x,exit_y,exit_map_index,hp,mp,stamina,random_hp,random_sp,playtime,"
			"gold,level,level_step,st,ht,dx,iq,exp,"
			"stat_point,skill_point,sub_skill_point,stat_reset_count,part_base,part_hair,"
			"skill_level,quickslot,skill_group,alignment,horse_level,horse_riding,horse_hp,horse_hp_droptime,horse_stamina,"
			"UNIX_TIMESTAMP(NOW())-UNIX_TIMESTAMP(last_play),horse_skill_point,d_map_index" //-> d_map_index
			" FROM player%s WHERE id=%d",
			GetTablePostfix(), packet->player_id);
