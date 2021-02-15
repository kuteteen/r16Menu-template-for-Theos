//
//  r16Hook.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

@interface r16Hook : NSObject

+ (NSString *)hook:(NSString *)address with:(void *)replacement original:(void **)original;

+ (NSString *)hookNamed:(NSString *)symbol with:(void *)replacement original:(void **)original;

+ (void)toggleHook:(BOOL)on address:(NSString *)address with:(void *)replacement original:(void **)original;
@end