//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseSaveRecordViewController.h"

#import "AccountInputButtonDelegate.h"
#import "MoneyInputButtonDelegate.h"

@class NSString, PreAccountInputButton, PreMoneyInputButton;

@interface PreSaveReimburseViewController : PreBaseSaveRecordViewController <MoneyInputButtonDelegate, AccountInputButtonDelegate>
{
    PreMoneyInputButton *_moneyInputButton;
    PreAccountInputButton *_outAccountInputButton;
    PreAccountInputButton *_inAccountInputButton;
}

@property(retain, nonatomic) PreAccountInputButton *inAccountInputButton; // @synthesize inAccountInputButton=_inAccountInputButton;
@property(retain, nonatomic) PreAccountInputButton *outAccountInputButton; // @synthesize outAccountInputButton=_outAccountInputButton;
@property(retain, nonatomic) PreMoneyInputButton *moneyInputButton; // @synthesize moneyInputButton=_moneyInputButton;
- (void).cxx_destruct;
- (void)postRecordNotification;
- (_Bool)updateRecord;
- (_Bool)insertRecord;
- (void)saveAndNewRecordAction;
- (void)saveAsTemplateAction;
- (void)saveRecord;
- (void)saveRecordAction;
- (void)rightBarButtonItemAction;
- (void)addAnotherAccount;
- (void)editAnotherAccount;
- (void)addAccount;
- (void)editAccount;
- (_Bool)isHideAccountBalance;
- (void)selectedAnotherAccount:(id)arg1;
- (void)selectedAccount:(id)arg1;
- (id)anotherAccount;
- (id)currentAccount;
- (void)endMoneyValue:(id)arg1;
- (void)editingMoneyValue:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)reloadData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

