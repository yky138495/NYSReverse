//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class MessageCenterNetwork, MessageCenterPusher, MessageReadFooter, MessageUnReadHeader, NSMutableArray, UINavigationController;

@interface MessageCenterViewController : UITableViewController
{
    UINavigationController *_passcodeNavigationController;
    _Bool _suppressFetchMessage;
    id <MessageCenterViewControllerDelegate> _delegate;
    MessageCenterNetwork *_network;
    MessageReadFooter *_tableFooterView;
    MessageUnReadHeader *_tableHeaderView;
    NSMutableArray *_unreadMessages;
    MessageCenterPusher *_pusher;
}

+ (_Bool)showMessageForIdentifier:(id)arg1 onNavigationController:(id)arg2;
@property(retain, nonatomic) MessageCenterPusher *pusher; // @synthesize pusher=_pusher;
@property(retain, nonatomic) NSMutableArray *unreadMessages; // @synthesize unreadMessages=_unreadMessages;
@property(retain, nonatomic) MessageUnReadHeader *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MessageReadFooter *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MessageCenterNetwork *network; // @synthesize network=_network;
@property(nonatomic) _Bool suppressFetchMessage; // @synthesize suppressFetchMessage=_suppressFetchMessage;
@property(nonatomic) __weak id <MessageCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UINavigationController *passcodeNavigationController; // @synthesize passcodeNavigationController=_passcodeNavigationController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateUI;
- (void)enterGuideAction;
- (void)finishAction:(id)arg1;
- (void)pushToUnReadMessageCenter;
- (_Bool)isEmpty;
- (void)markAllMessageRead;
- (void)showError:(id)arg1;
- (void)reloadMessagesAndNotifyRedDotIfNoUnread;
- (id)attributedStringForIndexPath:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initSubviews;
- (void)initData;
- (id)navigationController;
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end
