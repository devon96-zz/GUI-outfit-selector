//[myTruck,myChopper] spawn Core_fnc_attachheli;
player setVariable ["hasPhone",false];
player setVariable ["hasSnickers",false];
player setVariable ["money",100];
player addAction [
	'Eat Snickers',
	'player setVariable ["hasSnickers",false]',
	nil,
	1.5,
	true,
	true,
	"",
	'player getVariable "hasSnickers"'
];
_civ = shopAssistant;
_civ addAction ["Access store","[] spawn Core_fnc_shop"];