//
//  UIKeyPatch.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

#import "KittyMemory/MemoryPatch.hpp"

#import "MenuHelpers.h"

@class Switch;

@interface UIKeyPatch : UIButton

- (id)initWithHackName:(NSString *)hackName_ info:(NSString *)info offset:(NSArray<NSString *> *)offsets_ hackedHex:(NSArray<NSString *> *)hackedHexes_;

- (NSString *)getPrefKey;

- (NSArray<NSString *> *)getOffsets;
- (NSArray<NSString *> *)getHackedHexes;
- (std::vector<MemoryPatch>)getMemoryPatches;
+ (BOOL)isValid:(NSString *)str;

+ (void)setSpacing:(float)spacing_;
+ (float)getSpacing;

+ (uint64_t)address:(NSString *)address ptr:(void *)ptr;
+ (void)offset:(NSString *)offset byte:(NSString *)byte;
+ (uint64_t)getRealOffset:(NSString *)offset;
@end