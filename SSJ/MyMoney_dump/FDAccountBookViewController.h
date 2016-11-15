//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AccountbookCreateViewControllerDelegate.h"
#import "DataSuiteSwitchControllerDelegate.h"
#import "FDAccountBookMultiSelectionViewControllerDelegate.h"
#import "KDAlertViewDelegate.h"
#import "LoginViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UpgradeAccountBookControllerDelegate.h"

@class AccountBookVo, FDAccountBookHeaderView, FDActionSheet, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSObject<OS_dispatch_source>, NSString, RemoteAccountService, RootViewController, SharedAccountBookUpdater, SyncCenterUI, UIButton, UIImageView, UILabel, UITableView;

@interface FDAccountBookViewController : UIViewController <DataSuiteSwitchControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, FDAccountBookMultiSelectionViewControllerDelegate, LoginViewControllerDelegate, UpgradeAccountBookControllerDelegate, KDAlertViewDelegate, AccountbookCreateViewControllerDelegate>
{
    FDAccountBookHeaderView *_localAccountBookHeaderView;
    NSIndexPath *_deletingIndexPath;
    NSIndexPath *_previousSelectedIndexPath;
    _Bool _needSlideBackToHome;
    _Bool _isEditing;
    _Bool _isEditFinished;
    _Bool _shouldAnimatedForStatusBar;
    _Bool _isMultiSelectedAccountBook;
    _Bool _isReplace;
    _Bool _noNeedToPullMsgs;
    NSMutableArray *_accountBooksBySection;
    UIButton *_avatarButton;
    UIButton *_expandButton;
    UILabel *_userNameLabel;
    UILabel *_accountLabel;
    UIImageView *_vipMedalImageView;
    UIButton *_syncButton;
    NSLayoutConstraint *_userNameLabelTopConstraint;
    UITableView *_tableView;
    RemoteAccountService *_remoteAccountService;
    SyncCenterUI *_syncCenterUI;
    NSString *_confirmPassword;
    FDActionSheet *_sharingAccountBookUpdateActionSheet;
    AccountBookVo *_quitingAccountBook;
    NSMutableArray *_shareAccountbooksToUpdate;
    SharedAccountBookUpdater *_updater;
    UIButton *_editButton;
    UIButton *_addButton;
    NSLayoutConstraint *_editButtonWidthConstraint;
    NSLayoutConstraint *_addButtonWidthConstraint;
    NSLayoutConstraint *_midLineViewCenterXConstraint;
    NSObject<OS_dispatch_source> *_askAdviceTimer;
    NSObject<OS_dispatch_source> *_needEnterPasswordTimer;
}

+ (id)viewControllerFromNib;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *needEnterPasswordTimer; // @synthesize needEnterPasswordTimer=_needEnterPasswordTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *askAdviceTimer; // @synthesize askAdviceTimer=_askAdviceTimer;
@property(nonatomic) __weak NSLayoutConstraint *midLineViewCenterXConstraint; // @synthesize midLineViewCenterXConstraint=_midLineViewCenterXConstraint;
@property(nonatomic) __weak NSLayoutConstraint *addButtonWidthConstraint; // @synthesize addButtonWidthConstraint=_addButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *editButtonWidthConstraint; // @synthesize editButtonWidthConstraint=_editButtonWidthConstraint;
@property(nonatomic) __weak UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) SharedAccountBookUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) NSMutableArray *shareAccountbooksToUpdate; // @synthesize shareAccountbooksToUpdate=_shareAccountbooksToUpdate;
@property(retain, nonatomic) AccountBookVo *quitingAccountBook; // @synthesize quitingAccountBook=_quitingAccountBook;
@property(retain, nonatomic) FDActionSheet *sharingAccountBookUpdateActionSheet; // @synthesize sharingAccountBookUpdateActionSheet=_sharingAccountBookUpdateActionSheet;
@property(copy, nonatomic) NSString *confirmPassword; // @synthesize confirmPassword=_confirmPassword;
@property(nonatomic) _Bool noNeedToPullMsgs; // @synthesize noNeedToPullMsgs=_noNeedToPullMsgs;
@property(nonatomic) _Bool needSlideBackToHome; // @synthesize needSlideBackToHome=_needSlideBackToHome;
@property(retain, nonatomic) SyncCenterUI *syncCenterUI; // @synthesize syncCenterUI=_syncCenterUI;
@property(retain, nonatomic) RemoteAccountService *remoteAccountService; // @synthesize remoteAccountService=_remoteAccountService;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSLayoutConstraint *userNameLabelTopConstraint; // @synthesize userNameLabelTopConstraint=_userNameLabelTopConstraint;
@property(nonatomic) __weak UIButton *syncButton; // @synthesize syncButton=_syncButton;
@property(nonatomic) __weak UIImageView *vipMedalImageView; // @synthesize vipMedalImageView=_vipMedalImageView;
@property(nonatomic) __weak UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) __weak UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) NSMutableArray *accountBooksBySection; // @synthesize accountBooksBySection=_accountBooksBySection;
- (void).cxx_destruct;
- (void)accountbookCreateViewController:(id)arg1 didCreateNewAccountbook:(id)arg2;
- (void)reloadRootControllerDataAlsoReloadHomeTableViewData:(_Bool)arg1;
- (void)reloadRootControllerData;
- (void)slideBackToHomeIfNeeded;
- (void)removeObservers;
- (void)addObservers;
@property(readonly, nonatomic) RootViewController *contentViewController;
- (id)navigationController;
- (void)addShareAccountBookToUpdate:(id)arg1;
- (void)startNeedEnterPasswordTimer;
- (void)accountBookSlideWithAction:(id)arg1;
- (void)finishSyncAction:(id)arg1;
- (void)switchToCurrentAccountBook;
- (void)updateUI:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)loginViewControllerDidFinishedSync:(id)arg1;
- (void)accountBookMultiSelectionViewController:(id)arg1 didFinishImportedAccountBookTemplates:(id)arg2;
- (void)presentLoginViewController;
- (void)loginWithSavedAccount:(id)arg1;
- (void)presentUpgradeControllerWithAccountBook:(id)arg1 needUserConfirm:(_Bool)arg2;
- (void)showAccountBookMultiSelectedViewControllerWithAnimated:(_Bool)arg1;
- (void)showLoginController;
- (void)showLoginControllerWithAccount:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isLogin;
- (void)dataSuiteDidChanged;
- (void)pushToNextViewController:(id)arg1;
- (void)showAccountInfoViewController;
- (void)showDataSuiteSwitchController;
- (void)loginAction;
- (void)handleSyncAction:(id)arg1;
- (void)handleLoginAction;
- (void)activateVIP;
- (_Bool)isVip;
- (void)updateLoggingAccount;
- (void)setupAvatarButton;
- (void)showErrorFixController;
- (void)updateShareAccountBook:(id)arg1;
- (void)updateShareAccountBooks;
- (_Bool)canUpgradeLocalAccoutBook;
- (void)syncToRemoteServerWithAccountName:(id)arg1 password:(id)arg2;
- (void)showUpgradeMultipleAccountBooks;
- (_Bool)upgradeLocalAccountbooksIfNeeded;
- (void)syncTasks;
- (void)syncAction;
- (void)presentBindMainAccountTipView;
- (_Bool)needDataSuiteSwitchFunction;
- (_Bool)hasBindSuiteSwitchFunction;
- (void)stopAdviceSheetAction;
- (void)showAdviceSheetAction;
- (void)excuteAdviceSheetAction;
- (_Bool)shouldShowRedHotWithAccountBookVo:(id)arg1;
- (id)switchToAccountBookIfNeededFrom:(id)arg1;
- (void)statisticClickedAccountBookType;
- (id)indexPathForCurrentAccountBook;
- (id)currentSelectedAccoutBook;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)currentTemplateImageId;
- (void)handleUpgradeAction:(id)arg1;
- (void)handleSetAction:(id)arg1;
- (void)setupTableView;
- (_Bool)selectLastAccountBookFromLocalAccountBooks;
- (_Bool)selectFirstAccountBookFromLocalAccountBooks;
- (_Bool)selectAccountBookAtIndexPath:(id)arg1;
- (void)fetchAccountBookShareNumberByAccountBookVo:(id)arg1 showInCell:(id)arg2;
- (void)reloadAccountBooks;
- (id)getPhoneNumOrEmailOrNicknameOrSyncAccountName;
- (void)deleteLocalDefaultAccountBookIfEmpty;
- (void)updateUI;
- (void)deleteLocalDefaultAccountBookWithAnimation:(_Bool)arg1;
- (void)deleteAccountBook:(id)arg1 previousAccountBook:(id)arg2 WithUsername:(id)arg3 password:(id)arg4 syncAccountId:(id)arg5;
- (void)deleteShareAccountBook:(id)arg1 previousAccountBook:(id)arg2 WithUsername:(id)arg3 password:(id)arg4 syncAccountId:(id)arg5;
- (void)alertWithError:(id)arg1;
- (void)deleteAccountBook;
- (void)startNeedEnterPasswordTimer;
- (void)deleteAccountBookWithIndexPath:(id)arg1;
- (_Bool)shouldReplaceAccountBookCover;
- (id)removeLocalAccountBookFromRemoteAccountBooks:(id)arg1;
- (void)syncDidFinishToReplaceOldCoverFromAccountBookIfNeeded;
- (void)replaceOldCoverFromAccountBook;
- (_Bool)replaceOldCoverWithAccountBook:(id)arg1;
- (id)allAccountBooks;
- (void)exportDataToPro;
- (id)generateExportURLstring:(id)arg1;
- (void)quitShareAccountBook;
- (void)quitShareAccountBook:(id)arg1 previousAccountBook:(id)arg2 WithUsername:(id)arg3 password:(id)arg4 syncAccountId:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)sendFailedUnsubscribeAccountBookShareCodesIfNeeded;
- (_Bool)canOpenProVersion;
- (void)showUpdateAccountBookViewControllerWithAccountBookVo:(id)arg1 isNeedUserConfirm:(_Bool)arg2;
- (void)updateToRemoteAccountBookWithAccountBook:(id)arg1 showShareAccountBookAlert:(_Bool)arg2;
- (void)tryShowSharingAccountBookHasUpdateActionSheet;
- (void)updateSharingAccountBookInfo;
- (void)showActivateVIPAlertIfNeeded;
- (void)setupTitleForButtons;
- (void)changeEditButtonWidthConstraint;
- (void)setupCreateButton;
- (void)setupEditButton;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)finishEditor;
- (void)handleNewAccountBookAction:(id)arg1;
- (void)hanldeSettingAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
