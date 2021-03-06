//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KDTabView.h"

@class CurrencyValueInputKeyboardView, UIButton, UITextField;

@interface BudgetKeyboardView : KDTabView
{
    id <BudgetKeyBoardViewDelegate> delegate;
    UITextField *_displayTextField;
    CurrencyValueInputKeyboardView *_inputKeyBoardView;
    UIButton *_controlButton;
}

@property(retain, nonatomic) UIButton *controlButton; // @synthesize controlButton=_controlButton;
@property(retain, nonatomic) CurrencyValueInputKeyboardView *inputKeyBoardView; // @synthesize inputKeyBoardView=_inputKeyBoardView;
@property(retain, nonatomic) UITextField *displayTextField; // @synthesize displayTextField=_displayTextField;
@property(nonatomic) __weak id <BudgetKeyBoardViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dismisKeyboardAction:(id)arg1;
- (void)closeTabAction:(id)arg1;
- (void)hideKeyboard;
- (void)pressKeyboard:(id)arg1;
- (void)keyboardWillDismiss:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)setDisplayTextFieldText:(id)arg1;
- (void)dealloc;
- (id)init;

@end

