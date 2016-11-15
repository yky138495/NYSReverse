//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGCollapsableTableViewController.h"

@class EGORefreshTableHeaderView, FDRefreshTableFooterView, NSString, SuperTzMainViewController;

@interface SuperTzTransactionListViewController : MGCollapsableTableViewController
{
    CDUnknownBlockType _scrollViewWillBeginDraggingBlock;
    CDUnknownBlockType _scrollViewDidScrollBlock;
    SuperTzMainViewController *_mainViewController;
    long long _expandedSectionIndex;
    NSString *_expandedSectionName;
    EGORefreshTableHeaderView *_refreshHeaderView;
    FDRefreshTableFooterView *_refreshFooterView;
    long long _listType;
}

@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(retain, nonatomic) FDRefreshTableFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(copy, nonatomic) NSString *expandedSectionName; // @synthesize expandedSectionName=_expandedSectionName;
@property(nonatomic) long long expandedSectionIndex; // @synthesize expandedSectionIndex=_expandedSectionIndex;
@property(nonatomic) __weak SuperTzMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewWillBeginDraggingBlock; // @synthesize scrollViewWillBeginDraggingBlock=_scrollViewWillBeginDraggingBlock;
- (void).cxx_destruct;
- (void)collapseablePreSection:(id)arg1 isCollapsed:(_Bool)arg2;
- (void)collapseableSection:(id)arg1 isCollapsed:(_Bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)handleEditTransactionWithTransactionPOID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)superTzListTypeWithMoreSegmentRow:(long long)arg1;
- (long long)superTzListTypeWithTimeSegmentRow:(long long)arg1;
- (void)setCurrentListTypeWithCurrentFilterIndexPath:(id)arg1;
- (void)setSections:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)registerTableViewTypes;
- (id)init;

@end

