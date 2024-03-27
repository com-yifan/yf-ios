
#if __has_include(<KSAdSDK/KSAdSDK.h>)
#import <KSAdSDK/KSAdSDK.h>
#import "YFKsKit.h"

NS_ASSUME_NONNULL_BEGIN

@class YFKsAdInterstitialView;


@interface YFKsAdInterstitialView : YFAdBaseView

@property (nonatomic, strong) YFAdImageView *contentView;
@property (nonatomic, strong) UIButton *closeBtn;
@property (nonatomic, strong) UIView *subView;
@property (nonatomic, strong) UILabel *title;
@property (nonatomic, strong) UILabel *otherBtn;

-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
- (void)loadAdData:(KSNativeAd *)nativeAd;
@end

NS_ASSUME_NONNULL_END
#endif
