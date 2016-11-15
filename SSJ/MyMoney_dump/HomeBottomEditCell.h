//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIView;

@interface HomeBottomEditCell : UITableViewCell
{
    _Bool _showingRedPoint;
    UIImage *_iconImage;
    NSString *_contentString;
    UIView *_redPointView;
    UIImageView *_iconImageView;
    UILabel *_contentLabel;
    UIImageView *_indicatorImageView;
    NSLayoutConstraint *_iconImageViewLeadingFromSuperViewConstraint;
    NSLayoutConstraint *_iconImageViewWidthAndHeightConstraint;
    NSLayoutConstraint *_indicatorImageViewTrailingFromSuperViewConstraint;
    NSLayoutConstraint *_contentLabelLeadingFromIconImageViewConstraint;
    NSLayoutConstraint *_redPointViewTrailingFromIndicatorImageViewConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *redPointViewTrailingFromIndicatorImageViewConstraint; // @synthesize redPointViewTrailingFromIndicatorImageViewConstraint=_redPointViewTrailingFromIndicatorImageViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLabelLeadingFromIconImageViewConstraint; // @synthesize contentLabelLeadingFromIconImageViewConstraint=_contentLabelLeadingFromIconImageViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *indicatorImageViewTrailingFromSuperViewConstraint; // @synthesize indicatorImageViewTrailingFromSuperViewConstraint=_indicatorImageViewTrailingFromSuperViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewWidthAndHeightConstraint; // @synthesize iconImageViewWidthAndHeightConstraint=_iconImageViewWidthAndHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewLeadingFromSuperViewConstraint; // @synthesize iconImageViewLeadingFromSuperViewConstraint=_iconImageViewLeadingFromSuperViewConstraint;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool showingRedPoint; // @synthesize showingRedPoint=_showingRedPoint;
- (void).cxx_destruct;
- (void)adjustLayoutForiPhone5;
- (void)adjustLayoutForiPhone6;
- (void)adjustLayoutForiPhone6s;
- (void)adjustLayoutIfNeeded;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
