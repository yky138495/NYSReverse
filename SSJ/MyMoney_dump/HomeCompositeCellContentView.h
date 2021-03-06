//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor;

@interface HomeCompositeCellContentView : UIView
{
    NSString *_originDate;
    _Bool _isFinancialContent;
    unsigned long long _type;
    NSString *_name;
    NSString *_income;
    NSString *_expense;
    NSString *_date;
    NSString *_loadingDataStringHolder;
    UIColor *_customisFinancialColor;
}

@property(retain, nonatomic) UIColor *customisFinancialColor; // @synthesize customisFinancialColor=_customisFinancialColor;
@property(retain, nonatomic) NSString *loadingDataStringHolder; // @synthesize loadingDataStringHolder=_loadingDataStringHolder;
@property(nonatomic) _Bool isFinancialContent; // @synthesize isFinancialContent=_isFinancialContent;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *expense; // @synthesize expense=_expense;
@property(retain, nonatomic) NSString *income; // @synthesize income=_income;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)hideRecentlyTransactionAmout;
- (void)showRecentlyTransactionAmout;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isLeapYear:(long long)arg1;

@end

