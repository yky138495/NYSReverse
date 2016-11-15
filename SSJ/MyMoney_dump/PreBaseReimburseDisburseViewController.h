//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseSaveRecordViewController.h"

#import "AccountInputButtonDelegate.h"
#import "CreditorInputButtonDelegate.h"
#import "TransferMoneyInputViewDelegate.h"

@class LoanTransactionVo, NSString, PreAccountInputButton, PreTransferMoneyInputView;

@interface PreBaseReimburseDisburseViewController : PreBaseSaveRecordViewController <TransferMoneyInputViewDelegate, AccountInputButtonDelegate, CreditorInputButtonDelegate>
{
    PreTransferMoneyInputView *_moneyInputView;
    PreAccountInputButton *_outAccountInputButton;
    PreAccountInputButton *_inAccountInputButton;
    LoanTransactionVo *_loanVo;
}

@property(retain, nonatomic) LoanTransactionVo *loanVo; // @synthesize loanVo=_loanVo;
@property(retain, nonatomic) PreAccountInputButton *inAccountInputButton; // @synthesize inAccountInputButton=_inAccountInputButton;
@property(retain, nonatomic) PreAccountInputButton *outAccountInputButton; // @synthesize outAccountInputButton=_outAccountInputButton;
@property(retain, nonatomic) PreTransferMoneyInputView *moneyInputView; // @synthesize moneyInputView=_moneyInputView;
- (void).cxx_destruct;
- (_Bool)updateRecord;
- (_Bool)insertRecord;
- (void)deleteAction;
- (void)saveRecord;
- (void)saveRecordAction;
- (void)rightBarButtonItemAction;
- (void)selectedCreditor:(id)arg1;
- (id)currentCreditor;
- (void)addAnotherAccount;
- (void)editAnotherAccount;
- (void)addAccount;
- (void)editAccount;
- (_Bool)isHideAccountBalance;
- (void)selectedAnotherAccount:(id)arg1;
- (id)anotherAccount;
- (void)selectedAccount:(id)arg1;
- (id)currentAccount;
- (id)currentTransferToAccount;
- (id)currentTransferFromAccount;
- (void)moneyWithDraw:(id)arg1 deposit:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithExpenseVo:(id)arg1 loan:(id)arg2;
- (id)initWithLoanType:(long long)arg1 Creditor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
