#define true 1
#define false 0
class MyHelloWorldDialog {
	idd = 1; 
	controlsBackground[] = { }; 
	objects[] = { };      
	enableSimulation = true;
	controls[] = { MainText; PhoneButton; SnickersButton; };
	class MainText {
		idc = 2;  
		type = CT_STATIC; 
		style = ST_LEFT;    
		text = "Choose what you want to buy";
		sizeEx = 0.07;
		font = TahomaB;
		colorBackground[] = { 1, 1, 1, 0.3 };
		colorText[] = { 0, 0, 0, 1 };
		x = 0;
		y = 0;
		w = 1;
		h = 1;
	};
	class PhoneButton {
		idc = 3;
		type = CT_STATIC;
		style = ST_RIGHT;    
		text = "Buy phone";
		sizeEx = 0.05;
		font = TahomaB;
		colorBackground[] = {0,0.576,0,1};
		colorText[] = { 0, 0, 0, 1 };
		x = 0;
		y = 0;
		w = 0.25;
		h = 0.25;
	};
	class SnickersButton {
		idc = 4;             
		type = CT_STATIC;      
		style = ST_LEFT + ST_FRAME;       
		text = "Buy snickers";
		sizeEx = 0.05;
		font = TahomaB;
		colorBackground[] = {0.502,0,0,1};
		colorText[] = { 0, 0, 0, 1 };
		x = 0.75;
		y = 0.75;
		w = 0.25;
		h = 0.25;
	};
	

};
class RscTitles
{
	class ItemBought{
		idd = -1;                     
		controlsBackground[] = { };   
		objects[] = { };            
		controls[] = { ItemBoughtText };
		duration = 1;
		class ItemBoughtText{
			idc = 7;
			type = 0;
			style = 0;
			x = 0.4; 
			y = -0.2;
			w = 0.3;
			h = 0.2;
			font = "EtelkaNarrowMediumPro";
			sizeEx = 0.05;
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			text = "Item bought";
		};
	};
	class ItemOwned{
		idd = -1;                     
		controlsBackground[] = { };   
		objects[] = { };            
		controls[] = { ItemOwnedText };
		duration = 1;
		class ItemOwnedText{
			idc = 8;
			type = 0;
			style = 0;
			x = 0.4; 
			y = -0.2;
			w = 0.3;
			h = 0.2;
			font = "EtelkaNarrowMediumPro";
			sizeEx = 0.05;
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			text = "You already own this item!";
		};
	};

};