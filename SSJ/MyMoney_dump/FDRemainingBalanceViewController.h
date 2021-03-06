//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSaveRecordViewController.h"

#import "AccountInputButtonDelegate.h"
#import "FlatMoneyInputButtonDelegate.h"

@class AccountInputButton, AccountVo, NSString, UIView;

@interface FDRemainingBalanceViewController : BaseSaveRecordViewController <FlatMoneyInputButtonDelegate, AccountInputButtonDelegate>
{
    _Bool _isMoneyChanged;
    id <FDRemainingBalanceViewControllerDelegate> _delegate;
    struct {
        unsigned int expense:1;
        unsigned int income:1;
        unsigned int transfer:1;
    } _delegateFlags;
    AccountInputButton *_accountInputButton;
    double _preferMemoHeight;
    AccountVo *_accountVo;
    UIView *_flatMoneyInputButtonBottomLineView;
    UIView *_accountInputButtonBottomLineView;
    UIView *_memoInputTextViewBottomLineView;
    NSString *_memoString;
}

@property(copy, nonatomic) NSString *memoString; // @synthesize memoString=_memoString;
@property(retain, nonatomic) UIView *memoInputTextViewBottomLineView; // @synthesize memoInputTextViewBottomLineView=_memoInputTextViewBottomLineView;
@property(retain, nonatomic) UIView *accountInputButtonBottomLineView; // @synthesize accountInputButtonBottomLineView=_accountInputButtonBottomLineView;
@property(retain, nonatomic) UIView *flatMoneyInputButtonBottomLineView; // @synthesize flatMoneyInputButtonBottomLineView=_flatMoneyInputButtonBottomLineView;
@property(retain, nonatomic) AccountVo *accountVo; // @synthesize accountVo=_accountVo;
@property(nonatomic) double preferMemoHeight; // @synthesize preferMemoHeight=_preferMemoHeight;
@property(retain, nonatomic) AccountInputButton *accountInputButton; // @synthesize accountInputButton=_accountInputButton;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <FDRemainingBalanceViewControllerDelegate> delegate;
- (void)setupUI;
- (void)setupMoneyValue:(id)arg1;
- (void)refreshMemberCorporationProjectMemo:(double)arg1;
- (void)updateUI:(_Bool)arg1 contentOffset:(struct CGPoint)arg2;
- (void)refreshUI:(_Bool)arg1;
- (void)recordDidChanged:(id)arg1;
- (void)handleSaveAccountVo;
- (void)saveAndNewRecordAction;
- (void)pop;
- (void)saveRecordAction;
- (_Bool)prepareToSaveCurrentAccount;
- (void)showAlertViewWithMessage:(id)arg1;
- (_Bool)isValidForCurrentAccount;
- (void)endEditingText:(id)arg1;
- (void)memoInputTextViewShouldRefreshUI:(id)arg1 withPreferHeight:(double)arg2;
- (_Bool)isHideAccountBalance;
- (void)selectedAccount:(id)arg1;
- (id)currentAccount;
- (void)flatMoneyInputButton:(id)arg1 valueChanged:(id)arg2;
- (void)flatMoneyInputButton:(id)arg1 switchToType:(long long)arg2;
- (void)reloadData;
- (void)updateContent;
- (void)setMoneyValue:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

