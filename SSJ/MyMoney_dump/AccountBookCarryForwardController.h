//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class AccountBookCarryForwardStepView, DumpDataHelper, KDTabView, NSDate, NSString, RemoteAccountService, SyncCenterUI, Triangle, UIButton, UIDatePicker, UILabel, UIScrollView, UIView;

@interface AccountBookCarryForwardController : UIViewController <UIScrollViewDelegate>
{
    _Bool _isAnimating;
    KDTabView *_dateTabView;
    UIDatePicker *_datePicker;
    NSDate *currentDate;
    UIButton *timeButton;
    UIView *selectedView;
    AccountBookCarryForwardStepView *_stepView;
    UILabel *_descriptionLabel;
    UIScrollView *_scrollView;
    Triangle *_triangleView;
    UILabel *_congratDetailLabel;
    DumpDataHelper *_dumpDataHelper;
    SyncCenterUI *_syncCenterUI;
    RemoteAccountService *_remoteAccountService;
}

@property(retain, nonatomic) RemoteAccountService *remoteAccountService; // @synthesize remoteAccountService=_remoteAccountService;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) SyncCenterUI *syncCenterUI; // @synthesize syncCenterUI=_syncCenterUI;
@property(retain, nonatomic) DumpDataHelper *dumpDataHelper; // @synthesize dumpDataHelper=_dumpDataHelper;
@property(retain, nonatomic) UILabel *congratDetailLabel; // @synthesize congratDetailLabel=_congratDetailLabel;
@property(retain, nonatomic) Triangle *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) AccountBookCarryForwardStepView *stepView; // @synthesize stepView=_stepView;
- (void).cxx_destruct;
- (void)showFailedAlertWithMessage:(id)arg1;
- (void)viewAccountBooksAction;
- (void)didReceiveMemoryWarning;
- (void)jumpToResultViewAction;
- (id)processAnimation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)animateArrow;
- (void)syncAccountBook;
- (void)dumpData;
- (void)startAccountBookCarryForward;
- (void)startAccountBookCarryForwardAlertIfNeeded;
- (void)hideNavBarButtonItems;
- (void)showNavBarButtonItems;
- (void)creatResultView:(id)arg1;
- (void)creatAccountBookTransImageShowView:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)dateChangedAction:(id)arg1;
- (void)initPickerIfNeeded;
- (void)timeButtonSelected;
- (id)getCurrentDateForSearch;
- (id)getCurrentDateStringForDisplay;
- (id)creatTimeSelectView;
- (id)creatDescriptionLabel;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

