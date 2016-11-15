//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HomeCompositeCellContentView, MGCheckBoxView, NSString, UIColor, UIImageView, UILabel, UIView;

@interface HomeTableViewCell : UITableViewCell
{
    UIImageView *_indicatorImageView;
    UIView *_separatorLine;
    _Bool _showSeparatorLine;
    _Bool _showIndicator;
    _Bool _shouldRespondeToHomepageHideStatus;
    _Bool _showCheckBox;
    _Bool _separatorLeftLeadingIcon;
    _Bool _isFinancialCell;
    _Bool _isBlockCell;
    _Bool _isEditingAdujectCell;
    UIImageView *_iconView;
    UILabel *_iconTextLabel;
    HomeCompositeCellContentView *_centerContentView;
    MGCheckBoxView *_checkBoxView;
    long long _superTzTemplateFid;
    UIColor *_customisFinancialColor;
    NSString *_loadingDataStringHolder;
    NSString *_originIncome;
    NSString *_originExpense;
    NSString *_originLoadingDataStringHolder;
}

@property(retain, nonatomic) NSString *originLoadingDataStringHolder; // @synthesize originLoadingDataStringHolder=_originLoadingDataStringHolder;
@property(retain, nonatomic) NSString *originExpense; // @synthesize originExpense=_originExpense;
@property(retain, nonatomic) NSString *originIncome; // @synthesize originIncome=_originIncome;
@property(retain, nonatomic) NSString *loadingDataStringHolder; // @synthesize loadingDataStringHolder=_loadingDataStringHolder;
@property(nonatomic) _Bool isEditingAdujectCell; // @synthesize isEditingAdujectCell=_isEditingAdujectCell;
@property(nonatomic) _Bool isBlockCell; // @synthesize isBlockCell=_isBlockCell;
@property(retain, nonatomic) UIColor *customisFinancialColor; // @synthesize customisFinancialColor=_customisFinancialColor;
@property(nonatomic) _Bool isFinancialCell; // @synthesize isFinancialCell=_isFinancialCell;
@property(nonatomic) _Bool separatorLeftLeadingIcon; // @synthesize separatorLeftLeadingIcon=_separatorLeftLeadingIcon;
@property(nonatomic) long long superTzTemplateFid; // @synthesize superTzTemplateFid=_superTzTemplateFid;
@property(retain, nonatomic) MGCheckBoxView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(nonatomic) _Bool showCheckBox; // @synthesize showCheckBox=_showCheckBox;
@property(nonatomic) _Bool shouldRespondeToHomepageHideStatus; // @synthesize shouldRespondeToHomepageHideStatus=_shouldRespondeToHomepageHideStatus;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
@property(nonatomic) _Bool showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
@property(retain, nonatomic) HomeCompositeCellContentView *centerContentView; // @synthesize centerContentView=_centerContentView;
@property(retain, nonatomic) UILabel *iconTextLabel; // @synthesize iconTextLabel=_iconTextLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updateContentByEyeButtonStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterKVO;
- (void)registerKVO;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

