//  Created by ldm on 2023/05/04.
//  Copyright © 2023 FC. All rights reserved.
//


#import "YFAdBaseAdPosition.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YFAdDrawDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFCsjDrawAdapter : YFAdBaseAdPosition
@property (nonatomic, weak) id<YFAdDrawDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
