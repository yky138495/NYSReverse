//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FDAccountBookSeed, FDProgressBarView, UIButton, UIImageView, UILabel, UIWindow;

@interface FDDownloadShareStatusView : UIView
{
    long long _totalSize;
    _Bool _layoutDirty;
    _Bool _animating;
    id <FDDownloadShareStatusViewDelegate> _delegate;
    FDAccountBookSeed *_seed;
    UIWindow *_oldKeyWindow;
    UIWindow *_statusWindow;
    UIView *_containerView;
    UILabel *_accountBookNameLabel;
    UILabel *_accountBooSizeLabel;
    UILabel *_accountBookDescriptionLabel;
    UILabel *_creatorNickNameLabel;
    UIImageView *_creatorAvatarLabel;
    UILabel *_databaseLabel;
    UILabel *_databaseDownloadedSizeLabel;
    FDProgressBarView *_dataProgressBarView;
    UILabel *_messageLabel;
    UIButton *_cancelDownloadButton;
    UIView *_confirmView;
    UIButton *_cancelButton;
    UIButton *_okButton;
    unsigned long long _state;
}

+ (void)hideBackgroundAnimated:(_Bool)arg1;
+ (void)showBackground;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic, getter=isLayoutDirty) _Bool layoutDirty; // @synthesize layoutDirty=_layoutDirty;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) UIButton *cancelDownloadButton; // @synthesize cancelDownloadButton=_cancelDownloadButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) FDProgressBarView *dataProgressBarView; // @synthesize dataProgressBarView=_dataProgressBarView;
@property(retain, nonatomic) UILabel *databaseDownloadedSizeLabel; // @synthesize databaseDownloadedSizeLabel=_databaseDownloadedSizeLabel;
@property(retain, nonatomic) UILabel *databaseLabel; // @synthesize databaseLabel=_databaseLabel;
@property(retain, nonatomic) UIImageView *creatorAvatarLabel; // @synthesize creatorAvatarLabel=_creatorAvatarLabel;
@property(retain, nonatomic) UILabel *creatorNickNameLabel; // @synthesize creatorNickNameLabel=_creatorNickNameLabel;
@property(retain, nonatomic) UILabel *accountBookDescriptionLabel; // @synthesize accountBookDescriptionLabel=_accountBookDescriptionLabel;
@property(retain, nonatomic) UILabel *accountBooSizeLabel; // @synthesize accountBooSizeLabel=_accountBooSizeLabel;
@property(retain, nonatomic) UILabel *accountBookNameLabel; // @synthesize accountBookNameLabel=_accountBookNameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIWindow *statusWindow; // @synthesize statusWindow=_statusWindow;
@property(retain, nonatomic) UIWindow *oldKeyWindow; // @synthesize oldKeyWindow=_oldKeyWindow;
@property(retain, nonatomic) FDAccountBookSeed *seed; // @synthesize seed=_seed;
@property(nonatomic) __weak id <FDDownloadShareStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)fileSizeKB:(long long)arg1;
- (id)fileSizeMB:(long long)arg1;
- (id)formatSize:(long long)arg1;
- (id)stringSize:(long long)arg1 OfTotal:(long long)arg2;
- (id)buttonWithFrame:(struct CGRect)arg1;
- (id)labelWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (void)okAction;
- (void)cancelAction;
- (void)cancelDownloadAction;
- (void)animateDownloadedDataSize:(long long)arg1;
- (void)setDownloadedDataSize:(long long)arg1;
- (void)setDownloadedDataTitle:(id)arg1;
- (void)transitionOutCompletion:(CDUnknownBlockType)arg1;
- (void)transitionInCompletion:(CDUnknownBlockType)arg1;
- (void)validateLayout;
- (void)invalidateLayout;
- (void)layoutSubviews;
- (void)stopAnimatingDownloadData;
- (void)startAnimatingData;
- (void)animateDownloadDataPercent:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateDownloadDataPercent:(double)arg1;
- (void)show;
- (void)dismissAnimated:(_Bool)arg1;
- (void)teardown;
- (void)setupViews;
- (void)setupContainerView;
- (void)setup;
- (void)dealloc;
- (id)initWithAccountBookSeed:(id)arg1;

@end

