//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface ShareAccountBookInvitationPromptView : UIView
{
    _Bool _animating;
    UIImageView *_thumbImageView;
    UILabel *_usernameLabel;
    UILabel *_descriptionLabel;
    UIButton *_approveButton;
    UIButton *_rejectButton;
    UIView *_containerView;
    _Bool *_isShown;
}

+ (id)presentingAnimation;
@property(readonly, nonatomic) _Bool *isShown; // @synthesize isShown=_isShown;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(readonly, nonatomic) UIButton *approveButton; // @synthesize approveButton=_approveButton;
@property(readonly, nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) __weak UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) __weak UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (void).cxx_destruct;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)showOnView:(id)arg1 animated:(_Bool)arg2;
- (void)showOnView:(id)arg1;
- (void)showOnTopWindowAnimated:(_Bool)arg1;
- (void)showOnTopWindow;
- (void)layoutSubviews;
- (id)init;
- (void)commonInit;

@end
