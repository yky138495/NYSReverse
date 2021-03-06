//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MessageCenterNetwork, MessageCenterPusher, NSArray, NSMutableArray, NSString, UITableView;

@interface AllMessageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_allMessages;
    NSArray *_unreadMessages;
    MessageCenterNetwork *_network;
    MessageCenterPusher *_pusher;
}

@property(retain, nonatomic) MessageCenterPusher *pusher; // @synthesize pusher=_pusher;
@property(retain, nonatomic) MessageCenterNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *unreadMessages; // @synthesize unreadMessages=_unreadMessages;
@property(retain, nonatomic) NSMutableArray *allMessages; // @synthesize allMessages=_allMessages;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isEmpty;
- (void)clearReadMessages;
- (void)handleEmptyButton;
- (void)handleMarkAllMessageReadButton;
- (void)updateNavigationRightBarButton;
- (void)initNavigationBar;
- (void)initTableView;
- (void)initSubviews;
- (void)initDatas;
- (void)didReceiveMemoryWarning;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

