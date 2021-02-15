#import "Menu.h"

void setUp() {
		[r16Hook hook:@"0x10198FA54"
				with:(void *)Player_Update 
				original:(void **)&_Player_Update];
				
		[r16Hook hook:@"0x10198FA54"
				with:(void *)ItemCheck 
				original:(void **)&_ItemCheck];
	
		[menu addPatch:@"Godmode"
          description:@"Leave this on you won't die" 
             offsets:@[@"0x10198FA54", @"0x10198FA54"]
             hexPatches:@[@"0xC0035FD6", @"0xC0035FD6"]];
			 
		[menu addSwitch:@"Inf-Mana"
			description:@"Leave this on infinite mp" ];
	
		[menu addTextfieldRight:@"Spawn Item:" description:@""];
		
		[menu addTextfieldRight:@"Item Amount:" description:@""];
		
		[menu addTextfieldRight:@"Set_MaxMinions" description:@"Use this to surpass max minions limit"];

		[menu addIndexSwitch:NC_Encrypt("Damage", 6) 
			description:@"" 
				items:@[@"mana", @"godmode", @"item", @"Increased", @"High", @"Ohk"]];

}

void startAuthentication() {

	#import "r16Logo.h"

     menu.socialShareMessage = @"Im using @@APPNAME@@ Cheats by @@USER@@";
     menu.sharingIconBorderColor = rgba(0xffffff, 1.0);

	//only color that needs to be set
     r16Theme.baseColor = rgba(0xe83434, 0.9);
     //r16Theme.headerBackground = rgba(0x5f04cf, 1.0);
     //r16Theme.footerBackground = rgba(0x5f04cf, 1.0);
     //r16Theme.menuBackground = rgba(0x7300ff, 0.9);
     //r16Theme.keyOnColor = rgba(0x8423fa,1.0);
     //r16Theme.keyOffColor = rgba(0x7b00ff,0.9);
     //r16Theme.menuShadowColor = rgba(0x7200fc, 0.9);

    [menu closeTaps:1 width:270 
          maxVisableToggles:5
          title:@"@@APPNAME@@" 
          credits:@"Made by @@USER@@"];
    setUp();
  }];
}


static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
    timer(0.1){
        startAuthentication();
        removeLaunchEvent();
    });
}

void launchEvent() {
    CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDrop);
}

__attribute__((constructor)) static void initialize() {
    launchEvent();
}