//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFinanceWebViewController.h"

#import "FDAccountBookSharingActionSheetDelegate.h"
#import "FDTencentOpenAPIAuthManagerDelegate.h"
#import "FDWeChatAPIManagerDelegate.h"
#import "FDWebViewDelegate.h"
#import "FDWeiboAuthManagerDelegate.h"
#import "LoginViewControllerDelegate.h"
#import "PopupMenuViewDelegate.h"

@class NSString, NSURL, NSURLRequest, NoNetworkCoverView, NotificationMessage, PopupMenuView, UIActivityIndicatorView, UIView, UnsubscribeBehavior;

@interface FinanceMarketWebViewController : BaseFinanceWebViewController <LoginViewControllerDelegate, FDWebViewDelegate, FDAccountBookSharingActionSheetDelegate, FDTencentOpenAPIAuthManagerDelegate, FDWeChatAPIManagerDelegate, FDWeiboAuthManagerDelegate, PopupMenuViewDelegate>
{
    _Bool _shouldUseLocalResources;
    _Bool _isInFinanceProduct;
    id <UIScrollViewDelegate> _webViewScrollDelegate;
    NotificationMessage *_message;
    NSString *_customTitle;
    NoNetworkCoverView *_noNetworkCoverView;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_darkCover;
    PopupMenuView *_popupMenuView;
    NSURLRequest *_lastRequest;
    NSString *_HTMLString;
    NSURL *_baseURL;
    UnsubscribeBehavior *_unsubscribeBehavior;
}

@property(retain, nonatomic) UnsubscribeBehavior *unsubscribeBehavior; // @synthesize unsubscribeBehavior=_unsubscribeBehavior;
@property(nonatomic) _Bool isInFinanceProduct; // @synthesize isInFinanceProduct=_isInFinanceProduct;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *HTMLString; // @synthesize HTMLString=_HTMLString;
@property(retain, nonatomic) NSURLRequest *lastRequest; // @synthesize lastRequest=_lastRequest;
@property(nonatomic) _Bool shouldUseLocalResources; // @synthesize shouldUseLocalResources=_shouldUseLocalResources;
@property(retain, nonatomic) PopupMenuView *popupMenuView; // @synthesize popupMenuView=_popupMenuView;
@property(retain, nonatomic) UIView *darkCover; // @synthesize darkCover=_darkCover;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) NoNetworkCoverView *noNetworkCoverView; // @synthesize noNetworkCoverView=_noNetworkCoverView;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain, nonatomic) NotificationMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak id <UIScrollViewDelegate> webViewScrollDelegate; // @synthesize webViewScrollDelegate=_webViewScrollDelegate;
- (void).cxx_destruct;
- (id)navigationController;
- (void)weChatAPIManagerDidRecivedShareResponseSuccessfully:(id)arg1;
- (void)weiboAuthManagerDidReceviedShareResponseSuccessfully:(id)arg1;
- (void)authManagerDidReceivedShareResponseSuccessfully:(id)arg1;
- (id)accountBookSharingActionSheet:(id)arg1 titleForIndex:(long long)arg2;
- (void)accountBookSharingActionSheet:(id)arg1 didSelectIndex:(long long)arg2;
- (id)accountBookSharingActionSheet:(id)arg1 imageForIndex:(long long)arg2;
- (long long)numberOfButtonsInAccountBookSharingActionSheet:(id)arg1;
- (void)slideMenuWillCloseWithMenu:(id)arg1;
- (void)slideMenuWillExpandWithMenu:(id)arg1;
- (void)popupMenuView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleWebViewNeedLogin;
- (void)handleToolBoxMenuButtonClicked:(id)arg1;
- (void)backAction;
- (void)showNoNetworkPlaceHolder:(_Bool)arg1;
- (void)setDarkCorverHidden:(_Bool)arg1;
- (void)showMessage:(id)arg1;
- (void)showLoading:(_Bool)arg1 blockBackground:(_Bool)arg2;
- (void)reloadWebView;
- (void)tapStatusBar;
- (void)reloadNavigationBar;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLocalRequest:(id)arg1;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRequest:(id)arg1 isInFinanceProduct:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

