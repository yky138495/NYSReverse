//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface ScrollBarDrawableHeaderReusableView : UICollectionReusableView
{
    UIView *_topHairLineView;
    UIView *_bottomHairLineView;
    UILabel *_titleLabel;
    UIButton *_rightButton;
    long long _type;
    id <ScrollBarDrawableHeaderReusableViewDelegate> _delegate;
    NSLayoutConstraint *_rightButtonWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *rightButtonWidthConstraint; // @synthesize rightButtonWidthConstraint=_rightButtonWidthConstraint;
@property(nonatomic) __weak id <ScrollBarDrawableHeaderReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomHairLineView; // @synthesize bottomHairLineView=_bottomHairLineView;
@property(retain, nonatomic) UIView *topHairLineView; // @synthesize topHairLineView=_topHairLineView;
- (void).cxx_destruct;
- (void)handleButtonTapped:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)awakeFromNib;

@end

