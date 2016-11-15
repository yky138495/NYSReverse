//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface FinanceWalletInvestmentCell : UITableViewCell
{
    id <FinanceWalletInvestmentCellDataSource> _dataSource;
    NSIndexPath *_currentIndexPath;
    NSLayoutConstraint *_centerYConstraint;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_allProfitLabel;
    UILabel *_dayProfitLabel;
    UIView *_profitView;
    UILabel *_singleLineContentLabel;
    NSLayoutConstraint *_SpliteLineHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *SpliteLineHeightConstraint; // @synthesize SpliteLineHeightConstraint=_SpliteLineHeightConstraint;
@property(nonatomic) __weak UILabel *singleLineContentLabel; // @synthesize singleLineContentLabel=_singleLineContentLabel;
@property(nonatomic) __weak UIView *profitView; // @synthesize profitView=_profitView;
@property(nonatomic) __weak UILabel *dayProfitLabel; // @synthesize dayProfitLabel=_dayProfitLabel;
@property(nonatomic) __weak UILabel *allProfitLabel; // @synthesize allProfitLabel=_allProfitLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak id <FinanceWalletInvestmentCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

