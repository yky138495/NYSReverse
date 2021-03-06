//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MemoURLsLabel, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface ABDTransactionView : UIView <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _didClickTransactionViewBlock;
    CDUnknownBlockType _didClickPhotoImageViewBlock;
    id <ABDTransactionViewDelegate> _delegate;
    UIImageView *_categoryImageView;
    UILabel *_mainTitleLabel;
    UIImageView *_arrowImageView;
    UILabel *_subTitleLabel;
    UILabel *_moneyLabel;
    MemoURLsLabel *_memoLabel;
    UIImageView *_photoImageView;
    UILabel *_infoLabel;
    UIView *_contentView;
    UIImageView *_backgroundImageView;
    UIView *_redPoint;
    NSLayoutConstraint *_arrowLeadingConstraint;
    NSLayoutConstraint *_arrowWidthConstraint;
    NSLayoutConstraint *_arrowTrailingConstraint;
    NSLayoutConstraint *_memoTopConstraint;
    NSLayoutConstraint *_photoTopConstraint;
    NSLayoutConstraint *_photoHeightConstraint;
    NSLayoutConstraint *_photoWidthConstraint;
    NSLayoutConstraint *_photoLeadingConstraint;
    NSLayoutConstraint *_infoTopConstraint;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    struct CGSize _photoImageViewSize;
}

+ (double)viewHeightWithViewModel:(id)arg1 constraintWidth:(double)arg2;
@property(nonatomic) struct CGSize photoImageViewSize; // @synthesize photoImageViewSize=_photoImageViewSize;
@property(nonatomic) __weak NSLayoutConstraint *contentViewLeadingConstraint; // @synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *infoTopConstraint; // @synthesize infoTopConstraint=_infoTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *photoLeadingConstraint; // @synthesize photoLeadingConstraint=_photoLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *photoWidthConstraint; // @synthesize photoWidthConstraint=_photoWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *photoHeightConstraint; // @synthesize photoHeightConstraint=_photoHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *photoTopConstraint; // @synthesize photoTopConstraint=_photoTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *memoTopConstraint; // @synthesize memoTopConstraint=_memoTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *arrowTrailingConstraint; // @synthesize arrowTrailingConstraint=_arrowTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *arrowWidthConstraint; // @synthesize arrowWidthConstraint=_arrowWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *arrowLeadingConstraint; // @synthesize arrowLeadingConstraint=_arrowLeadingConstraint;
@property(retain, nonatomic) UIView *redPoint; // @synthesize redPoint=_redPoint;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(nonatomic) __weak MemoURLsLabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(nonatomic) __weak UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(nonatomic) __weak UIImageView *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
@property(nonatomic) __weak id <ABDTransactionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType didClickPhotoImageViewBlock; // @synthesize didClickPhotoImageViewBlock=_didClickPhotoImageViewBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickTransactionViewBlock; // @synthesize didClickTransactionViewBlock=_didClickTransactionViewBlock;
- (void).cxx_destruct;
- (void)didSelectedMemoLinkWithURL:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setupGestures;
- (void)setupView;
- (void)setupInfoLabel;
- (void)setupPhotoImageView;
- (void)setupMemoLabel;
- (void)setupMoneyLabel;
- (void)setupSubTitleLabel;
- (void)setupMainTitleLabel;
- (void)setSelected:(_Bool)arg1;
- (void)updateConstraints;
- (void)awakeFromNib;
- (void)pressContentArea:(id)arg1;
- (void)touchContentArea:(id)arg1;
- (void)tapPhotoImageView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithViewModel:(id)arg1 constraintWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

