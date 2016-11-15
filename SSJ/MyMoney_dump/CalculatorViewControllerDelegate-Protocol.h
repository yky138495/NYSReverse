//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalculatorViewController, NSDecimalNumber, NSString;

@protocol CalculatorViewControllerDelegate <NSObject>

@optional
- (void)calculatorViewControllerDidTapOkButton:(CalculatorViewController *)arg1;
- (void)calculatorViewControllerDidTapCloseButton:(CalculatorViewController *)arg1;
- (void)calculatorViewController:(CalculatorViewController *)arg1 tipsChanged:(NSString *)arg2 isWarning:(_Bool)arg3;
- (void)calculatorViewController:(CalculatorViewController *)arg1 valueChanged:(NSDecimalNumber *)arg2;
- (void)calculatorViewController:(CalculatorViewController *)arg1 switchToType:(long long)arg2;
@end
