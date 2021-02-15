//
//  UIKeyTextFieldSwitch.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//


@interface UIKeyTextField : UIButton<UITextFieldDelegate>

- (id)initWithUIKeyTextFieldName:(NSString *)switchName info:(NSString *)info;

- (NSString *)getPrefKey;
@end