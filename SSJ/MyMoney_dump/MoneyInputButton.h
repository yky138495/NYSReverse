//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MoneyInputViewControllerDelegate.h"

@class MoneyInputViewController, NSDecimalNumber, NSNumberFormatter, NSString;

@interface MoneyInputButton : UIButton <MoneyInputViewControllerDelegate>
{
    NSString *_currencyCode;
    NSDecimalNumber *_value;
    id <MoneyInputButtonDelegate> _delegate;
    long long _switchType;
    long long _style;
    MoneyInputViewController *___inputViewController;
    NSNumberFormatter *_currencyFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
@property(retain, nonatomic) MoneyInputViewController *__inputViewController; // @synthesize __inputViewController=___inputViewController;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long switchType; // @synthesize switchType=_switchType;
@property(nonatomic) __weak id <MoneyInputButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)covertMoneyInputButtonStyle:(long long)arg1;
- (void)asTransferInput;
- (void)asIncomeInput;
- (void)asExpenseInput;
- (void)editTapped;
- (void)closeTapped;
- (void)switchToTransferInput;
- (void)switchToIncomeInput;
- (void)switchToExpenseInput;
- (void)pressOkKeyAtCalculatorView:(id)arg1;
- (void)pressNumberKeyAtCalculatorView:(id)arg1;
- (id)stringToDecimalNumber:(id)arg1;
- (void)paste:(id)arg1;
- (void)longPressAction:(id)arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (void)setSelected:(_Bool)arg1;
- (void)handleKeyboardWillHideNotification:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)clickAction;
@property(retain, nonatomic) NSString *currencyCode;
@property(retain, nonatomic) NSDecimalNumber *value;
- (void)makeInternalCalculatorNotAppendable;
- (void)setInternalCalculatorValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

