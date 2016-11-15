//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "UITextFieldDelegate.h"

@class ExchangeRate, MBSwitch, NSString, TransferKeyboardView, UIButton, UITextField;

@interface ExchangeDetailViewController : BaseTableViewController <UITextFieldDelegate>
{
    MBSwitch *_switchControl;
    ExchangeRate *_exchangeRate;
    UITextField *_exchangeTextField;
    UIButton *_keyboardActivator;
    TransferKeyboardView *_keyboardView;
}

@property(retain, nonatomic) TransferKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) ExchangeRate *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(retain, nonatomic) UIButton *keyboardActivator; // @synthesize keyboardActivator=_keyboardActivator;
@property(retain, nonatomic) UITextField *exchangeTextField; // @synthesize exchangeTextField=_exchangeTextField;
@property(retain, nonatomic) MBSwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)showKeyboard:(id)arg1;
- (id)newTextField:(id)arg1;
- (void)assignTextField:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)switchAction:(id)arg1;
- (id)switchCtl;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)save:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
