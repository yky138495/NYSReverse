//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ACLRoleVo, NSArray, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface RoleUserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasChanged;
    id <RoleUserViewControllerDelegate> _delegate;
    ACLRoleVo *_roleVo;
    UITableView *_tableView;
    NSArray *_members;
    NSMutableArray *_selectableMembers;
    UILabel *_firstSectionHeaderLabel;
    UIView *_firstSectionHeaderSeparator;
}

@property(nonatomic) _Bool hasChanged; // @synthesize hasChanged=_hasChanged;
@property(retain, nonatomic) UIView *firstSectionHeaderSeparator; // @synthesize firstSectionHeaderSeparator=_firstSectionHeaderSeparator;
@property(retain, nonatomic) UILabel *firstSectionHeaderLabel; // @synthesize firstSectionHeaderLabel=_firstSectionHeaderLabel;
@property(retain, nonatomic) NSMutableArray *selectableMembers; // @synthesize selectableMembers=_selectableMembers;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) ACLRoleVo *roleVo; // @synthesize roleVo=_roleVo;
@property(nonatomic) __weak id <RoleUserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingDeleteForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingInsertForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFirstSectionHeader;
- (void)backAction;
- (void)notificateDelegateIfNeeded;
- (void)saveRoleVoIfNeeded;
- (void)setupSelectableMembers;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

