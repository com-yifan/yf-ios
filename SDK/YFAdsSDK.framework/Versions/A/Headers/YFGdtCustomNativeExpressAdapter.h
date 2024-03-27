//
//  YFGdtCustomNativeExpressAdapter.h
//  YFAdsSDK
//
//  Created by FC-0823 on 2023/12/11.
//

#import "YFAdBaseAdPosition.h"
#import <Foundation/Foundation.h>
#import "YFAdNativeExpressDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFGdtCustomNativeExpressAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<YFAdNativeExpressDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
