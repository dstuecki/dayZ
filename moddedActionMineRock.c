modded class ActionMineRock
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
		protected ItemBase 	m_MainItem;

		float UniqueRand = Math.RandomFloatInclusive(0.0, 1.0);

		if (UniqueRand >= 0.95)
		{
			m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGoldnugget", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
		}
		else if (UniqueRand >= 0.85)
		{
			float Faktor2 = Math.RandomFloatInclusive(0.0, 1.0);
			if (Faktor2 >= 0.50)
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem8_Opal", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
			else 
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem7_Bronzid", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
		}
		else if (UniqueRand >= 0.65)
		{
			float Faktor3 = Math.RandomFloatInclusive(0.0, 1.0);
			if (Faktor3 >= 0.33)
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem4_Saphir", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
			else if (Faktor3 >= 0.66)
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem5_Turmalin", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
			else
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem6_Howlith", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
		}
		else if (UniqueRand >= 0.35)
		{
			float Faktor4 = Math.RandomFloatInclusive(0.0, 1.0);
			if (Faktor4 >= 0.33)
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem1_Malachit", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
			else if (Faktor4 >= 0.66)
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem2_Rubin", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
			else
			{
				m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("AuroraGem3_Argonit", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			}
		}
		else
		{
			m_MainItem = ItemBase.Cast(GetGame().CreateObjectEx("Stone", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
		}


		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
};
