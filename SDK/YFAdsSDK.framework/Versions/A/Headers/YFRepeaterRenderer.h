//
//  YFRepeaterRenderer.h
//  Lottie
//
//  Created by brandon_withrow on 7/28/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import "YFRenderNode.h"
#import "YFShapeRepeater.h"

@interface YFRepeaterRenderer : YFRenderNode

- (instancetype _Nonnull)initWithInputNode:(YFAnimatorNode *_Nullable)inputNode
                              shapeRepeater:(YFShapeRepeater *_Nonnull)repeater;

@end
