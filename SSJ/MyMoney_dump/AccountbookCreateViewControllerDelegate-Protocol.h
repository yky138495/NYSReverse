//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountBookVo, AccountbookCreateViewController;

@protocol AccountbookCreateViewControllerDelegate <NSObject>

@optional
- (void)accountbookCreateViewController:(AccountbookCreateViewController *)arg1 didCreateNewAccountbook:(AccountBookVo *)arg2;
- (void)accountbookCreateViewController:(AccountbookCreateViewController *)arg1 willCreateNewAccountbook:(AccountBookVo *)arg2;
@end

