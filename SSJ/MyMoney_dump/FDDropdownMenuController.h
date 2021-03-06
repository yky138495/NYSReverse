//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray;

@interface FDDropdownMenuController : UITableViewController
{
    _Bool _showBottomEditButton;
    int _initialSelectedIndex;
    NSArray *_datasource;
    CDUnknownBlockType _selectionChangedBlock;
    id <FDDropdownMenuControllerDelegate> _delegate;
}

@property(nonatomic) _Bool showBottomEditButton; // @synthesize showBottomEditButton=_showBottomEditButton;
@property(nonatomic) __weak id <FDDropdownMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int initialSelectedIndex; // @synthesize initialSelectedIndex=_initialSelectedIndex;
@property(copy, nonatomic) CDUnknownBlockType selectionChangedBlock; // @synthesize selectionChangedBlock=_selectionChangedBlock;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)editButtonDidTap:(id)arg1;
- (double)menuItemHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)registerClasses;

@end

