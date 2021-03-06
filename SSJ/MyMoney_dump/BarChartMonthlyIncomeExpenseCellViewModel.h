//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, UIColor;

@interface BarChartMonthlyIncomeExpenseCellViewModel : NSObject
{
    UIColor *_barColor;
    UIColor *_amountColor;
    NSString *_amountText;
    NSAttributedString *_monthText;
    double _barWidth;
}

@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(retain, nonatomic) NSAttributedString *monthText; // @synthesize monthText=_monthText;
@property(retain, nonatomic) NSString *amountText; // @synthesize amountText=_amountText;
@property(retain, nonatomic) UIColor *amountColor; // @synthesize amountColor=_amountColor;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
- (void).cxx_destruct;

@end

