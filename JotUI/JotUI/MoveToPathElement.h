//
//  DotSegment.h
//  JotUI
//
//  Created by Adam Wulf on 12/19/12.
//  Copyright (c) 2012 Adonit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AbstractBezierPathElement.h"

/**
 * a moveto element represents the beginning of
 * a line segment, similar to the moveto 
 * CGPathElement
 */
@interface MoveToPathElement : AbstractBezierPathElement

@property (nonatomic, assign) CGFloat  rotation;

+(id) elementWithMoveTo:(CGPoint)point;

@end
