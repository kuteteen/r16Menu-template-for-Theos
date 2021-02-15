//
//  OffsetPatcher.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

#import "UIKeyPatch.h"

@interface UIKeyPatcher : UIButton<UITextFieldDelegate>

- (id)initWithUIKeyPatcherName:(NSString *)switchName;

- (NSString *)getPrefKey;

- (NSArray<NSString *> *)getOffsets;
- (NSArray<NSString *> *)getHackedHexes;
- (std::vector<MemoryPatch>)getMemoryPatches; 

@end