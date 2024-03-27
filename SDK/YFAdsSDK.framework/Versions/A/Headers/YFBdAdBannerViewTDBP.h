
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface YFBdAdBannerViewTDBP: UIView
-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
-(void)loadAdData:(id)object close:(void(^)(id))close;
-(void)show;
- (void)pauseVideo;
- (void)playVideo;
@end
NS_ASSUME_NONNULL_END