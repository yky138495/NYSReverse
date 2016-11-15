//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FlatMoneyInputButtonDelegate.h"

@class AccountVo, FlatMoneyInputButton, NSDecimalNumber, NSString, UIImageView;

@interface FlatTransferMoneyInputView : UIView <FlatMoneyInputButtonDelegate>
{
    FlatMoneyInputButton *_fromMoneyInputButton;
    FlatMoneyInputButton *_toMoneyInputButton;
    id <FlatTransferMoneyInputViewDelegate> _delegate;
    long long _keyboardType;
    long long _transferType;
    double _singleHeight;
    double _doubleHeight;
    UIView *_separatorLine;
    UIImageView *_arrowImageView;
    long long _moneyInputMode;
    AccountVo *_fromAccount;
    AccountVo *_toAccount;
    NSDecimalNumber *_exchangeRateToAccountToFromAccount;
}

+ (id)toValueFromFromValue:(id)arg1 fromAccount:(id)arg2 toAccount:(id)arg3;
@property(retain, nonatomic) NSDecimalNumber *exchangeRateToAccountToFromAccount; // @synthesize exchangeRateToAccountToFromAccount=_exchangeRateToAccountToFromAccount;
@property(retain, nonatomic) AccountVo *toAccount; // @synthesize toAccount=_toAccount;
@property(retain, nonatomic) AccountVo *fromAccount; // @synthesize fromAccount=_fromAccount;
@property(nonatomic) long long moneyInputMode; // @synthesize moneyInputMode=_moneyInputMode;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) double doubleHeight; // @synthesize doubleHeight=_doubleHeight;
@property(nonatomic) double singleHeight; // @synthesize singleHeight=_singleHeight;
@property(nonatomic) long long transferType; // @synthesize transferType=_transferType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) __weak id <FlatTransferMoneyInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FlatMoneyInputButton *toMoneyInputButton; // @synthesize toMoneyInputButton=_toMoneyInputButton;
@property(retain, nonatomic) FlatMoneyInputButton *fromMoneyInputButton; // @synthesize fromMoneyInputButton=_fromMoneyInputButton;
- (void).cxx_destruct;
- (void)flatMoneyInputButton:(id)arg1 valueChanged:(id)arg2;
- (id)toValueFromFromValue:(id)arg1;
- (void)flatMoneyInputButton:(id)arg1 switchToType:(long long)arg2;
@property(readonly, nonatomic) long long openMoneyInputMode;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)displayFromValue:(id)arg1;
- (void)preSetFromInputValue:(id)arg1 toInputValue:(id)arg2;
- (void)setFromInputValue:(id)arg1 toInputValue:(id)arg2;
- (void)setFromAccount:(id)arg1 toAccount:(id)arg2;
- (void)updateUIWithAnimated:(_Bool)arg1;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1 rightInset:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
