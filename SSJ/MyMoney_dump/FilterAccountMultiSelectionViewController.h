//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDCollapsableTableViewController.h"

@class NSMutableDictionary;

@interface FilterAccountMultiSelectionViewController : FDCollapsableTableViewController
{
    CDUnknownBlockType _completeHandler;
    NSMutableDictionary *_mainToSubAccountMap;
}

@property(retain, nonatomic) NSMutableDictionary *mainToSubAccountMap; // @synthesize mainToSubAccountMap=_mainToSubAccountMap;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void).cxx_destruct;
- (id)allSubAccounts;
- (id)sectionModelWithMainAccountId:(long long)arg1;
- (id)sectionModelWithSubAccount:(id)arg1;
- (id)allAccountSectionSources;
- (id)selectedSectionSourcesWithSelectedAccounts:(id)arg1;
- (id)selectedAccountDict;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSelectedAccounts:(id)arg1 isFullySelected:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

