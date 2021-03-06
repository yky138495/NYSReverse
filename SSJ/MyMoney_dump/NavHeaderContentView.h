//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont;

@interface NavHeaderContentView : UIView
{
    NSString *_numberText;
    UIFont *_numberFont;
    NSString *_numberLabelText;
    NSString *_dateRangeText;
    NSString *_incomeText;
    NSString *_incomeLabelText;
    NSString *_expenseText;
    NSString *_expenseLabelText;
    NSString *_balanceText;
    NSString *_balanceLabelText;
    UIColor *_textColor;
    UIColor *_incomeColor;
    UIColor *_expenseColor;
    UIColor *_balanceColor;
    UIColor *_backgroundColor;
    UIColor *_highlightedColor;
    UIColor *_borderColor;
    UIFont *_mainFont;
    UIFont *_charFont;
    _Bool _isHighlighted;
    float _incomePercent;
    float _expensePercent;
    float _balancePercent;
    UIColor *_incomeLabelColor;
    UIColor *_expenseLabelColor;
    UIColor *_textLightColor;
}

@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) float balancePercent; // @synthesize balancePercent=_balancePercent;
@property(nonatomic) float expensePercent; // @synthesize expensePercent=_expensePercent;
@property(nonatomic) float incomePercent; // @synthesize incomePercent=_incomePercent;
@property(retain, nonatomic) UIColor *textLightColor; // @synthesize textLightColor=_textLightColor;
@property(retain, nonatomic) UIColor *expenseLabelColor; // @synthesize expenseLabelColor=_expenseLabelColor;
@property(retain, nonatomic) UIColor *incomeLabelColor; // @synthesize incomeLabelColor=_incomeLabelColor;
@property(retain, nonatomic) NSString *balanceLabelText; // @synthesize balanceLabelText=_balanceLabelText;
@property(retain, nonatomic) NSString *balanceText; // @synthesize balanceText=_balanceText;
@property(retain, nonatomic) NSString *expenseLabelText; // @synthesize expenseLabelText=_expenseLabelText;
@property(retain, nonatomic) NSString *expenseText; // @synthesize expenseText=_expenseText;
@property(retain, nonatomic) NSString *incomeLabelText; // @synthesize incomeLabelText=_incomeLabelText;
@property(retain, nonatomic) NSString *incomeText; // @synthesize incomeText=_incomeText;
@property(retain, nonatomic) NSString *dateRangeText; // @synthesize dateRangeText=_dateRangeText;
@property(retain, nonatomic) NSString *numberLabelText; // @synthesize numberLabelText=_numberLabelText;
@property(retain, nonatomic) NSString *numberText; // @synthesize numberText=_numberText;
- (void).cxx_destruct;
- (void)redisplay;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

