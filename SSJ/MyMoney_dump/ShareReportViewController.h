//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FDAccountBookSharingActionSheetDelegate.h"
#import "FDTencentOpenAPIAuthManagerDelegate.h"
#import "FDWeChatAPIManagerDelegate.h"
#import "FDWeiboAuthManagerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSDate, NSDecimalNumber, NSString, NSURL, UIButton, UIImage, UIImageView, UIScrollView, UIView;

@interface ShareReportViewController : UIViewController <UIScrollViewDelegate, FDAccountBookSharingActionSheetDelegate, FDTencentOpenAPIAuthManagerDelegate, FDWeChatAPIManagerDelegate, FDWeiboAuthManagerDelegate>
{
    _Bool _isCompareReport;
    UIImageView *_secondPartImageView;
    UIImageView *_firstPartImageView;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDecimalNumber *_totalAmount;
    NSDecimalNumber *_leftAmount;
    NSDecimalNumber *_rightAmount;
    NSString *_reportName;
    NSString *_leftLabelString;
    NSString *_rightLabelString;
    UIScrollView *_scrollView;
    UIButton *_shareWeiXinButton;
    UIButton *_shareFriendsButton;
    UIButton *_closeButton;
    UIView *_shareContentContainer;
    UIView *_lineView;
    UIImage *_screenShot;
    NSURL *_shareURL;
    NSString *_shareTitle;
    NSString *_shareDescription;
    UIImage *_shareThumb;
    NSString *_systemCurrencyCode;
}

+ (id)renderScrollViewToImage:(id)arg1;
+ (id)renderViewToImage:(id)arg1;
@property(retain, nonatomic) NSString *systemCurrencyCode; // @synthesize systemCurrencyCode=_systemCurrencyCode;
@property(retain, nonatomic) UIImage *shareThumb; // @synthesize shareThumb=_shareThumb;
@property(retain, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) UIImage *screenShot; // @synthesize screenShot=_screenShot;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *shareContentContainer; // @synthesize shareContentContainer=_shareContentContainer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *shareFriendsButton; // @synthesize shareFriendsButton=_shareFriendsButton;
@property(retain, nonatomic) UIButton *shareWeiXinButton; // @synthesize shareWeiXinButton=_shareWeiXinButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *rightLabelString; // @synthesize rightLabelString=_rightLabelString;
@property(retain, nonatomic) NSString *leftLabelString; // @synthesize leftLabelString=_leftLabelString;
@property(nonatomic) _Bool isCompareReport; // @synthesize isCompareReport=_isCompareReport;
@property(retain, nonatomic) NSString *reportName; // @synthesize reportName=_reportName;
@property(retain, nonatomic) NSDecimalNumber *rightAmount; // @synthesize rightAmount=_rightAmount;
@property(retain, nonatomic) NSDecimalNumber *leftAmount; // @synthesize leftAmount=_leftAmount;
@property(retain, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) UIImageView *firstPartImageView; // @synthesize firstPartImageView=_firstPartImageView;
@property(retain, nonatomic) UIImageView *secondPartImageView; // @synthesize secondPartImageView=_secondPartImageView;
- (void).cxx_destruct;
- (void)weiboAuthManager:(id)arg1 didReceviedShareResponseWithErrorMessage:(id)arg2;
- (void)weiboAuthManagerDidReceviedShareResponseSuccessfully:(id)arg1;
- (void)authManager:(id)arg1 didReceivedShareResponseUnSuccessfullyWithErrorMessage:(id)arg2;
- (void)authManagerDidReceivedShareResponseSuccessfully:(id)arg1;
- (void)weChatAPIManager:(id)arg1 didRecivedShareResponseUnsuccessfullyWithErrorMessage:(id)arg2;
- (void)weChatAPIManagerDidRecivedShareResponseSuccessfully:(id)arg1;
- (id)accountBookSharingActionSheet:(id)arg1 titleForIndex:(long long)arg2;
- (void)accountBookSharingActionSheet:(id)arg1 didSelectIndex:(long long)arg2;
- (id)accountBookSharingActionSheet:(id)arg1 imageForIndex:(long long)arg2;
- (long long)numberOfButtonsInAccountBookSharingActionSheet:(id)arg1;
- (void)accountBookSharingActionSheetSaveToAlbum:(id)arg1;
- (void)showAlertWithMessage:(id)arg1;
- (void)uploadScreenShotCompletion:(CDUnknownBlockType)arg1;
- (void)shareToQzone;
- (void)shareToWeibo;
- (void)shareToWeChatTimeline;
- (void)shareToWeChatFriends;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleRightButtonClicked:(id)arg1;
- (id)buttonWithTitle:(id)arg1 icon:(id)arg2 color:(id)arg3;
- (void)didReceiveMemoryWarning;
- (id)setupShareContentFooter;
- (id)setupShareContentBody;
- (id)labelWithFrame:(struct CGRect)arg1;
- (id)normalHeader;
- (id)setupShareContentHeader;
- (id)setupShareContent;
- (id)renderContentContainer;
- (void)cancelClicked;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
