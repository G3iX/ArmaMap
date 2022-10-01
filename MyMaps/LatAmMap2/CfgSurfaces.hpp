class CfgSurfaces
{
	class Default {};
	class CoastalGrass_surface: Default
	{
		files = "gdt_beach*"; 
		rough = 0.1; 
		dust = 1; 
		soundEnviron = "sand"; 
		character = "none_Character"; //CfgSurfaceCharacters
		soundHit = "soft_ground"; 
	};
	class Grass2_surface: Default
	{
		files = "gdt_grass_tall*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "grass";
		character = "Grass_Character";
		soundHit = "soft_ground";
	};
	class Sand_surface: Default
	{
		files = "gdt_grass_short*";
		rough = 0.4;
		dust = 1.0;
		soundEnviron = "grass";
		character = "Grass_Character";
		soundHit = "soft_ground";
	};
	class Mud_surface: Default
	{
		files = "base_grass*";
		rough = 1.0;
		dust = 0;
		soundEnviron = "grass";
		character = "Grass_Character";
		soundHit = "soft_ground";
	};
	class Rock_surface: Default
	{
		files = "grass_01*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "grass";
		character = "Grass_Character";
		soundHit = "soft_ground";
	};
    class Rock2_surface: Default
	{
		files = "gdt_wild_grass*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "grass";
		character = "Grass_Character";
		soundHit = "soft_ground";
	};
    class Rock3_surface: Default
	{
		files = "gdt_mud*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "sand";
		character = "none_Character";
		soundHit = "soft_ground";
	};
    class Rock4_surface: Default
	{
		files = "gdt_rock*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "rock";
		character = "none_Character";
		soundHit = "hard_ground";
	};
    class Rock5_surface: Default
	{
		files = "sinkhole_01_rock*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "rock";
		character = "none_Character";
		soundHit = "hard_ground";
	};
    class Rock6_surface: Default
	{
		files = "ground_rock2*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "rock";
		character = "none_Character";
		soundHit = "hard_ground";
	};
    class Rock7_surface: Default
	{
		files = "ground_rock*";
		rough = 0.4;
		dust = 0;
		soundEnviron = "rock";
		character = "none_Character";
		soundHit = "hard_ground";
	};
};

class CfgSurfaceCharacters 
{
	class Grass_Character
	{
		names[]={"GrassGreen", "GrassBrushHighGreen", "ThistleHigh", "GrassTall", "GrassCrookedDead"}; 
		probability[]={0.4, 0.3, 0.1, 0.1, 0.04}; 
	};
	class none_Character
	{
		names[]={"GrassGreen"};
		probability[]={0};
	};
};
