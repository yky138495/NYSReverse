//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KDTabView.h"

#import "UIPickerViewAccessibilityDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface CreditorPickerView : KDTabView <UIPickerViewDelegate, UIPickerViewDataSource, UIPickerViewAccessibilityDelegate>
{
    UIPickerView *_creditorPickerView;
    NSArray *_creditors;
    id <CreditorPickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CreditorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *creditors; // @synthesize creditors=_creditors;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)loadCreditors;
- (void)willSlideUpAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

