//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddingAccountViewController;

@protocol AddingAccountViewControllerDelegate <NSObject>

@optional
- (void)editingAccountViewControllerDeleteAccount:(AddingAccountViewController *)arg1;
- (void)editingAccountViewController:(AddingAccountViewController *)arg1 didFinishWithSave:(_Bool)arg2;
- (void)addAccountViewController:(AddingAccountViewController *)arg1 didFinishWithSave:(_Bool)arg2;
@end

