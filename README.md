# r16Menu Template for Theos!

<div style="text-align: center;">
<b>Image of the menu:</b><br>

<img src="https://media.discordapp.net/attachments/746474520692654121/810683842590801950/image0.png?width=359&height=352">
</div>

<br>

### Features:
* Customizable UI
* Customizable menu logo
* 7 different switchs:
  * Patcher
  * Patch
  * Regular switch
  * Textfield Switch wide or right
  * Slider Switch
  * Index switch

* Patcher and Patch switch is based on [KittyMemory](https://github.com/MJx0/KittyMemory)
  * Original bytes are <b>not</b> required
  * Supports MSHookMemory
  * Write unlimited bytes to a offset

<br>

### Encryption
I did not include encryption you will have to make your own to encrypt nsstrings.

### Installation:

Download the modmenu template paste in /var/theos/templates/ios/theos

### Usage:

<b> Changing the menu logo </b>
open r16Logo.h and paste own menu image <https://www.base64-encode.org/>
```obj-c
menu.r16Logo = @"YOUR BASE 64 Here";
```

<b> Using a custom framework </b>
You can set this in the function startAuthentication() inside Tweak.xm but this is not requierd. Dont worry about it skip_
```obj-c
menu.frameworkNamed = @"UnityFramework";

```

<b> Patching a plain offset: </b>
```obj-c
[UIKeyPatch offset:@"0x104361010" byte:@"0xC0035FD6"];
[UIKeyPatch offset:@"0x104361010" byte:@"0x000080D2C0035FD6"];

// You can write as many bytes as you want to an offset
[UIKeyPatch offset:@"0x104361010" byte:@"0x00F0271E0008201E000080D2C0035FD6"];
```


<b> Patcher switch: </b>
```obj-c
    [menu addPatcherSwitch:@"Custom Patch #1"];
```

<b> Plain Switch: </b>
```obj-c
		[menu addSwitch:@"Mana" 
			  description:@"Infinite mana"];
```
<b> Textfield Switch Right: </b>
```obj-c
    [menu addTextfieldRight:@"Set Weapon:" 
        description:@""];
```
<b> Textfield Switch Wide: </b>
```obj-c
    [menu addTextfieldWide:@"Chat Spam:" 
        description:@""];
```
<b> Slider Switch: </b>
```obj-c
		[menu addSlider:@"Custom Fov"
          description:@"" 
             initialValue:1.00 
             minValue:1.00 
             maxValue:200.00];	
```
<b> Index Switch: </b>
```obj-c
    [menu addIndexSwitch:@"Pick Damage" 
			  description:@"" 
				  items:@[@"10", @"20", @"40", @"80", @"120", @"140"]];
```
<b> Checking if a switch is on:
```obj-c
bool manaOn = [menu getSwitchOnForSwitch:@"Mana"];
    
if(manaOn) {
  //stuff
}
    
//checking directly:
if([menu getSwitchOnForSwitch:@"Mana"]) {
//stuff
}

//using index string-arrays start at 0
if([menu getIndexForString:@"Pick Damage"] == 1/*20*/){
//do stuff
}
if([menu getIndexForString:@"Pick Damage"] == 0/*10*/){
//do stuff
}

```
<b> Getting textfield or slider value: </b>
```obj-c
//textfield
int userValue = [menu getInt:@"Switch Name"];
NSString *userValue3 = [menu getNSString:@"Switch Name"];

//slider
float userValue1 = [menu getFloat:@"Switch Name"];
```

### Credits:
* Me
* [MJx0](https://github.com/MJx0)
  * For [KittyMemory](https://github.com/MJx0/KittyMemory)

<br>

### Contact:
If you find a bug in this beta version hit me up
Don't spam me.
<br> <b>Discord:</b> Red16#0309
