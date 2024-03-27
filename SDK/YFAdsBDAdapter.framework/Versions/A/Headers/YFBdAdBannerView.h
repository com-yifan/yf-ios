

#import "YFBdKit.h"

#if __has_include(<BaiduMobAdSDK/BaiduMobAdNativeAdView.h>)

NS_ASSUME_NONNULL_BEGIN

@interface YFBdAdBannerView : UIView
-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
-(void)loadAdData:(id)object close:(void(^)(id))close;
-(void)show;
- (void)pauseVideo;
- (void)playVideo;
@end

NS_ASSUME_NONNULL_END
#endif
