//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFinanceWebViewController.h"

#import "FDWebViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSArray, NSDictionary, NSString, NSURLRequest, NoNetworkCoverView, PopupMenuView, UIActivityIndicatorView;

@interface FinanceApplyCardViewController : BaseFinanceWebViewController <UIWebViewDelegate, FDWebViewDelegate>
{
    _Bool _isFinished;
    _Bool _isCreditInvestPage;
    UIActivityIndicatorView *_loadingIndicator;
    NSURLRequest *_applyCardPageRequest;
    NSString *_redirectString;
    NoNetworkCoverView *_noNetworkCoverView;
    NSArray *_activeUrlArray;
    NSDictionary *_bankInfo;
    NSDictionary *_userBankInfo;
    NSString *_aliPayCallBackName;
    PopupMenuView *_popUpMenu;
    unsigned long long _creditPageType;
}

@property(nonatomic) _Bool isCreditInvestPage; // @synthesize isCreditInvestPage=_isCreditInvestPage;
@property(nonatomic) unsigned long long creditPageType; // @synthesize creditPageType=_creditPageType;
@property(retain, nonatomic) PopupMenuView *popUpMenu; // @synthesize popUpMenu=_popUpMenu;
@property(retain, nonatomic) NSString *aliPayCallBackName; // @synthesize aliPayCallBackName=_aliPayCallBackName;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSDictionary *userBankInfo; // @synthesize userBankInfo=_userBankInfo;
@property(retain, nonatomic) NSDictionary *bankInfo; // @synthesize bankInfo=_bankInfo;
@property(retain, nonatomic) NSArray *activeUrlArray; // @synthesize activeUrlArray=_activeUrlArray;
@property(retain, nonatomic) NoNetworkCoverView *noNetworkCoverView; // @synthesize noNetworkCoverView=_noNetworkCoverView;
@property(retain, nonatomic) NSString *redirectString; // @synthesize redirectString=_redirectString;
@property(retain, nonatomic) NSURLRequest *applyCardPageRequest; // @synthesize applyCardPageRequest=_applyCardPageRequest;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void).cxx_destruct;
- (void)weChatAPIManagerDidRecivedShareResponseSuccessfully:(id)arg1;
- (void)weiboAuthManagerDidReceviedShareResponseSuccessfully:(id)arg1;
- (void)authManagerDidReceivedShareResponseSuccessfully:(id)arg1;
- (id)accountBookSharingActionSheet:(id)arg1 titleForIndex:(long long)arg2;
- (void)accountBookSharingActionSheet:(id)arg1 didSelectIndex:(long long)arg2;
- (id)accountBookSharingActionSheet:(id)arg1 imageForIndex:(long long)arg2;
- (long long)numberOfButtonsInAccountBookSharingActionSheet:(id)arg1;
- (void)handleAlipay:(id)arg1;
- (void)popupMenuView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)jsonStringWithDictionary:(id)arg1;
- (id)parserUrlParams:(id)arg1;
- (void)notifyPageAfterEncodeUserInfo:(id)arg1;
- (void)reloadWebView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)sendUserInfo:(id)arg1 withExtraValue:(id)arg2;
- (void)addLotteryTimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getUserApplyCardBankInfoAndApplyCardSuccessfullyURLs;
- (void)loadRequest:(id)arg1;
- (id)getLogOutUrl;
- (id)getAccountManageUrl;
- (id)getHelpUrl;
- (id)getLoginUrl;
- (void)showAccountManagePage;
- (void)showHelpPage;
- (void)showLoginCreditInvestigation;
- (void)logOutCreditInvestigation;
- (id)getSessionId;
- (id)getCurrentySignInAccount;
- (void)updateNavigationRightButton;
- (void)checkCurrentyPageType:(id)arg1;
- (struct CGPoint)popupPoint;
- (void)showPopUpMenu:(id)arg1;
- (void)hidePopUpMenu;
- (void)handleMoreButtonClick:(id)arg1;
- (void)handleHelpButtonClick;
- (void)initMoreButton;
- (void)initHelpButton;
- (void)aliPayFailure:(id)arg1;
- (void)aliPaySuccess:(id)arg1;
- (void)showNoNetworkPlaceHolder:(_Bool)arg1;
- (void)updateTitle;
- (void)backAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)registUserAgentForHuize;
- (id)initWithRequest:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

