//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

@interface FilterBaseSelectionViewController : BaseTableViewController
{
    _Bool _fullySelected;
    id <FilterBaseSelectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FilterBaseSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fullySelected; // @synthesize fullySelected=_fullySelected;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)numberOfSelectedData;
- (unsigned long long)numberOfData;
- (id)tableView:(id)arg1 commonSelectionCellForRowAtIndexPath:(id)arg2;
- (void)didSelectCommonSelectionCellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 allSelectionCellForRowAtIndexPath:(id)arg2;
- (void)didSelectAllSelectionCellAction;
- (void)refreshSelectionStates;
- (_Bool)isIndexPathForAllSelectionCell:(id)arg1;
- (void)batchSelect:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

