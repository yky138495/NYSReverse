//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "LoanCenterViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface MigrationViewController : BaseTableViewController <UITableViewDataSource, UITableViewDelegate, LoanCenterViewControllerDelegate>
{
    NSArray *_transactions;
    long long _accountId;
    NSString *_accountName;
    NSString *_creditorName;
    int _accountType;
    NSMutableArray *_selectedTransactions;
}

@property(retain, nonatomic) NSMutableArray *selectedTransactions; // @synthesize selectedTransactions=_selectedTransactions;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSString *creditorName; // @synthesize creditorName=_creditorName;
@property(retain, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
- (void).cxx_destruct;
- (void)loanCenterController:(id)arg1 didSelectCreditor:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForMigrationTransactionRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForCreditorRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)delayDismisDSView:(id)arg1;
- (void)migrationAction:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAccountId:(long long)arg1 accountName:(id)arg2 accountType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

