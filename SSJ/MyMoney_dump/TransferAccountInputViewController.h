//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInputViewController.h"

#import "UIPickerViewAccessibilityDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIPickerView;

@interface TransferAccountInputViewController : BaseInputViewController <UIPickerViewDelegate, UIPickerViewDataSource, UIPickerViewAccessibilityDelegate>
{
    long long _pickerViewDisplayMode;
    NSMutableArray *_fromPickerAccounts;
    NSMutableArray *_toPickerAccounts;
    long long _fromSelectedAccountIndex;
    long long _toSelectedAccountIndex;
    _Bool _hasSwitch;
    UIButton *_switchSingleColumnButton;
    NSMutableArray *_filteredFromAccounts;
    NSMutableArray *_filteredToAccounts;
    UIPickerView *_transferAccountPickerView;
    UIButton *_borrowTabButton;
    UIButton *_lendTabButton;
    UIButton *_payDebtTabButton;
    UIButton *_askDebtTabButton;
    UIButton *_addFromButton;
    UIButton *_addToButton;
}

@property(retain, nonatomic) UIButton *addToButton; // @synthesize addToButton=_addToButton;
@property(retain, nonatomic) UIButton *addFromButton; // @synthesize addFromButton=_addFromButton;
@property(retain, nonatomic) UIButton *switchSingleColumnButton; // @synthesize switchSingleColumnButton=_switchSingleColumnButton;
@property(retain, nonatomic) UIButton *askDebtTabButton; // @synthesize askDebtTabButton=_askDebtTabButton;
@property(retain, nonatomic) UIButton *payDebtTabButton; // @synthesize payDebtTabButton=_payDebtTabButton;
@property(retain, nonatomic) UIButton *lendTabButton; // @synthesize lendTabButton=_lendTabButton;
@property(retain, nonatomic) UIButton *borrowTabButton; // @synthesize borrowTabButton=_borrowTabButton;
@property(retain, nonatomic) UIPickerView *transferAccountPickerView; // @synthesize transferAccountPickerView=_transferAccountPickerView;
@property(retain, nonatomic) NSMutableArray *filteredToAccounts; // @synthesize filteredToAccounts=_filteredToAccounts;
@property(retain, nonatomic) NSMutableArray *filteredFromAccounts; // @synthesize filteredFromAccounts=_filteredFromAccounts;
- (void).cxx_destruct;
- (void)addToAccountAction;
- (void)addFromAccountAction;
- (id)buttonWithTarget:(id)arg1 selector:(SEL)arg2 frame:(struct CGRect)arg3 image:(id)arg4 highlightedImage:(id)arg5;
- (void)selectTabButtonByLoanType:(long long)arg1;
- (void)askDebtAction:(id)arg1;
- (void)payDebtAction:(id)arg1;
- (void)lendTabAction:(id)arg1;
- (void)borrowTabAction:(id)arg1;
- (void)switchSingleColumn;
- (void)addSwitchForSingleColumn;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)notifyAccountChanged;
- (void)notifyAccountChangedFromIndex:(long long)arg1 toAccountIndex:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (_Bool)needExchangeCurrency;
- (void)reSelectPickerRow;
- (void)resetAndSelectRow;
- (void)reloadTransferAccountPickerViewComponent;
- (void)setFromComponentWithAccounts:(id)arg1 toComponentWithAccount:(id)arg2;
- (void)reloadAskDebtAccounts;
- (void)reloadPayDebtAccounts;
- (void)reloadLendAccounts;
- (void)reloadBorrowAccounts;
- (void)reloadTransferAccounts;
- (void)reloadPickerComponents;
- (void)reloadTransferPickerComponents;
- (void)hideAccountPickerComponentView:(id)arg1;
- (void)fillAccountPickerComponentView:(id)arg1 withAccountVo:(id)arg2;
- (id)accountPickerFromAccountVo:(id)arg1 hasSwitch:(_Bool)arg2;
- (void)hideLoanFeatureButtons;
- (void)showLoanFeatureButtons;
- (void)initButtons;
- (void)dealloc;
- (id)initWithPickerViewDisplayMode:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

