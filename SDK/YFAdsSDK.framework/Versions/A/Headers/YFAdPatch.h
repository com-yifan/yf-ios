
//  Created by ldm on 2023/05/04.
//  Copyright © 2023 FC. All rights reserved.
//

#import "YFAdBaseAdapter.h"
#import "YFAdSDKSetting.h"
#import "YFAdPatchDelegate.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
   
@interface YFAdPatch : YFAdBaseAdapter 
/// 广告方法回调代理
@property (nonatomic, weak) id<YFAdPatchDelegate> delegate;

@property(nonatomic, weak) UIView *adContainer;

@property(nonatomic, assign) int refreshInterval;


- (instancetype)initWithAdUnitID:(NSString *)pID
                    adContainer:(UIView *)adContainer
                  viewController:(nonnull UIViewController *)viewController;
@end

NS_ASSUME_NONNULL_END
