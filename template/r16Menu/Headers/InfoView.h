//
//  InfoView.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//
#import "MenuHelpers.h"

@interface InfoView : UIView<UITextFieldDelegate>

- (id)init:(NSString *)title_ description:(NSString *)description_;

//+ (void)addButton:(NSString *)name actionBlock:(ActionBlock)action;

+ (void)showInfoView:(InfoView *)iv;
- (void)closeInfoView;
@end