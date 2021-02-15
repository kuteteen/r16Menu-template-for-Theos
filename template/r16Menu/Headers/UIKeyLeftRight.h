//
//  SliderSwitch.h
//  r16Menu
//
//  Created by Red16 on 9/10/2020.
//  Copyright © 2020 Red16. All rights reserved.
//

#import "Switch.h"

@interface UIKeyLeftRight : Switch

- (id)initWithUIKeyLeftRightName:(NSString *)switchName strItems:(NSArray *)strItems info:(NSString *)info;

- (CAShapeLayer *)getTriangle;
- (CATransform3D)getTriangleTransform;
- (void)setTriangleTransform:(CATransform3D)transform;

- (CAShapeLayer *)getTriangle2;
- (CATransform3D)getTriangleTransform2;
- (void)setTriangleTransform2:(CATransform3D)transform;
@end