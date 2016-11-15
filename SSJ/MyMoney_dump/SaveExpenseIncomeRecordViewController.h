//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSaveRecordViewController.h"

#import "AccountInputButtonDelegate.h"
#import "AddExpenseSearchViewControllerDelegate.h"
#import "CategoryInputButtonDelegate.h"
#import "CategorySelectionViewControllerDelegate.h"
#import "FlatMoneyInputButtonDelegate.h"
#import "FlatMoneyInputButtonExchangeCurrencyProtocol.h"

@class AccountInputButton, CategoryInputButton, NSString, UIView;

@interface SaveExpenseIncomeRecordViewController : BaseSaveRecordViewController <CategoryInputButtonDelegate, AccountInputButtonDelegate, AddExpenseSearchViewControllerDelegate, FlatMoneyInputButtonExchangeCurrencyProtocol, CategorySelectionViewControllerDelegate, FlatMoneyInputButtonDelegate>
{
    struct {
        unsigned int tapCloseFlag:1;
        unsigned int tapOkCloseFlag:1;
        unsigned int tapSaveFlag:1;
    } _delegateFlags;
    id <SaveExpenseIncomeRecordViewControllerDelegate> _delegate;
    _Bool _isUsingForChangeToIncomeExpense;
    CategoryInputButton *_categoryInputButton;
    AccountInputButton *_accountInputButton;
    UIView *_dateHorizontalSeparateLine;
    UIView *_memberHorizontalSeparateLine;
    UIView *_corporationOrProjectHSL;
    UIView *_corporationOrProjectVSL;
    UIView *_BottomPlaceholderView;
    NSString *_defaultCurrencyCode;
    double _preferMemoHeight;
    long long _tappedTransferBottomBarItemType;
}

@property(nonatomic) long long tappedTransferBottomBarItemType; // @synthesize tappedTransferBottomBarItemType=_tappedTransferBottomBarItemType;
@property(nonatomic) double preferMemoHeight; // @synthesize preferMemoHeight=_preferMemoHeight;
@property(retain, nonatomic) NSString *defaultCurrencyCode; // @synthesize defaultCurrencyCode=_defaultCurrencyCode;
@property(retain, nonatomic) UIView *BottomPlaceholderView; // @synthesize BottomPlaceholderView=_BottomPlaceholderView;
@property(retain, nonatomic) UIView *corporationOrProjectVSL; // @synthesize corporationOrProjectVSL=_corporationOrProjectVSL;
@property(retain, nonatomic) UIView *corporationOrProjectHSL; // @synthesize corporationOrProjectHSL=_corporationOrProjectHSL;
@property(retain, nonatomic) UIView *memberHorizontalSeparateLine; // @synthesize memberHorizontalSeparateLine=_memberHorizontalSeparateLine;
@property(retain, nonatomic) UIView *dateHorizontalSeparateLine; // @synthesize dateHorizontalSeparateLine=_dateHorizontalSeparateLine;
@property(retain, nonatomic) AccountInputButton *accountInputButton; // @synthesize accountInputButton=_accountInputButton;
@property(retain, nonatomic) CategoryInputButton *categoryInputButton; // @synthesize categoryInputButton=_categoryInputButton;
@property(nonatomic) _Bool isUsingForChangeToIncomeExpense; // @synthesize isUsingForChangeToIncomeExpense=_isUsingForChangeToIncomeExpense;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SaveExpenseIncomeRecordViewControllerDelegate> delegate;
- (void)updateCurrentDefaultCategory;
- (void)payoutCategoryDidChange:(id)arg1;
- (void)categorySelectionViewController:(id)arg1 didFinishModifyWithCategory:(id)arg2;
- (void)postRecordNotification;
- (void)memoInputTextViewShouldRefreshUI:(id)arg1 withPreferHeight:(double)arg2;
- (void)projectInputButtonDidTapClose:(id)arg1;
- (void)corporationInputButtonDidTapClose:(id)arg1;
- (void)memberInputButtonDidTapClose:(id)arg1;
- (void)selectedDate:(id)arg1;
- (void)dateInputButtonDidTapClose:(id)arg1;
- (void)TransferBottomBarView:(id)arg1 didTapType:(long long)arg2;
- (id)recordsToIndicateDict;
- (_Bool)updateRecord;
- (_Bool)insertRecord;
- (void)deleteAction;
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
- (id)currentAccount;
- (void)isSelectedFromSearchPageWithType:(long long)arg1;
- (void)categoryDidfinishWithCategory:(id)arg1;
- (void)selectedAccount:(id)arg1;
- (void)searchCategory;
- (void)addCategory;
- (void)editCategory;
- (void)selectedCategory:(id)arg1;
- (id)currentCategory;
- (unsigned long long)transactionType;
- (id)flatMoneyInputButtonCurrencyCode;
- (_Bool)flatMoneyInputButtonShouldDisplayDefaultCurrencyValue;
- (void)flatMoneyInputButtonDidTapOkButtonClose:(id)arg1;
- (void)flatMoneyInputButtonDidTapClose:(id)arg1;
- (void)flatMoneyInputButton:(id)arg1 valueChanged:(id)arg2;
- (void)flatMoneyInputButton:(id)arg1 switchToType:(long long)arg2;
- (id)kSaveRecordViewControllerShowingBottomBarInfo;
- (id)kShowingBottomBarInfo;
- (void)reloadData;
- (void)setMemoString:(id)arg1;
- (void)setMoneyValue:(id)arg1;
- (void)updateContent;
- (void)refreshDateMemberCorporationProjectMemo:(double)arg1;
- (void)updateUI:(_Bool)arg1 contentOffset:(struct CGPoint)arg2;
- (void)refreshUI:(_Bool)arg1;
- (void)setupUI;
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

