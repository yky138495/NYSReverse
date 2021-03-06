//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LoginViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSNumber, NSString, ScoreBoardLabel, SyncCenterUI, UIButton, UITableView;

@interface ForumCreditController : UIViewController <UITableViewDataSource, UITableViewDelegate, LoginViewControllerDelegate>
{
    _Bool _launchedOnce;
    _Bool _getFinanceAccountStatusOnce;
    _Bool _leftForAddingExpense;
    _Bool _financeAccountIsOpened;
    _Bool _isLogin;
    _Bool _shouldShowFirstLoginTask;
    _Bool _totalCreditNeedToDelay;
    _Bool _needToGetEmailReward;
    _Bool _needToGetPhoneReward;
    UITableView *_tableView;
    SyncCenterUI *_syncCenterUI;
    NSDictionary *_taskDicts;
    NSArray *_tasks;
    ScoreBoardLabel *_totalCreditLabel;
    NSNumber *_totalCredit;
    UIButton *_lastGetCreditButton;
}

@property(nonatomic) _Bool needToGetPhoneReward; // @synthesize needToGetPhoneReward=_needToGetPhoneReward;
@property(nonatomic) _Bool needToGetEmailReward; // @synthesize needToGetEmailReward=_needToGetEmailReward;
@property(nonatomic) _Bool totalCreditNeedToDelay; // @synthesize totalCreditNeedToDelay=_totalCreditNeedToDelay;
@property(retain, nonatomic) UIButton *lastGetCreditButton; // @synthesize lastGetCreditButton=_lastGetCreditButton;
@property(nonatomic) _Bool shouldShowFirstLoginTask; // @synthesize shouldShowFirstLoginTask=_shouldShowFirstLoginTask;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) NSNumber *totalCredit; // @synthesize totalCredit=_totalCredit;
@property(nonatomic) _Bool financeAccountIsOpened; // @synthesize financeAccountIsOpened=_financeAccountIsOpened;
@property(nonatomic) _Bool leftForAddingExpense; // @synthesize leftForAddingExpense=_leftForAddingExpense;
@property(nonatomic) _Bool getFinanceAccountStatusOnce; // @synthesize getFinanceAccountStatusOnce=_getFinanceAccountStatusOnce;
@property(nonatomic) _Bool launchedOnce; // @synthesize launchedOnce=_launchedOnce;
@property(retain, nonatomic) ScoreBoardLabel *totalCreditLabel; // @synthesize totalCreditLabel=_totalCreditLabel;
@property(retain, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSDictionary *taskDicts; // @synthesize taskDicts=_taskDicts;
@property(retain, nonatomic) SyncCenterUI *syncCenterUI; // @synthesize syncCenterUI=_syncCenterUI;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)refreshCreditIfBinded;
- (void)loginViewControllerDidFinishedSync:(id)arg1;
- (_Bool)handleNeedLogin;
- (void)creditDetailAction;
- (void)syncAction;
- (void)refreshTotalCredit;
- (void)setFinanceAccountOpenStatus;
- (id)postIdWithUrlString:(id)arg1;
- (void)bindEmailIfCanDo;
- (void)verifyPhoneNumberIfCanDo;
- (void)getCreditAction:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setTotalCreditLabelWithDecimalNumber:(id)arg1 animated:(_Bool)arg2;
- (void)enterCreditMall:(id)arg1;
- (void)enterLottery;
- (void)setupHeader;
- (_Bool)isEmailBinded;
- (_Bool)isMobileVerified;
- (void)reorderToShowCellAccordinglyWithTasks:(id)arg1;
- (void)reloadData;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshLoginStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showCreditDetailBar;
- (void)viewDidLoad;
- (void)loadView;
- (void)unregisterKVO;
- (void)registerKVO;
- (id)init;
- (id)initWithTasks:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

