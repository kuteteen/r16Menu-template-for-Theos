//
//  MenuHelpers.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

#import "UIKit/UIKit.h"
#include <CoreGraphics/CoreGraphics.h>
#include <CoreGraphics/CGGeometry.h>
#import <vector>
//#import <initializer_list>
#include <string> 
#include <sstream>
#include <iostream> 
#include <substrate.h>
#include <mach-o/dyld.h>

#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^

#define rgb(rgbValue) [UIColor \
 colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define rgba(rgbValue,a) [UIColor \
 colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

#define ReadInt(offset, ptr, value) *(int*)((uint64_t)(void *)ptr + (unsigned long long)offset) = (int)value;
#define ReadBool(offset, ptr, value) *(bool*)((uint64_t)(void *)ptr + (unsigned long long)offset) = (bool)value;
#define ReadFloat(offset, ptr, value) *(float*)((uint64_t)(void *)ptr + (unsigned long long)offset) = (float)value;

#define HOOK(offset, ptr, orig) MSHookFunction((void *)[UIKeyPatch getRealOffset:offset], (void *)ptr, (void **)&orig)
#define HOOK_NO_ORIG(offset, ptr) MSHookFunction((void *)[UIKeyPatch getRealOffset:offset], (void *)ptr, NULL)

@interface UIColor (ColorExtensions)
+ (UIColor *)bitLighter;
+ (UIColor *)bitDarker;
+ (UIColor *)lighter;
+ (UIColor *)darker;
+ (UIColor *)inverse;
@end