//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CreditWebViewDelegate.h"
#import "FDAccountBookSharingActionSheetDelegate.h"
#import "FDTencentOpenAPIAuthManagerDelegate.h"
#import "FDWeChatAPIManagerDelegate.h"
#import "FDWeiboAuthManagerDelegate.h"
#import "LoginViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "UIWebViewDelegate.h"

@class CreditWebView, FDAccountBookSharingActionSheet, FDWebViewRequsetLoginAction, NSString, NSURLRequest, RemoteAccountService, UIActivityIndicatorView, UIBarButtonItem, UIImage;

@interface CreditWebViewController : UIViewController <UIWebViewDelegate, FDAccountBookSharingActionSheetDelegate, FDWeChatAPIManagerDelegate, FDWeiboAuthManagerDelegate, FDTencentOpenAPIAuthManagerDelegate, MFMessageComposeViewControllerDelegate, CreditWebViewDelegate, LoginViewControllerDelegate>
{
    NSString *_needRefreshUrl;
    NSURLRequest *_request;
    CreditWebView *_webView;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareSubtitle;
    NSString *_shareThumbnail;
    NSString *_originUserAgent;
    UIBarButtonItem *_shareButton;
    UIActivityIndicatorView *_activity;
    FDAccountBookSharingActionSheet *_sharingActionSheet;
    NSString *_shortSharedURL;
    RemoteAccountService *_remoteAccountService;
    UIImage *_shareThumbnailImage;
    FDWebViewRequsetLoginAction *_loginAction;
}

@property(retain, nonatomic) FDWebViewRequsetLoginAction *loginAction; // @synthesize loginAction=_loginAction;
@property(retain, nonatomic) UIImage *shareThumbnailImage; // @synthesize shareThumbnailImage=_shareThumbnailImage;
@property(retain, nonatomic) RemoteAccountService *remoteAccountService; // @synthesize remoteAccountService=_remoteAccountService;
@property(retain, nonatomic) NSString *shortSharedURL; // @synthesize shortSharedURL=_shortSharedURL;
@property(retain, nonatomic) FDAccountBookSharingActionSheet *sharingActionSheet; // @synthesize sharingActionSheet=_sharingActionSheet;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSString *originUserAgent; // @synthesize originUserAgent=_originUserAgent;
@property(retain, nonatomic) NSString *shareThumbnail; // @synthesize shareThumbnail=_shareThumbnail;
@property(retain, nonatomic) NSString *shareSubtitle; // @synthesize shareSubtitle=_shareSubtitle;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) CreditWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *needRefreshUrl; // @synthesize needRefreshUrl=_needRefreshUrl;
- (void).cxx_destruct;
- (void)loginViewControllerDidCanceled:(id)arg1;
- (void)loginViewControllerDidFinishedSync:(id)arg1;
- (void)notifyActionFailureWithAction:(id)arg1 andErrorCode:(long long)arg2 andMessage:(id)arg3;
- (void)notifyActionSuccessWithAction:(id)arg1 andResultDictionary:(id)arg2;
- (void)notifyRequestLoginCallback;
- (void)webViewNeedLogin:(id)arg1;
- (void)copyURL;
- (void)weiboAuthManager:(id)arg1 didReceviedShareResponseWithErrorMessage:(id)arg2;
- (void)weiboAuthManagerDidReceviedShareResponseSuccessfully:(id)arg1;
- (void)authManager:(id)arg1 didReceivedShareResponseUnSuccessfullyWithErrorMessage:(id)arg2;
- (void)authManagerDidReceivedShareResponseSuccessfully:(id)arg1;
- (void)weChatAPIManager:(id)arg1 didRecivedShareResponseUnsuccessfullyWithErrorMessage:(id)arg2;
- (void)weChatAPIManagerDidRecivedShareResponseSuccessfully:(id)arg1;
- (_Bool)isSupportSMS;
- (void)shareViaSMS:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)shareToWeibo;
- (void)shareToQzone;
- (void)shareToQQ;
- (void)shareToWeChatTimeline;
- (void)shareToWeChatFriends;
- (id)imageToShare;
- (void)downloadShareThumbnail;
- (id)accountBookSharingActionSheet:(id)arg1 titleForIndex:(long long)arg2;
- (void)accountBookSharingActionSheet:(id)arg1 didSelectIndex:(long long)arg2;
- (id)accountBookSharingActionSheet:(id)arg1 imageForIndex:(long long)arg2;
- (long long)numberOfButtonsInAccountBookSharingActionSheet:(id)arg1;
- (void)shouldBackRootRefresh:(id)arg1;
- (void)shouldBackRoot:(id)arg1;
- (void)shouldBack:(id)arg1;
- (void)shouldBackRefresh:(id)arg1;
- (void)shouldNewOpen:(id)arg1;
- (id)getNavCon;
- (void)onShareClick;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)dealloc;
- (void)refreshParentPage:(id)arg1;
- (void)setRefreshCurrentUrl:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dismiss;
- (id)initWithRequest:(id)arg1;
- (id)initWithUrlByPresent:(id)arg1;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
