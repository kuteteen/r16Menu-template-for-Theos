//
//  r16Theme.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

#import "MenuHelpers.h"

@interface r16Theme : NSObject

// This is the only color you have to set, all other colors can be calculated from this
@property (class, nonatomic) UIColor *baseColor;

@property (class, nonatomic) UIColor *textColor;
@property (class, nonatomic) UIColor *keyOnColor;
@property (class, nonatomic) UIColor *keyOffColor;

@property (class, nonatomic) UIColor *sliderColor;
@property (class, nonatomic) UIColor *sliderOverColor;
@property (class, nonatomic) UIColor *sliderDownColor;

@property (class, nonatomic) UIColor *menuBackground;
@property (class, nonatomic) UIColor *headerBackground;
@property (class, nonatomic) UIColor *footerBackground;

@property (class, nonatomic) UIColor *menuShadowColor;
@end