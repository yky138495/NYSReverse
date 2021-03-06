//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFinanceWebViewController.h"

#import "FDWeChatAPIManagerDelegate.h"
#import "FDWebViewDelegate.h"
#import "LoginViewControllerDelegate.h"

@class NSString, NSURLRequest, UIActivityIndicatorView;

@interface FinanceClubViewController : BaseFinanceWebViewController <FDWebViewDelegate, LoginViewControllerDelegate, FDWeChatAPIManagerDelegate>
{
    _Bool _isCustomerServicePage;
    _Bool _hasBottomBar;
    _Bool _hasShownCreditRewardDropDownView;
    _Bool _needToDelayInitialRequest;
    _Bool _notFirstClubWebPage;
    _Bool _hasSentFirstWebpageLoadFinishedNotification;
    UIActivityIndicatorView *_loadingIndicator;
    NSURLRequest *_specificRequest;
    NSURLRequest *_initialRequest;
}

@property(nonatomic) _Bool hasSentFirstWebpageLoadFinishedNotification; // @synthesize hasSentFirstWebpageLoadFinishedNotification=_hasSentFirstWebpageLoadFinishedNotification;
@property(retain, nonatomic) NSURLRequest *initialRequest; // @synthesize initialRequest=_initialRequest;
@property(nonatomic) _Bool notFirstClubWebPage; // @synthesize notFirstClubWebPage=_notFirstClubWebPage;
@property(nonatomic) _Bool needToDelayInitialRequest; // @synthesize needToDelayInitialRequest=_needToDelayInitialRequest;
@property(retain, nonatomic) NSURLRequest *specificRequest; // @synthesize specificRequest=_specificRequest;
@property(nonatomic) _Bool hasShownCreditRewardDropDownView; // @synthesize hasShownCreditRewardDropDownView=_hasShownCreditRewardDropDownView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) _Bool hasBottomBar; // @synthesize hasBottomBar=_hasBottomBar;
@property(nonatomic) _Bool isCustomerServicePage; // @synthesize isCustomerServicePage=_isCustomerServicePage;
- (void).cxx_destruct;
- (void)refreshWebView;
- (void)updateForumAvatarIfNeededWithPhtoName:(id)arg1;
- (void)loginViewControllerDidFinishedSync:(id)arg1;
- (void)handleWebViewNeedLogin;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)enterForumCreditCenter;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)sendForumVisitingBehaviorWithNewTime:(id)arg1;
- (void)sendForumVisitingBehavior;
- (void)updateRedPointState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadInitialRequest;
- (void)loadRequest:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 FD_parentViewController:(id)arg3 request:(id)arg4 needToDelayInitialRequest:(_Bool)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 FD_parentViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

