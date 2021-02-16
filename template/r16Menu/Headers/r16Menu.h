//
//  r16Menu.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

#import "MenuHelpers.h"
#import "UIKeyPatch.h"
#import "InfoView.h"
#import "r16Hook.h"
#import "r16Theme.h"

@class UIKeySlider;

@interface r16Menu : UIView 

-(id)initMenu;
- (void)closeTaps:(int)taps width:(CGFloat)width maxVisableToggles:(int)visableToggles title:(NSString *)title credits:(NSString *)credits_;

@property (class, nonatomic) NSString *frameworkNamed;

@property (nonatomic) float spacing;

@property (nonatomic, retain) NSString *r16Logo;
@property (nonatomic) NSString *socialShareMessage;
@property (retain) UIColor *sharingIconBorderColor;

@property (nonatomic) NSString *customFont;
@property (nonatomic) float fontSize;

- (void)setup;
+ (float)getMenuWidth;
- (void)showInfoView:(NSString *)title_ description:(NSString *)description_;

- (void)versionChecker:(NSString *)version title:(NSString *)title message:(NSString *)message;

+ (instancetype)sharedInstance;
- (void)customUserCredits:(UIWindow *)win alert:(UIAlertController *)alert;

- (float)getFloat:(NSString *)name;
- (int)getInt:(NSString *)name;
- (NSString *)getNSString:(NSString *)name;

- (int)getIndexForString:(NSString *)name;
- (bool)getSwitchOnForSwitch:(NSString *)name;

+ (UIView *)checkMark;
+ (UIColor *)getTextColor;
+ (NSString *)getFontName;
+ (float)getFontSize;

- (void)addPatch:(NSString *)name description:(NSString *)description offsets:(NSArray<NSString *> *)offsets hexPatches:(NSArray<NSString *> *)hexPatches;
- (void)addSlider:(NSString *)name description:(NSString *)description initialValue:(float )initialValue minValue:(float )minValue maxValue:(float )maxValue;
- (void)addSwitch:(NSString *)name description:(NSString *)description;
- (void)addHookNamed:(NSString *)name description:(NSString *)description hooks:(NSArray<NSString *> *)hook;
- (void)addTextfieldRight:(NSString *)name description:(NSString *)description;
- (void)addTextfieldWide:(NSString *)name description:(NSString *)description;
- (void)addIndexSwitch:(NSString *)name description:(NSString *)description items:(NSArray *)items;

- (void)addPatcher:(NSString *)name;
@end
