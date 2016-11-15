//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface FDCommonSyncErrorListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_errorListArray;
}

@property(retain, nonatomic) NSMutableArray *errorListArray; // @synthesize errorListArray=_errorListArray;
- (void).cxx_destruct;
- (void)backAction;
- (void)showMutiGradeCategoryErrorFixController;
- (void)showUnKnowErrorFixController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)creatFooterView;
- (void)addTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
