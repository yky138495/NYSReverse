//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface NewUserGuidePageThreeBillView : UIView
{
    UILabel *_earnPerYearLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_icon1;
    UILabel *_icon1title;
    UIImageView *_icon2;
    UILabel *_icon2title;
    UIImageView *_icon3;
    UILabel *_icon3title;
    UIView *_grayBackgroundView;
    UIView *_row1column1;
    UIView *_row1column2;
    UIView *_row2column1;
    UIView *_row2column2;
    UIView *_row3column1;
    UIView *_row3column2;
    UIView *_row3column3;
}

@property(retain, nonatomic) UIView *row3column3; // @synthesize row3column3=_row3column3;
@property(retain, nonatomic) UIView *row3column2; // @synthesize row3column2=_row3column2;
@property(retain, nonatomic) UIView *row3column1; // @synthesize row3column1=_row3column1;
@property(retain, nonatomic) UIView *row2column2; // @synthesize row2column2=_row2column2;
@property(retain, nonatomic) UIView *row2column1; // @synthesize row2column1=_row2column1;
@property(retain, nonatomic) UIView *row1column2; // @synthesize row1column2=_row1column2;
@property(retain, nonatomic) UIView *row1column1; // @synthesize row1column1=_row1column1;
@property(retain, nonatomic) UIView *grayBackgroundView; // @synthesize grayBackgroundView=_grayBackgroundView;
@property(retain, nonatomic) UILabel *icon3title; // @synthesize icon3title=_icon3title;
@property(retain, nonatomic) UIImageView *icon3; // @synthesize icon3=_icon3;
@property(retain, nonatomic) UILabel *icon2title; // @synthesize icon2title=_icon2title;
@property(retain, nonatomic) UIImageView *icon2; // @synthesize icon2=_icon2;
@property(retain, nonatomic) UILabel *icon1title; // @synthesize icon1title=_icon1title;
@property(retain, nonatomic) UIImageView *icon1; // @synthesize icon1=_icon1;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *earnPerYearLabel; // @synthesize earnPerYearLabel=_earnPerYearLabel;
- (void).cxx_destruct;
- (void)setupAfterAnimation;
- (void)setupBeforeAnimation;
- (void)layoutSubviews;
- (void)animate;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
