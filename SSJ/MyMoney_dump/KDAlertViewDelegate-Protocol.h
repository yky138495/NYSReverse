//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextFieldDelegate.h"

@class KDAlertView;

@protocol KDAlertViewDelegate <UITextFieldDelegate>

@optional
- (void)alertView:(KDAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(KDAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(KDAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

