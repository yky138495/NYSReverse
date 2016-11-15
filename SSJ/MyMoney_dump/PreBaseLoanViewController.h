//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseSaveRecordViewController.h"

#import "PreTransferAccountInputButtonDelegate.h"
#import "TransferMoneyInputViewDelegate.h"

@class LoanTransactionVo, NSString, PreTransferAccountInputButton, PreTransferMoneyInputView;

@interface PreBaseLoanViewController : PreBaseSaveRecordViewController <TransferMoneyInputViewDelegate, PreTransferAccountInputButtonDelegate>
{
    LoanTransactionVo *_loanVo;
    PreTransferAccountInputButton *_transferAccountInputButton;
    PreTransferMoneyInputView *_moneyInputView;
}

@property(retain, nonatomic) PreTransferMoneyInputView *moneyInputView; // @synthesize moneyInputView=_moneyInputView;
@property(retain, nonatomic) PreTransferAccountInputButton *transferAccountInputButton; // @synthesize transferAccountInputButton=_transferAccountInputButton;
@property(retain, nonatomic) LoanTransactionVo *loanVo; // @synthesize loanVo=_loanVo;
- (void).cxx_destruct;
- (id)loanNameWithType:(long long)arg1;
- (_Bool)updateRecord;
- (_Bool)insertRecord;
- (void)rightBarButtonItemAction;
- (void)deleteAction;
- (void)saveRecordAction;
- (void)transferAccountPickerViewWillHideAccount;
- (void)switchToLoanType:(long long)arg1;
- (long long)loanType;
- (long long)businessType;
- (void)addToAccount;
- (void)addFromAccount;
- (void)transferFromAccount:(id)arg1 toAccount:(id)arg2;
- (_Bool)isHideTransferAccountBalance;
- (id)currentTransferToAccount;
- (id)currentTransferFromAccount;
- (void)moneyWithDraw:(id)arg1 deposit:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithExpenseVo:(id)arg1 loan:(id)arg2;
- (id)initWithLoanType:(long long)arg1 creditor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
