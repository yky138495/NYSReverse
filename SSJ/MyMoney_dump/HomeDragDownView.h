//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton;

@interface HomeDragDownView : UIView
{
    id <HomeDragDownViewDelegate> _delegate;
    UIButton *_leftImageButton;
    UIButton *_indexZeroButton;
    UIButton *_indexOneButton;
    UIView *_vipContainerView;
    NSLayoutConstraint *_leftImageButtonHeightConstraint;
    NSLayoutConstraint *_leftImageButtonLeadingSpaceConstraint;
    NSLayoutConstraint *_leftImageButtonBottomConstraint;
    NSLayoutConstraint *_indexZeroButtonWidthConstraint;
    NSLayoutConstraint *_vipImageViewWidthConstraint;
    NSLayoutConstraint *_vipImageViewHeightConstraint;
    NSLayoutConstraint *_vipImageViewTrailingFromSuperViewConstraint;
}

+ (id)homeDragDownView;
@property(retain, nonatomic) NSLayoutConstraint *vipImageViewTrailingFromSuperViewConstraint; // @synthesize vipImageViewTrailingFromSuperViewConstraint=_vipImageViewTrailingFromSuperViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *vipImageViewHeightConstraint; // @synthesize vipImageViewHeightConstraint=_vipImageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *vipImageViewWidthConstraint; // @synthesize vipImageViewWidthConstraint=_vipImageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *indexZeroButtonWidthConstraint; // @synthesize indexZeroButtonWidthConstraint=_indexZeroButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftImageButtonBottomConstraint; // @synthesize leftImageButtonBottomConstraint=_leftImageButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftImageButtonLeadingSpaceConstraint; // @synthesize leftImageButtonLeadingSpaceConstraint=_leftImageButtonLeadingSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftImageButtonHeightConstraint; // @synthesize leftImageButtonHeightConstraint=_leftImageButtonHeightConstraint;
@property(retain, nonatomic) UIView *vipContainerView; // @synthesize vipContainerView=_vipContainerView;
@property(retain, nonatomic) UIButton *indexOneButton; // @synthesize indexOneButton=_indexOneButton;
@property(retain, nonatomic) UIButton *indexZeroButton; // @synthesize indexZeroButton=_indexZeroButton;
@property(retain, nonatomic) UIButton *leftImageButton; // @synthesize leftImageButton=_leftImageButton;
@property(nonatomic) __weak id <HomeDragDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleButtonClicked:(id)arg1;
- (void)setupUIForIPhone5;
- (void)setupUIForIPhone6Plus;
- (void)setupUIForIPhoneModels;
- (_Bool)isVIPForCurrentUser;
- (void)updateAvatar;
- (void)setupUI;
- (void)removeObserver;
- (void)addObserver;
- (void)animateWithPercent:(double)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

