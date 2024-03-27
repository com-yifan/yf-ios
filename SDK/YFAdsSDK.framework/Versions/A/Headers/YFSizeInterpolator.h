//
//  YFSizeInterpolator.h
//  Lottie
//
//  Created by brandon_withrow on 7/13/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import "YFValueInterpolator.h"
#import "YFValueDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFSizeInterpolator : YFValueInterpolator

- (CGSize)sizeValueForFrame:(NSNumber *)frame;

@property (nonatomic, weak, nullable) id<LOTSizeValueDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
