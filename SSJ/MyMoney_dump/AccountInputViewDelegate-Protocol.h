//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInputDelegate.h"

@class AccountVo;

@protocol AccountInputViewDelegate <BaseInputDelegate>
- (_Bool)isHideAccountBalance;
- (void)selectedAnotherAccount:(AccountVo *)arg1;
- (void)selectedAccount:(AccountVo *)arg1;
- (AccountVo *)anotherAccount;
- (AccountVo *)currentAccount;
@end

