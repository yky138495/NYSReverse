//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LoginViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class FinanceBottomDidLoginView, FinanceBottomUnLoginView, HMSegmentedControl, NSMutableArray, NSString, UIImageView, UIScrollView, UITapGestureRecognizer;

@interface FinanceCenterViewController : UIViewController <UIScrollViewDelegate, LoginViewControllerDelegate>
{
    _Bool _hasSentLoadAllInitalRequestNotification;
    _Bool _isActivity;
    UIImageView *_forumRedPoint;
    UIImageView *_marketRedPoint;
    HMSegmentedControl *_segmentedControl;
    UIScrollView *_scrollView;
    NSMutableArray *_controllers;
    unsigned long long _currentIndex;
    unsigned long long _financeMarketSegmentIndex;
    FinanceBottomUnLoginView *_bottomUnLoginView;
    FinanceBottomDidLoginView *_bottomDidLoginView;
    UITapGestureRecognizer *_tapBottomGestureRecognizer;
}

@property(nonatomic) _Bool isActivity; // @synthesize isActivity=_isActivity;
@property(retain, nonatomic) UITapGestureRecognizer *tapBottomGestureRecognizer; // @synthesize tapBottomGestureRecognizer=_tapBottomGestureRecognizer;
@property(retain, nonatomic) FinanceBottomDidLoginView *bottomDidLoginView; // @synthesize bottomDidLoginView=_bottomDidLoginView;
@property(retain, nonatomic) FinanceBottomUnLoginView *bottomUnLoginView; // @synthesize bottomUnLoginView=_bottomUnLoginView;
@property(nonatomic) _Bool hasSentLoadAllInitalRequestNotification; // @synthesize hasSentLoadAllInitalRequestNotification=_hasSentLoadAllInitalRequestNotification;
@property(nonatomic) unsigned long long financeMarketSegmentIndex; // @synthesize financeMarketSegmentIndex=_financeMarketSegmentIndex;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIImageView *marketRedPoint; // @synthesize marketRedPoint=_marketRedPoint;
@property(retain, nonatomic) UIImageView *forumRedPoint; // @synthesize forumRedPoint=_forumRedPoint;
- (void).cxx_destruct;
- (void)switchScrollEnabled:(_Bool)arg1;
- (void)showBottomBar:(_Bool)arg1;
- (void)loginViewControllerDidFinishedSync:(id)arg1;
- (void)setScrollsToTopForScrollViewWithControllerIndex:(long long)arg1;
- (_Bool)isVIPForCurrentUser;
- (void)goToMarket;
- (void)goToCreditCenter;
- (void)goToPersonalCenter;
- (void)goToLogin;
- (void)updateWalletViewUI;
- (void)reloadUserInfo;
- (void)setupBottomDidLoginView;
- (void)logBusineseIDAccordingToIndex:(long long)arg1;
- (void)tabChangedWithIndex:(unsigned long long)arg1;
- (void)segementedControlValueChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)hideFinanceMarketRedPoint;
- (void)addNotification;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithFinanceMarketSegmentIndex:(unsigned long long)arg1;
- (id)initWithFinanceMarket;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
