//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "NoConnectCellDelegate.h"
#import "SectionHeaderViewDataSource.h"
#import "SectionHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UnReadMessageHeaderCellDelegate.h"

@class EGORefreshTableHeaderView, FundAdvertisement, MessageCenterNetwork, MessageCenterPusher, MessageReadFooter, MessageUnReadHeader, NSMutableArray, NSString, UINavigationController, UITableView;

@interface NativeMessageCenterViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SectionHeaderViewDataSource, SectionHeaderViewDelegate, NoConnectCellDelegate, UnReadMessageHeaderCellDelegate, EGORefreshTableHeaderDelegate>
{
    _Bool _suppressFetchMessage;
    _Bool _isLoadFail;
    _Bool _hasFinishLoad;
    UITableView *_tableView;
    id <MessageCenterViewControllerDelegate> _delegate;
    NSMutableArray *_hotTopicArray;
    NSMutableArray *_specialTopicArray;
    NSMutableArray *_recommendPostArray;
    FundAdvertisement *_fundAdvertisement;
    long long _pageNum;
    double _noConnectCellHeight;
    MessageCenterNetwork *_network;
    UINavigationController *_passcodeNavigationController;
    MessageReadFooter *_tableFooterView;
    MessageUnReadHeader *_tableHeaderView;
    NSMutableArray *_unreadMessages;
    MessageCenterPusher *_pusher;
    EGORefreshTableHeaderView *_refreshHeaderView;
    NSMutableArray *_allMessages;
}

+ (_Bool)showMessageForIdentifier:(id)arg1 onNavigationController:(id)arg2;
@property(retain, nonatomic) NSMutableArray *allMessages; // @synthesize allMessages=_allMessages;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) MessageCenterPusher *pusher; // @synthesize pusher=_pusher;
@property(retain, nonatomic) NSMutableArray *unreadMessages; // @synthesize unreadMessages=_unreadMessages;
@property(retain, nonatomic) MessageUnReadHeader *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MessageReadFooter *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UINavigationController *passcodeNavigationController; // @synthesize passcodeNavigationController=_passcodeNavigationController;
@property(retain, nonatomic) MessageCenterNetwork *network; // @synthesize network=_network;
@property(nonatomic) _Bool hasFinishLoad; // @synthesize hasFinishLoad=_hasFinishLoad;
@property(nonatomic) _Bool isLoadFail; // @synthesize isLoadFail=_isLoadFail;
@property(nonatomic) double noConnectCellHeight; // @synthesize noConnectCellHeight=_noConnectCellHeight;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) FundAdvertisement *fundAdvertisement; // @synthesize fundAdvertisement=_fundAdvertisement;
@property(retain, nonatomic) NSMutableArray *recommendPostArray; // @synthesize recommendPostArray=_recommendPostArray;
@property(retain, nonatomic) NSMutableArray *specialTopicArray; // @synthesize specialTopicArray=_specialTopicArray;
@property(retain, nonatomic) NSMutableArray *hotTopicArray; // @synthesize hotTopicArray=_hotTopicArray;
@property(nonatomic) _Bool suppressFetchMessage; // @synthesize suppressFetchMessage=_suppressFetchMessage;
@property(nonatomic) __weak id <MessageCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)hasLoadSuccess;
- (void)showSettings:(id)arg1;
- (_Bool)hasLoadDataSuccess;
- (void)noConnectCellRetryLabelDidTap:(id)arg1;
- (void)UnReadMessageHeaderCell:(id)arg1 markAllMessageButtonDidTap:(id)arg2;
- (void)SectionHeaderView:(id)arg1 didSelectAtSection:(long long)arg2;
- (id)detailTextForSectionHeader:(id)arg1 section:(long long)arg2;
- (_Bool)sectionHeadViewNeedShowTopSpliteLine:(id)arg1 section:(long long)arg2;
- (_Bool)sectionHeadViewNeedShowDetailLabel:(id)arg1 section:(long long)arg2;
- (id)titleForSectionHeader:(id)arg1 section:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getMoreRecommendData;
- (void)getRecommendData;
- (void)getFundAdvertisementData;
- (void)addFooterRefreshForTableView;
- (void)registerCellAndHeaderViewForTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetArraysAndPageNum;
- (void)updateUI;
- (void)enterGuideAction;
- (void)finishAction:(id)arg1;
- (void)pushToAllMessageCenter;
- (void)updateNavigationRightBarButton;
- (void)markAllMessageRead;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)isUnreadMessagesEmpty;
- (_Bool)isEmpty;
- (void)reloadMessagesAndNotifyRedDotIfNoUnread;
- (id)attributedStringForIndexPath:(id)arg1;
- (void)initSubviews;
- (void)setupNavigationBar;
- (void)initData;
- (id)navigationController;
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

