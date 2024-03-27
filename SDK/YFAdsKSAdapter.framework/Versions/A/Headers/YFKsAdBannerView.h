
#import <UIKit/UIKit.h>

#if __has_include(<KSAdSDK/KSAdSDK.h>)
#import <KSAdSDK/KSAdSDK.h>
#import "YFKsKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFKsAdBannerView : YFAdBaseView

-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
-(float)getViewHeight;
-(void)loadAdData:(KSNativeAd *)dataObject close: (void(^)(id))close;

@end

NS_ASSUME_NONNULL_END
#endif
