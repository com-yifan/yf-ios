#import "YFBdKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFBdAdBannerView600x260 : UIView
-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
-(void)loadAdData:(id)object close:(void(^)(id))close;
-(void)show;
- (void)pauseVideo;
- (void)playVideo;
@end

NS_ASSUME_NONNULL_END
