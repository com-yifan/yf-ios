//
//  YFFillRenderer.h
//  Lottie
//
//  Created by brandon_withrow on 6/27/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import "YFRenderNode.h"
#import "YFShapeFill.h"

@interface YFFillRenderer : YFRenderNode

- (instancetype _Nonnull)initWithInputNode:(YFAnimatorNode *_Nullable)inputNode
                                  shapeFill:(YFShapeFill *_Nonnull)fill;

@end
