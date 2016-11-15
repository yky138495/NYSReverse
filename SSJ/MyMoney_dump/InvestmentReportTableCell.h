//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class InvestmentCenterViewController, NSString, UIButton, UILabel, UIView;

@interface InvestmentReportTableCell : UITableViewCell
{
    NSString *investmentCode;
    NSString *investmentName;
    double netAsset;
    int investmentRecordType;
    double on7OfYearYield;
    double profitLossValue;
    double profitLossPercent;
    double lastDayClosePrice;
    UILabel *investmentNameLabel;
    UILabel *investmentRecordTypeTitleLabel;
    UILabel *investmentRecordGapTitleLabel;
    UILabel *investmentNetAssetValueLabel;
    UILabel *investmentNetAssetTitleLabel;
    UIButton *profitLossButton;
    UIView *cellSeparatorLineView;
    UIView *cellRootContentView;
    _Bool hideProfitLossButton;
    int currentShowProfitType;
    InvestmentCenterViewController *eventDelegateController;
}

- (void).cxx_destruct;
- (void)setFundProfitButtonInfo;
- (void)switchFundProfitType:(id)arg1;
- (void)setInvestmentRecord:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

