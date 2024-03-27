
#import <UIKit/UIKit.h>
#if __has_include(<BUAdSDK/BUAdSDK.h>)
#import <BUAdSDK/BUAdSDK.h>
#import "YFCsjKit.h"


NS_ASSUME_NONNULL_BEGIN

@interface YFCsjAdBannerView600x260 : UIView

-(instancetype)initWithFrame:(CGRect)frame model:(id)model;

-(float)getViewHeight;
-(void)loadAdData:(BUNativeAd *)dataObject close: (void(^)(id))close;

@end

NS_ASSUME_NONNULL_END
#endif
