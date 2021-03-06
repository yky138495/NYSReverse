//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReportFilterCell.h"

#import "CalculatorViewControllerDelegate.h"

@class CalculatorViewController, NSString, UILabel, UITextField;

@interface ReportFilterAmountCell : ReportFilterCell <CalculatorViewControllerDelegate>
{
    UITextField *_lowerBoundTextField;
    UITextField *_upperBoundTextField;
    UILabel *_separateLabel;
    id <ReportFilterAmountCellDelegate> _delegate;
    CalculatorViewController *_lowerCalculatorViewController;
    CalculatorViewController *_upperCalculatorViewController;
}

@property(retain, nonatomic) CalculatorViewController *upperCalculatorViewController; // @synthesize upperCalculatorViewController=_upperCalculatorViewController;
@property(retain, nonatomic) CalculatorViewController *lowerCalculatorViewController; // @synthesize lowerCalculatorViewController=_lowerCalculatorViewController;
@property(nonatomic) __weak id <ReportFilterAmountCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *separateLabel; // @synthesize separateLabel=_separateLabel;
@property(retain, nonatomic) UITextField *upperBoundTextField; // @synthesize upperBoundTextField=_upperBoundTextField;
@property(retain, nonatomic) UITextField *lowerBoundTextField; // @synthesize lowerBoundTextField=_lowerBoundTextField;
- (void).cxx_destruct;
- (void)calculatorViewController:(id)arg1 valueChanged:(id)arg2;
- (void)calculatorViewControllerDidTapOkButton:(id)arg1;
- (void)textChangedAction:(id)arg1;
- (void)dismissAction:(id)arg1;
- (void)resetAmountTextField;
- (id)generateInputViewController;
- (id)generateInputAccessoryView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

