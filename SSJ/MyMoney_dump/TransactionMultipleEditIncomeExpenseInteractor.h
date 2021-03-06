//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TransactionMultipleEditIncomeExpenseControllerOutput.h"

@class NSString;

@interface TransactionMultipleEditIncomeExpenseInteractor : NSObject <TransactionMultipleEditIncomeExpenseControllerOutput>
{
    id <TransactionMultipleEditIncomeExpenseInteractorOutput> _output;
}

@property(nonatomic) __weak id <TransactionMultipleEditIncomeExpenseInteractorOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (id)detailTextInExpense:(id)arg1 withCellType:(long long)arg2;
- (id)detailTextForCellType:(long long)arg1 transactions:(id)arg2;
- (id)transactionMultipleCellTypeToString:(long long)arg1;
- (id)cellViewModelsWithTitles:(id)arg1 details:(id)arg2;
- (id)cellViewModelsWithEditedTransactions:(id)arg1 cellTypes:(id)arg2;
- (id)cellViewModelsWithEditedTransactions:(id)arg1;
- (id)headerViewModelWithController:(id)arg1;
- (id)originTransactionsAndEditedTransactionsWithSelectedTransactions:(id)arg1;
- (id)redpointDict:(id)arg1;
- (id)checkMemberCorporationProject:(id)arg1;
- (id)checkEditedTransactions:(id)arg1;
- (id)progressView:(unsigned long long)arg1;
- (void)saveEditedTransactions:(id)arg1;
- (void)reloadCorporationInViewModel:(id)arg1;
- (void)changeViewModel:(id)arg1 corporationTo:(id)arg2;
- (void)reloadMemberInViewModel:(id)arg1;
- (void)changeViewModel:(id)arg1 memberTo:(id)arg2;
- (void)reloadAccountInViewModel:(id)arg1;
- (void)changeViewModel:(id)arg1 transferInAccountTo:(id)arg2;
- (void)changeViewModel:(id)arg1 transferOutAccountTo:(id)arg2;
- (id)visibleAccountDict;
- (void)changeViewModel:(id)arg1 accountTo:(id)arg2;
- (void)reloadCategoryInViewModel:(id)arg1;
- (void)changeViewModel:(id)arg1 categoryTo:(id)arg2;
- (void)reloadProjectInViewModel:(id)arg1;
- (void)changeViewModel:(id)arg1 projectTo:(id)arg2;
- (void)editProject:(id)arg1;
- (void)editCorporation:(id)arg1;
- (void)editMember:(id)arg1;
- (void)editAccount:(id)arg1 accountType:(long long)arg2;
- (void)editCategory:(id)arg1;
- (void)initViewModelWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

