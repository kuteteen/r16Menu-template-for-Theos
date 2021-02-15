//
//  SliderSwitch.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

@interface UIKeySlider : UIButton

- (id)initWithUIKeySliderName:(NSString *)name info:(NSString *)info_ initialValue:(float)initialValue_ minValue:(float)minValue_ maxValue:(float)maxValue_;

- (NSString *)getPrefKey;
- (float)getSliderValue;
@end