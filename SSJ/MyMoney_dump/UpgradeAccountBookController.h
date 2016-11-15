//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AccountBookVo, DataSuiteVo, FDAccountBookHeaderView, NSString, RemoteAccountService, SyncCenterUI, UITableView;

@interface UpgradeAccountBookController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    AccountBookVo *_previousSelectedAccountBook;
    AccountBookVo *_upgradedAccountBook;
    DataSuiteVo *_dataSuiteVo;
    long long _syncAccountBookId;
    NSString *_syncAccountBookName;
    RemoteAccountService *_service;
    AccountBookVo *_accountBookVo;
    _Bool _isUpgradeSyncedDB;
    _Bool _needUserConfirm;
    _Bool _sameAccountBookAsPreviousSelectedAccountBook;
    id <UpgradeAccountBookControllerDelegate> _delegate;
    SyncCenterUI *_syncCenterUI;
    UITableView *_tableView;
    FDAccountBookHeaderView *_headerView;
}

@property(retain, nonatomic) FDAccountBookHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SyncCenterUI *syncCenterUI; // @synthesize syncCenterUI=_syncCenterUI;
@property(retain, nonatomic) RemoteAccountService *service; // @synthesize service=_service;
@property(nonatomic) _Bool sameAccountBookAsPreviousSelectedAccountBook; // @synthesize sameAccountBookAsPreviousSelectedAccountBook=_sameAccountBookAsPreviousSelectedAccountBook;
@property(nonatomic) __weak id <UpgradeAccountBookControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needUserConfirm; // @synthesize needUserConfirm=_needUserConfirm;
@property(retain, nonatomic) AccountBookVo *upgradedAccountBook; // @synthesize upgradedAccountBook=_upgradedAccountBook;
@property(retain, nonatomic) NSString *syncAccountBookName; // @synthesize syncAccountBookName=_syncAccountBookName;
@property(nonatomic) long long syncAccountBookId; // @synthesize syncAccountBookId=_syncAccountBookId;
@property(retain, nonatomic) AccountBookVo *previousSelectedAccountBook; // @synthesize previousSelectedAccountBook=_previousSelectedAccountBook;
@property(retain, nonatomic) AccountBookVo *accountBookVo; // @synthesize accountBookVo=_accountBookVo;
@property(retain, nonatomic) DataSuiteVo *dataSuiteVo; // @synthesize dataSuiteVo=_dataSuiteVo;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)syncViewWillDismiss;
- (void)didFinishWithSuccess:(_Bool)arg1;
- (void)syncWithUsername:(id)arg1 password:(id)arg2 firstAccountBook:(id)arg3 secondAccountBook:(id)arg4 selectedAccountBook:(id)arg5;
- (void)uploadAccountBookWithSyncAccountUsername:(id)arg1 password:(id)arg2;
- (void)showAlertMessage:(id)arg1;
- (void)upgradeAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccountBook:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

