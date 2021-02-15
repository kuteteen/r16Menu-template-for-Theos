//
//  Switch.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

@interface Switch : UIButton

- (id)initWithSwitchName:(NSString *)switchName_ info:(NSString *)info_;

- (NSString *)getPrefKey;
- (NSString *)getInfo;

@end