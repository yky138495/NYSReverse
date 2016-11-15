//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NormalMessageDetailViewController, NotificationMessage, SyncCenterUI, UIButton, UnsubscribeBehavior;

@interface AccountBookInvitationMessageDetailViewController : UIViewController
{
    _Bool _isJoining;
    NotificationMessage *_message;
    SyncCenterUI *_syncCenterUI;
    UIButton *_acceptButton;
    UIButton *_updateButton;
    NormalMessageDetailViewController *_normalController;
    UnsubscribeBehavior *_unsubscribeBehavior;
}

@property(retain, nonatomic) UnsubscribeBehavior *unsubscribeBehavior; // @synthesize unsubscribeBehavior=_unsubscribeBehavior;
@property(nonatomic) _Bool isJoining; // @synthesize isJoining=_isJoining;
@property(retain, nonatomic) NormalMessageDetailViewController *normalController; // @synthesize normalController=_normalController;
@property(retain, nonatomic) UIButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) SyncCenterUI *syncCenterUI; // @synthesize syncCenterUI=_syncCenterUI;
@property(retain, nonatomic) NotificationMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)initAcceptButton;
- (void)initNormalDetailView;
- (void)initSubviews;
- (CDUnknownBlockType)acceptInvitationSuccessBlock;
- (CDUnknownBlockType)acceptInvitationFailBlock;
- (void)handleInvalidInvitationCode;
- (void)acceptInvitation;
- (void)updateViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
