//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInputViewController.h"

#import "UIPickerViewAccessibilityDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface AccountInputViewController : BaseInputViewController <UIPickerViewDelegate, UIPickerViewDataSource, UIPickerViewAccessibilityDelegate>
{
    unsigned long long _accountSelection;
    _Bool _isAnotherAccount;
    UIPickerView *_accountPickerView;
    NSArray *_accountGroups;
    NSArray *_accountsArray;
    long long _selectedRowInComponent0;
}

@property(nonatomic) long long selectedRowInComponent0; // @synthesize selectedRowInComponent0=_selectedRowInComponent0;
@property(retain, nonatomic) NSArray *accountsArray; // @synthesize accountsArray=_accountsArray;
@property(retain, nonatomic) NSArray *accountGroups; // @synthesize accountGroups=_accountGroups;
@property(nonatomic) _Bool isAnotherAccount; // @synthesize isAnotherAccount=_isAnotherAccount;
@property(retain, nonatomic) UIPickerView *accountPickerView; // @synthesize accountPickerView=_accountPickerView;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)loadAccounts;
- (id)initWithDelegate:(id)arg1 selection:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
