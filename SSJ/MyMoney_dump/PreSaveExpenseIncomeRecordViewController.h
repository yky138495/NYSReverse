//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseSaveRecordViewController.h"

#import "AccountInputButtonDelegate.h"
#import "CategoryInputButtonDelegate.h"
#import "MoneyInputButtonDelegate.h"

@class NSString, PreAccountInputButton, PreCategoryInputButton, PreMoneyInputButton;

@interface PreSaveExpenseIncomeRecordViewController : PreBaseSaveRecordViewController <MoneyInputButtonDelegate, CategoryInputButtonDelegate, AccountInputButtonDelegate>
{
    _Bool _isUsingForChangeToIncomeExpense;
    PreMoneyInputButton *_moneyInputButton;
    id <PreSaveExpenseIncomeRecordViewControllerDelegate> _delegate;
    PreCategoryInputButton *_categoryInputButton;
    PreAccountInputButton *_accountInputButton;
}

@property(retain, nonatomic) PreAccountInputButton *accountInputButton; // @synthesize accountInputButton=_accountInputButton;
@property(retain, nonatomic) PreCategoryInputButton *categoryInputButton; // @synthesize categoryInputButton=_categoryInputButton;
@property(nonatomic) _Bool isUsingForChangeToIncomeExpense; // @synthesize isUsingForChangeToIncomeExpense=_isUsingForChangeToIncomeExpense;
@property(nonatomic) __weak id <PreSaveExpenseIncomeRecordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PreMoneyInputButton *moneyInputButton; // @synthesize moneyInputButton=_moneyInputButton;
- (void).cxx_destruct;
- (void)postRecordNotification;
- (_Bool)updateRecord;
- (_Bool)insertRecord;
- (void)changeToTransferAction;
- (void)saveAndNewRecordAction;
- (void)saveAsTemplateAction;
- (_Bool)checkSelfValidTransfer;
- (void)saveRecord;
- (void)saveRecordAction;
- (void)rightBarButtonItemAction;
- (void)addAccount;
- (void)editAccount;
- (_Bool)isHideAccountBalance;
- (void)selectedAccount:(id)arg1;
- (id)currentAccount;
- (void)editCategory;
- (void)selectedCategory:(id)arg1;
- (id)currentCategory;
- (unsigned long long)transactionType;
- (void)switchToTransferInputAtKeyboardView;
- (void)switchToIncomeInputAtKeyboardView;
- (void)switchToExpenseInputAtKeyboardView;
- (void)endMoneyValue:(id)arg1;
- (void)editingMoneyValue:(id)arg1;
- (void)reloadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithExpenseVo:(id)arg1;
- (void)initializeWithTransactionType:(long long)arg1;
- (id)initForAddingIncome;
- (id)initForAddingExpense;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
