//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NormalMessageDetailViewController, NotificationMessage, UIButton;

@interface SubscribedAccountBookUpdatedMessageViewController : UIViewController
{
    _Bool _isUpdating;
    NotificationMessage *_message;
    NormalMessageDetailViewController *_normalController;
    UIButton *_updateButton;
}

@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) UIButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) NormalMessageDetailViewController *normalController; // @synthesize normalController=_normalController;
@property(retain, nonatomic) NotificationMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)initUpdateButton;
- (void)initNormalDetailView;
- (void)initSubviews;
- (void)updateViewConstraints;
- (void)handleUpdate;
- (void)viewDidLoad;

@end
