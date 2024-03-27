

#import "YFGdtKit.h"
#import "YFGdtAdMediaView.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFGdtAdBannerView600x260 : UIView
@property (nonatomic, retain) YFGdtAdMediaView *adInterView;
-(instancetype)initWithFrame:(CGRect)frame model:(id)model;
-(float)getViewHeight;
-(void)loadAdData:(id)dataObject close: (void(^)(id))close;

@end

NS_ASSUME_NONNULL_END

