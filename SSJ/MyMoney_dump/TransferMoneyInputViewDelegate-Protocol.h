//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountVo, NSDecimalNumber;

@protocol TransferMoneyInputViewDelegate <NSObject>
- (AccountVo *)currentTransferToAccount;
- (AccountVo *)currentTransferFromAccount;
- (void)moneyWithDraw:(NSDecimalNumber *)arg1 deposit:(NSDecimalNumber *)arg2;
@end
