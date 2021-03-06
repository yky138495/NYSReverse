//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

@interface RemindSettingController : BaseTableViewController
{
}

- (_Bool)isDownloadedShareAccountBook;
- (_Bool)hasUserLoggineed;
- (_Bool)checkNetworkStatusWithSender:(id)arg1;
- (void)bbsNotificationSwitch:(id)arg1 type:(id)arg2;
- (void)subscribeNewsWithSender:(id)arg1 type:(id)arg2;
- (id)setCell:(id)arg1 forFinanceSectionRowAtIndexPath:(id)arg2;
- (id)setCell:(id)arg1 forFinanceTaskSectionRowAtIndexPath:(id)arg2;
- (id)setCell:(id)arg1 forBBSSectionRowAtIndexPath:(id)arg2;
- (id)setCell:(id)arg1 forFuctionSectionRowAtIndexPath:(id)arg2;
- (id)setCell:(id)arg1 forNormalSectionRowAtIndexPath:(id)arg2;
- (void)enableFinancialTaskMessage:(id)arg1;
- (void)enableFinancialTaskPopup:(id)arg1;
- (void)subscribeTop10SwitchAction:(id)arg1;
- (void)subscribeFridaySwitchAction:(id)arg1;
- (void)subscribeWednesdaySwitchAction:(id)arg1;
- (void)subscribeMondaySwitchAction:(id)arg1;
- (void)subscribeBBSOptAction:(id)arg1;
- (void)subscribeBBSMentionAction:(id)arg1;
- (void)subscribeBBSReplyAction:(id)arg1;
- (void)multiUserAccountBookNotificationSwitchAction:(id)arg1;
- (void)templateTransactionNotificationSwitchAction:(id)arg1;
- (void)subsribeAccountBookUpdateNotificationSwitchAction:(id)arg1;
- (void)muteSwitchAction:(id)arg1;
- (void)budgetAlertSwitchAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

