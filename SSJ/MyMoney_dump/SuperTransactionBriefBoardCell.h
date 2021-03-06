//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UILabel;

@interface SuperTransactionBriefBoardCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_accountLabel;
    UILabel *_memberLabel;
    UILabel *_coorporationLabel;
    UILabel *_categoryLabel;
    UILabel *_projectLabel;
    UILabel *_transactionTypeLabel;
    NSLayoutConstraint *_lowerOnePixLineConstraint;
    NSLayoutConstraint *_upperOnePixLineConstraint;
    NSLayoutConstraint *_titleLabelHeightConstraint;
    NSLayoutConstraint *_timeIconHeightConstraint;
    NSLayoutConstraint *_timeLabelHeightConstraint;
    NSLayoutConstraint *_categoryIconHeightConstraint;
    NSLayoutConstraint *_categoryLabelHeightConstraint;
    NSLayoutConstraint *_accountIconHeightConstraint;
    NSLayoutConstraint *_accountLabelHeightConstraint;
    NSLayoutConstraint *_projectIconHeightConstriant;
    NSLayoutConstraint *_projectLabelHeightConstraint;
    NSLayoutConstraint *_memberIconHeightConstraint;
    NSLayoutConstraint *_memberLabelHeightConstraint;
    NSLayoutConstraint *_coorporationIconHeightConstraint;
    NSLayoutConstraint *_coorporationLabelHeightConstraint;
    NSLayoutConstraint *_transactionTypeLabelHeightConstraint;
    NSLayoutConstraint *_transactionTypeIconHeightConstraint;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_timeLabelTopMargin;
    NSLayoutConstraint *_categoryLabelTopMargin;
    NSLayoutConstraint *_accountLabelTopMargin;
    NSLayoutConstraint *_projectLabelTopMargin;
    NSLayoutConstraint *_memberLabelTopMargin;
    NSLayoutConstraint *_coorporationLabelTopMargin;
    NSLayoutConstraint *_transactionTypeLabelTopMargin;
}

@property(nonatomic) __weak NSLayoutConstraint *transactionTypeLabelTopMargin; // @synthesize transactionTypeLabelTopMargin=_transactionTypeLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *coorporationLabelTopMargin; // @synthesize coorporationLabelTopMargin=_coorporationLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *memberLabelTopMargin; // @synthesize memberLabelTopMargin=_memberLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *projectLabelTopMargin; // @synthesize projectLabelTopMargin=_projectLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *accountLabelTopMargin; // @synthesize accountLabelTopMargin=_accountLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *categoryLabelTopMargin; // @synthesize categoryLabelTopMargin=_categoryLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *timeLabelTopMargin; // @synthesize timeLabelTopMargin=_timeLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *transactionTypeIconHeightConstraint; // @synthesize transactionTypeIconHeightConstraint=_transactionTypeIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *transactionTypeLabelHeightConstraint; // @synthesize transactionTypeLabelHeightConstraint=_transactionTypeLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *coorporationLabelHeightConstraint; // @synthesize coorporationLabelHeightConstraint=_coorporationLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *coorporationIconHeightConstraint; // @synthesize coorporationIconHeightConstraint=_coorporationIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *memberLabelHeightConstraint; // @synthesize memberLabelHeightConstraint=_memberLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *memberIconHeightConstraint; // @synthesize memberIconHeightConstraint=_memberIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *projectLabelHeightConstraint; // @synthesize projectLabelHeightConstraint=_projectLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *projectIconHeightConstriant; // @synthesize projectIconHeightConstriant=_projectIconHeightConstriant;
@property(nonatomic) __weak NSLayoutConstraint *accountLabelHeightConstraint; // @synthesize accountLabelHeightConstraint=_accountLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *accountIconHeightConstraint; // @synthesize accountIconHeightConstraint=_accountIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *categoryLabelHeightConstraint; // @synthesize categoryLabelHeightConstraint=_categoryLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *categoryIconHeightConstraint; // @synthesize categoryIconHeightConstraint=_categoryIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *timeLabelHeightConstraint; // @synthesize timeLabelHeightConstraint=_timeLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *timeIconHeightConstraint; // @synthesize timeIconHeightConstraint=_timeIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelHeightConstraint; // @synthesize titleLabelHeightConstraint=_titleLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *upperOnePixLineConstraint; // @synthesize upperOnePixLineConstraint=_upperOnePixLineConstraint;
@property(nonatomic) __weak NSLayoutConstraint *lowerOnePixLineConstraint; // @synthesize lowerOnePixLineConstraint=_lowerOnePixLineConstraint;
@property(nonatomic) __weak UILabel *transactionTypeLabel; // @synthesize transactionTypeLabel=_transactionTypeLabel;
@property(nonatomic) __weak UILabel *projectLabel; // @synthesize projectLabel=_projectLabel;
@property(nonatomic) __weak UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(nonatomic) __weak UILabel *coorporationLabel; // @synthesize coorporationLabel=_coorporationLabel;
@property(nonatomic) __weak UILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(nonatomic) __weak UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)getCellFrameHeight;
- (void)fillWithBoardTemplateModel:(id)arg1;
- (void)clearAllText;
- (_Bool)isEnglishLanguage;
- (id)getTimeTextByTimeByTemplateTextModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

