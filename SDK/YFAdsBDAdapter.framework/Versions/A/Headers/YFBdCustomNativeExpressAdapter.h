//
//  YFBdCustomNativeExpressAdapter.h
//  YFAdsSDK
//
//  Created by FC-0823 on 2023/12/11.
//

#import "YFBdKit.h"


NS_ASSUME_NONNULL_BEGIN

@interface YFBdCustomNativeExpressAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<YFAdNativeExpressDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
