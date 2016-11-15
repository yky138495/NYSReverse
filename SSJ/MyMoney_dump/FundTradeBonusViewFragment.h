//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KDViewFragment.h"

#import "AccountPickerViewDelegate.h"
#import "UITextViewDelegate.h"

@class CurrencyValueInputKeyboardView, ExpenseVo, KDFundAccountPickerView, KDTabView, NSString, UIButton, UIDatePicker, UILabel, UITextView, UIView;

@interface FundTradeBonusViewFragment : KDViewFragment <UITextViewDelegate, AccountPickerViewDelegate>
{
    int currentFundTradeType;
    UIView *firstHorizontalLine;
    UIView *secondHorizontalLine;
    UIView *thirdHorizontalLine;
    UIView *fourthLeftHorizontalLine;
    UIView *fourthRightHorizontalLine;
    UILabel *nameTitleLabel;
    UILabel *amountTitleLabel;
    UILabel *accountTitleLabel;
    UILabel *dateTitleLabel;
    UILabel *nameValueLabel;
    UILabel *amountValueLabel;
    UILabel *accountValueLabel;
    UILabel *dateValueLabel;
    UITextView *remarkTextView;
    UILabel *remarkPlaceholderLabel;
    UILabel *bonusBuyTipsLabel;
    UIButton *bonusThenBuyButton;
    UIButton *saveButton;
    UIButton *saveAndNewButton;
    UIView *firstEventPanel;
    UIView *secondEventPanel;
    UIView *thirdEventPanel;
    UIView *fourthEventPanel;
    struct CGRect fragmentFrame;
    UILabel *currentFocusInputLabel;
    _Bool isKeyboardShow;
    double rowHeightForCurrentDevice;
    double uiSizeScaleFactor;
    KDTabView *currencyInputTabView;
    CurrencyValueInputKeyboardView *currencyInputKeyboard;
    KDTabView *tradeDateTabView;
    UIDatePicker *datePickerView;
    KDFundAccountPickerView *accountPickerView;
    ExpenseVo *expenseVo;
    _Bool isTextFieldInEditing;
    _Bool isDevice4Inch;
    _Bool isDevice4p7Inch;
    _Bool isDevice5p5Inch;
    _Bool enableUserChooseFund;
    _Bool showTradeDateAndTime;
    _Bool bonusBuyChecked;
    NSString *tradeFundName;
    NSString *tradeFundCode;
    long long tradeAccountID;
    long long oldTradeAccountID;
    long long tradeAccountGroupID;
    long long tradeTransactionFID;
    unsigned long long currentFundType;
    double fundNetworth;
    double fundMaxCanSellFundCount;
    double addExtraHeightToRemarkView;
}

- (void).cxx_destruct;
- (double)caculateRemarkTextViewHeight;
- (void)showAccountPicker;
- (void)showTradeDateTabView;
- (void)showCurrencyInputTabView;
- (void)setBonusBuyButtonImage;
- (void)clickBonusBuyButton:(id)arg1;
- (void)fetchFundQuoteWhenDateChange:(id)arg1;
- (void)resetStatusForCurrentTradeField;
- (void)showInvalidTradeAmountAlert;
- (void)loadUserSettings;
- (_Bool)isHideAccountBalance;
- (void)filtAccountList;
- (void)setSelectedAccountInfo;
- (id)expenseVoForAccountFromDelegate;
- (void)accountPickerView:(id)arg1 didSelectedReimburseAccount:(id)arg2;
- (void)accountPickerView:(id)arg1 didSelectedAccount:(id)arg2;
- (void)tradeDateChangedAction:(id)arg1;
- (void)clearEventPanelBackgroundWhenKeyboardHide;
- (void)unregisterKeyboardNotify;
- (void)registerKeyboardNotify;
- (void)unloadExpenseVO;
- (void)loadExpenseVO;
- (void)fundValueDidEndEditing:(id)arg1;
- (void)fundValueDidBeginEditing:(id)arg1;
- (void)didSlideDownAction:(id)arg1;
- (void)willSlideDownAction:(id)arg1;
- (void)addAccountAction:(id)arg1;
- (void)didSlideUpAction:(id)arg1;
- (void)willSlideUpAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)tapViewAddAllEvents:(id)arg1;
- (void)closeTabAction:(id)arg1;
- (void)pressKeyboard:(id)arg1;
- (id)createAccountPicker;
- (id)createTradeDateTabView;
- (id)createCurrencyInputTabView;
- (void)hideKeyboardForTextView:(id)arg1;
- (id)createTextFieldInputAccessoryView;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)handleViewFragmentDidAppear:(id)arg1;
- (void)handleSaveTradeRecord:(id)arg1;
- (void)handleHideSystemKeyboard:(id)arg1;
- (void)handleClearEventPanelBackground:(id)arg1;
- (void)handleSetFundCodeNameEvent:(id)arg1;
- (void)handleSetTradeBonusUIValueEvent:(id)arg1;
- (void)setTitleValueLabelHighlighted:(id)arg1;
- (void)setEventPanelBackgroundColor:(id)arg1;
- (void)showSaveTradeSellTipsWhenNoBuyRecord;
- (void)showSaveTradeTipsWhenNullAccount;
- (void)saveAndNewRecordAction:(id)arg1;
- (void)saveRecordAction:(id)arg1;
- (int)saveTradeRecordToDatabase;
- (void)handleFourthPanelGestureEvent:(id)arg1;
- (void)handleThirdPanelGestureEvent:(id)arg1;
- (void)handleSecondPanelGestureEvent:(id)arg1;
- (void)handleFirstPanelGestureEvent:(id)arg1;
- (id)newButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 frame:(struct CGRect)arg4 image:(id)arg5 whiteBG:(_Bool)arg6 darkTextColor:(_Bool)arg7;
- (void)createEventGestureRecognizer;
- (void)createFundButtonsWithTopPadding:(double)arg1;
- (void)createFundButtons568;
- (void)createFundButtons480;
- (void)createFundButtons;
- (void)textViewEditChanged:(id)arg1;
- (void)createFundValueSubView;
- (void)createFundTitleLabels;
- (void)createSeperatorLine;
- (int)handleEvent:(id)arg1 withData:(id)arg2;
- (void)dealloc;
- (id)currentFundCode;
- (void)detachSubViewFromParentView;
- (id)initWithFrame:(struct CGRect)arg1 parentView:(id)arg2 fundType:(unsigned long long)arg3 tradeType:(int)arg4 addRemarkHeight:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
