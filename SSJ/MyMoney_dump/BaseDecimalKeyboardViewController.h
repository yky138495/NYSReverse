//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSNumberFormatter, UIButton, UILabel;

@interface BaseDecimalKeyboardViewController : UIViewController
{
    NSNumberFormatter *decimalFormatter;
    double _value;
    double _intPart;
    long long _digitOfIntPart;
    double _fractPart;
    long long _digitOfFractPart;
    _Bool _isPressedPoint;
    long long _currencyFractionDigits;
    UILabel *_label;
    UIButton *_clearButton;
    UIButton *_cancelButton;
    UIButton *_OkButton;
    _Bool _isCleanDigits;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setInputValue:(id)arg1;
- (id)inputValue;
- (void)deletePressed:(id)arg1;
- (void)currencyPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)okPressed:(id)arg1;
- (void)cleanPressed:(id)arg1;
- (void)decimalPressed:(id)arg1;
- (void)numericPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)useIncomeColor;
- (void)usePayoutColor;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 withFormatter:(id)arg3;

@end

