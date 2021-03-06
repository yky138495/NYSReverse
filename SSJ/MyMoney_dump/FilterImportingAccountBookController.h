//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "FilterViewControllerDelegate.h"

@class AccountBookVo, NSArray, NSMutableDictionary, NSString, TimeSpan;

@interface FilterImportingAccountBookController : BaseTableViewController <FilterViewControllerDelegate>
{
    AccountBookVo *_importedAccountBook;
    AccountBookVo *_importingAccountBook;
    NSArray *_accounts;
    NSMutableDictionary *_filteredAccounts;
    NSString *_filteredAccountString;
    TimeSpan *_filteredTimeSpan;
    _Bool _allDate;
}

@property(retain, nonatomic) TimeSpan *filteredTimeSpan; // @synthesize filteredTimeSpan=_filteredTimeSpan;
@property(retain, nonatomic) NSMutableDictionary *filteredAccounts; // @synthesize filteredAccounts=_filteredAccounts;
@property(retain, nonatomic) NSString *filteredAccountString; // @synthesize filteredAccountString=_filteredAccountString;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) AccountBookVo *importingAccountBook; // @synthesize importingAccountBook=_importingAccountBook;
@property(retain, nonatomic) AccountBookVo *importedAccountBook; // @synthesize importedAccountBook=_importedAccountBook;
- (void).cxx_destruct;
- (void)filterViewControllerDidSelectQuickTimeType:(long long)arg1;
- (void)filterViewControllerDidSelectAllDate;
- (void)filter;
- (void)importAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)stringFromFilteredDict:(id)arg1 type:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithImportedAccountBook:(id)arg1 importingAccountBook:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

