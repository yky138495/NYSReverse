//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSIndexPath, NSString;

@interface SuperTransactionSettingViewController : UITableViewController
{
    _Bool _showFilterView;
    _Bool _showBottomToolView;
    NSIndexPath *_selectedIndexPath;
    NSString *_selectedFilterName;
    id <SuperTransactionSettingViewControllerDelegate><SuperTransactionCollectorTypeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SuperTransactionSettingViewControllerDelegate><SuperTransactionCollectorTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *selectedFilterName; // @synthesize selectedFilterName=_selectedFilterName;
@property(nonatomic) __weak NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool showBottomToolView; // @synthesize showBottomToolView=_showBottomToolView;
@property(nonatomic) _Bool showFilterView; // @synthesize showFilterView=_showFilterView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeBottomToolViewShowFlag:(id)arg1;
- (void)changeShowFilterViewFlag:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;

@end

