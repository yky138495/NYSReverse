//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QueryServiceDelegate.h"
#import "SyncQueueConnectionDelegate.h"
#import "SyncXmlServiceDelegate.h"
#import "UITableViewDataSource.h"

@class AccountBookVo, DataSuiteVo, NSArray, NSDictionary, NSMutableArray, NSString, QueryService, RemoteAccountService, SyncAccountBookStatusView, SyncQueueConnection, SyncXmlService, UIBarButtonItem, UITableView;

@interface SyncViewController : UIViewController <SyncQueueConnectionDelegate, SyncXmlServiceDelegate, QueryServiceDelegate, UITableViewDataSource>
{
    NSString *_username;
    NSString *_password;
    SyncXmlService *_syncXmlService;
    QueryService *_queryService;
    RemoteAccountService *_remoteService;
    SyncAccountBookStatusView *_statusView;
    UITableView *_syncLogTableView;
    AccountBookVo *_defaultAccountBook;
    AccountBookVo *_currentAccountBook;
    unsigned long long _currentAccountBookIndex;
    NSArray *_otherAccountBooks;
    NSArray *_bindIgnoreAccounts;
    AccountBookVo *_selectedAccountBookBeforeSync;
    DataSuiteVo *_dataSuiteVo;
    id <SyncViewControllerDelegate> _finishDelegate;
    UIBarButtonItem *_okButtonItem;
    UIBarButtonItem *_retryButtonItem;
    _Bool _shouldSyncToServerWhenAppear;
    NSMutableArray *_logs;
    _Bool _isAllAccountBooksSyncSuccess;
    _Bool _upgradeSync;
    NSArray *_ignoreBookVos;
    NSArray *_deletedBookVos;
    _Bool _disableAutoDismiss;
    _Bool _needRetry;
    _Bool _needAddMember;
    double _timeBeginLogin;
    double _timeBeginUpload;
    SyncQueueConnection *_syncQueueConnection;
    double _syncBegin;
    double _syncEnd;
    NSString *_syncAccountName;
    NSString *_syncAccountPassword;
    NSDictionary *_mapOfAccountUDID;
}

@property(retain, nonatomic) NSDictionary *mapOfAccountUDID; // @synthesize mapOfAccountUDID=_mapOfAccountUDID;
@property(retain, nonatomic) NSString *syncAccountPassword; // @synthesize syncAccountPassword=_syncAccountPassword;
@property(retain, nonatomic) NSString *syncAccountName; // @synthesize syncAccountName=_syncAccountName;
@property(retain, nonatomic) DataSuiteVo *dataSuiteVo; // @synthesize dataSuiteVo=_dataSuiteVo;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool needRetry; // @synthesize needRetry=_needRetry;
@property(nonatomic) double syncEnd; // @synthesize syncEnd=_syncEnd;
@property(nonatomic) double syncBegin; // @synthesize syncBegin=_syncBegin;
@property(nonatomic) _Bool needAddMember; // @synthesize needAddMember=_needAddMember;
@property(retain, nonatomic) RemoteAccountService *remoteService; // @synthesize remoteService=_remoteService;
@property(retain, nonatomic) NSArray *bindIgnoreAccounts; // @synthesize bindIgnoreAccounts=_bindIgnoreAccounts;
@property(nonatomic) _Bool disableAutoDismiss; // @synthesize disableAutoDismiss=_disableAutoDismiss;
@property(retain, nonatomic) NSArray *deletedBookVos; // @synthesize deletedBookVos=_deletedBookVos;
@property(retain, nonatomic) NSArray *ignoreBookVos; // @synthesize ignoreBookVos=_ignoreBookVos;
@property(retain, nonatomic) SyncQueueConnection *syncQueueConnection; // @synthesize syncQueueConnection=_syncQueueConnection;
@property(nonatomic) _Bool upgradeSync; // @synthesize upgradeSync=_upgradeSync;
@property(retain, nonatomic) NSMutableArray *logs; // @synthesize logs=_logs;
@property(retain, nonatomic) UITableView *syncLogTableView; // @synthesize syncLogTableView=_syncLogTableView;
@property(retain, nonatomic) UIBarButtonItem *retryButtonItem; // @synthesize retryButtonItem=_retryButtonItem;
@property(retain, nonatomic) UIBarButtonItem *okButtonItem; // @synthesize okButtonItem=_okButtonItem;
@property(nonatomic) __weak id <SyncViewControllerDelegate> finishDelegate; // @synthesize finishDelegate=_finishDelegate;
@property(retain, nonatomic) AccountBookVo *selectedAccountBookBeforeSync; // @synthesize selectedAccountBookBeforeSync=_selectedAccountBookBeforeSync;
@property(retain, nonatomic) NSArray *otherAccountBooks; // @synthesize otherAccountBooks=_otherAccountBooks;
@property(retain, nonatomic) AccountBookVo *currentAccountBook; // @synthesize currentAccountBook=_currentAccountBook;
@property(retain, nonatomic) AccountBookVo *defaultAccountBook; // @synthesize defaultAccountBook=_defaultAccountBook;
@property(retain, nonatomic) SyncAccountBookStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) QueryService *queryService; // @synthesize queryService=_queryService;
@property(retain, nonatomic) SyncXmlService *syncXmlService; // @synthesize syncXmlService=_syncXmlService;
- (void).cxx_destruct;
- (id)memberNames;
- (void)createMemberAssociateWithDatabaseWithAccountBook:(id)arg1;
- (void)retryAction;
- (void)finishAction;
- (id)currencyCodesFromPlist;
- (void)showFailedMessage:(id)arg1;
- (void)endSyncAction;
- (_Bool)isSelectedAccountBookHaveBeenDeleted;
- (_Bool)saveData:(id)arg1 atPath:(id)arg2 withName:(id)arg3;
- (_Bool)downloadFileFromURL:(id)arg1 atPath:(id)arg2 withName:(id)arg3;
- (void)fetchAccountInfo;
- (void)syncNextAccountBookIfNeeds;
- (void)service:(id)arg1 queryExchangeSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)fetchExchangeQuotes;
- (void)service:(id)arg1 didAbortCauseBy:(int)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didRollbackSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didHeartbeatSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didUploadSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didCommitPushSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didSyncPhotosSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didCommitSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)service:(id)arg1 didLoginSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (void)syncQueueConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)fastSyncAction;
- (void)overCurrencyBookSyncWithMessage:(id)arg1;
- (void)normalSyncActionWithDictionary:(id)arg1;
- (void)syncQueueConnection:(id)arg1 didFinishWithDictionary:(id)arg2;
- (void)beginLogin;
- (void)beginSyncQueueConnect;
- (void)syncToServerWithAccountBookVo:(id)arg1;
- (void)addLogWithSuccess:(_Bool)arg1 message:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)simulateSyncSuccessProgress;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resetWithUsername:(id)arg1 password:(id)arg2 defaultAccountBook:(id)arg3 otherAccountBooks:(id)arg4 selectedAccountBookBeforeSync:(id)arg5 dataSuiteVo:(id)arg6 ignoreBookVos:(id)arg7 bindIgnoreAccounts:(id)arg8;
- (id)initWithUsername:(id)arg1 password:(id)arg2 defaultAccountBook:(id)arg3 otherAccountBooks:(id)arg4 selectedAccountBookBeforeSync:(id)arg5 dataSuiteVo:(id)arg6 ignoreBookVos:(id)arg7 deletedBookVos:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

