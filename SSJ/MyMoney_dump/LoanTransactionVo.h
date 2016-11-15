//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CreditorVo, NSArray, NSDecimalNumber, NSString;

@interface LoanTransactionVo : NSObject
{
    long long _oid;
    NSDecimalNumber *_cost;
    NSString *_memo;
    double _tradeTime;
    long long _transactionType;
    NSString *_buyerAccountName;
    NSString *_sellerAccountName;
    long long _buyerAccountId;
    long long _sellerAccountId;
    CreditorVo *_creditor;
    NSString *_groupUUID;
    int _loanType;
    NSArray *_subLoanTransactions;
    _Bool _isSquared;
    NSDecimalNumber *_balance;
}

@property(retain, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property long long sellerAccountId; // @synthesize sellerAccountId=_sellerAccountId;
@property long long buyerAccountId; // @synthesize buyerAccountId=_buyerAccountId;
@property _Bool isSquared; // @synthesize isSquared=_isSquared;
@property(retain, nonatomic) NSString *sellerAccountName; // @synthesize sellerAccountName=_sellerAccountName;
@property(retain, nonatomic) NSString *buyerAccountName; // @synthesize buyerAccountName=_buyerAccountName;
@property int loanType; // @synthesize loanType=_loanType;
@property(retain, nonatomic) NSArray *subLoanTransactions; // @synthesize subLoanTransactions=_subLoanTransactions;
@property(retain, nonatomic) NSString *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(retain, nonatomic) CreditorVo *creditor; // @synthesize creditor=_creditor;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSDecimalNumber *cost; // @synthesize cost=_cost;
@property double tradeTime; // @synthesize tradeTime=_tradeTime;
@property long long transactionType; // @synthesize transactionType=_transactionType;
@property long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (void)setTransferAccountForExpense:(id)arg1;
- (void)calculateSquaredState;
- (id)loanTypeName;

@end
