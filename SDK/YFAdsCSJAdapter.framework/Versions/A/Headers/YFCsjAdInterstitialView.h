
#import <UIKit/UIKit.h>
#if __has_include(<BUAdSDK/BUAdSDK.h>)
#import <BUAdSDK/BUAdSDK.h>
#import "YFCsjKit.h"
NS_ASSUME_NONNULL_BEGIN

@interface YFCsjAdInterstitialView : UIView
-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
-(void)loadAdData:(BUNativeAd *)dataObject;
-(void)show;
@end

NS_ASSUME_NONNULL_END
#endif
