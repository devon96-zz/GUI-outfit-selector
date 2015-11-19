createDialog "MyHelloWorldDialog";
disableSerialization;
_display = findDisplay 1;
_snickers = _display displayCtrl 4;
_phone = _display displayCtrl 3;
_snickers ctrlEnable true;
_phone ctrlEnable true;

_code = format["
	if(player getVariable 'hasSnickers') exitWith{
		cutRsc['ItemOwned','PLAIN'];
	};
	cutRsc['ItemBought','PLAIN'];
	player setVariable ['hasSnickers',true];
"];
_snickers ctrlSetEventHandler ["MouseButtonDown",_code];

_code = format["
	if(player getVariable 'hasPhone') exitWith{
		cutRsc['ItemOwned','PLAIN'];
	};
	cutRsc['ItemBought','PLAIN'];
	player setVariable ['hasPhone',true];
"];
_phone ctrlSetEventHandler ["MouseButtonDown",_code];