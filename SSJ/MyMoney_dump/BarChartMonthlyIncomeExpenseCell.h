//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class BarChartMonthlyIncomeExpenseCellViewModel, MASConstraint, UIImageView, UILabel, UIView;

@interface BarChartMonthlyIncomeExpenseCell : UITableViewCell
{
    _Bool _isAnimated;
    BarChartMonthlyIncomeExpenseCellViewModel *_viewModel;
    UILabel *_monthLabel;
    UIView *_bar;
    UILabel *_amountLabel;
    UIImageView *_arrow;
    UIView *_bottomSeparator;
    MASConstraint *_barWidth;
}

@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(retain, nonatomic) MASConstraint *barWidth; // @synthesize barWidth=_barWidth;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIView *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) BarChartMonthlyIncomeExpenseCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)showBarWithWidth:(double)arg1;
- (void)prepareForAnimation;
- (void)updateConstraints;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

