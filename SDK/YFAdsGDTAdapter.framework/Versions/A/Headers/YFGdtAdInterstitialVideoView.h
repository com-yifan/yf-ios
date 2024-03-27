


#import "YFGdtKit.h"
#import "YFGdtAdMediaView.h"

NS_ASSUME_NONNULL_BEGIN

@interface YFGdtAdInterstitialVideoView : UIView

@property (nonatomic, retain) YFGdtAdMediaView *adInterView;

-(instancetype)initWithFrame:(CGRect)frame model:(id)model;

-(void)loadAdData:(id)dataObject close: (void(^)(id))close;

@end

NS_ASSUME_NONNULL_END
