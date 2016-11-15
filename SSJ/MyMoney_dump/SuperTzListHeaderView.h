//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "MGCollapsableTableViewSectionViewBase.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface SuperTzListHeaderView : UITableViewHeaderFooterView <MGCollapsableTableViewSectionViewBase>
{
    _Bool _tableViewSectionCollapsed;
    id <MGCollapsableTableViewSectionViewBaseDelegate> _delegate;
    UILabel *_leftTitleLabel;
    UILabel *_balanceTitleLabel;
    UILabel *_balanceValueLabel;
    UIView *_balanceValueView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UILabel *_incomeTitleLabel;
    UIView *_incomeValueView;
    UILabel *_expenseTitleLabel;
    UIView *_expenseValueView;
    UIImageView *_rightExpanderIcon;
    NSLayoutConstraint *_balanceValueWidthCon;
    NSLayoutConstraint *_incomeValueWidthCon;
    NSLayoutConstraint *_expenseValueWidthCon;
    NSLayoutConstraint *_balanceValueHeightCon;
    NSLayoutConstraint *_incomeValueHeightCon;
    NSLayoutConstraint *_expenseValueHeightCon;
    NSLayoutConstraint *_topSeparatorViewHeightCon;
    NSLayoutConstraint *_bottomSeparatorViewHeightCon;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomSeparatorViewHeightCon; // @synthesize bottomSeparatorViewHeightCon=_bottomSeparatorViewHeightCon;
@property(retain, nonatomic) NSLayoutConstraint *topSeparatorViewHeightCon; // @synthesize topSeparatorViewHeightCon=_topSeparatorViewHeightCon;
@property(retain, nonatomic) NSLayoutConstraint *expenseValueHeightCon; // @synthesize expenseValueHeightCon=_expenseValueHeightCon;
@property(retain, nonatomic) NSLayoutConstraint *incomeValueHeightCon; // @synthesize incomeValueHeightCon=_incomeValueHeightCon;
@property(retain, nonatomic) NSLayoutConstraint *balanceValueHeightCon; // @synthesize balanceValueHeightCon=_balanceValueHeightCon;
@property(retain, nonatomic) NSLayoutConstraint *expenseValueWidthCon; // @synthesize expenseValueWidthCon=_expenseValueWidthCon;
@property(retain, nonatomic) NSLayoutConstraint *incomeValueWidthCon; // @synthesize incomeValueWidthCon=_incomeValueWidthCon;
@property(retain, nonatomic) NSLayoutConstraint *balanceValueWidthCon; // @synthesize balanceValueWidthCon=_balanceValueWidthCon;
@property(retain, nonatomic) UIImageView *rightExpanderIcon; // @synthesize rightExpanderIcon=_rightExpanderIcon;
@property(retain, nonatomic) UIView *expenseValueView; // @synthesize expenseValueView=_expenseValueView;
@property(retain, nonatomic) UILabel *expenseTitleLabel; // @synthesize expenseTitleLabel=_expenseTitleLabel;
@property(retain, nonatomic) UIView *incomeValueView; // @synthesize incomeValueView=_incomeValueView;
@property(retain, nonatomic) UILabel *incomeTitleLabel; // @synthesize incomeTitleLabel=_incomeTitleLabel;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIView *balanceValueView; // @synthesize balanceValueView=_balanceValueView;
@property(retain, nonatomic) UILabel *balanceValueLabel; // @synthesize balanceValueLabel=_balanceValueLabel;
@property(retain, nonatomic) UILabel *balanceTitleLabel; // @synthesize balanceTitleLabel=_balanceTitleLabel;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(nonatomic) _Bool tableViewSectionCollapsed; // @synthesize tableViewSectionCollapsed=_tableViewSectionCollapsed;
@property(nonatomic) __weak id <MGCollapsableTableViewSectionViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBalanceRatio:(float)arg1;
- (void)setExpenseRatio:(float)arg1;
- (void)setIncomeRatio:(float)arg1;
- (void)notifyDelegate;
- (id)headerName;
- (void)refreshIndicator;
- (void)toggleState;
- (void)setBackgroundViewWithColor:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

