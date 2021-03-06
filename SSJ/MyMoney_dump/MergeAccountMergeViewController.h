//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AccountVo, NSArray, UIButton, UILabel;

@interface MergeAccountMergeViewController : UIViewController
{
    int mergeType;
    AccountVo *_mainAccountVo;
    AccountVo *_mergedAccountVo;
    NSArray *_duplicateTransactionIds;
    UILabel *_mergedTitleLabel;
    UILabel *_mainTitleLabel;
    UILabel *_remainTitleLabel;
    UILabel *_mergedAccountLabel;
    UILabel *_mainAccountLabel;
    UILabel *_remainAccountLabel;
    _Bool finishBackup;
    UIButton *_mergeButton;
}

@property(retain, nonatomic) UIButton *mergeButton; // @synthesize mergeButton=_mergeButton;
@property(retain, nonatomic) NSArray *duplicateTransactionIds; // @synthesize duplicateTransactionIds=_duplicateTransactionIds;
@property(retain, nonatomic) UILabel *remainAccountLabel; // @synthesize remainAccountLabel=_remainAccountLabel;
@property(retain, nonatomic) UILabel *mainAccountLabel; // @synthesize mainAccountLabel=_mainAccountLabel;
@property(retain, nonatomic) UILabel *mergedAccountLabel; // @synthesize mergedAccountLabel=_mergedAccountLabel;
@property(retain, nonatomic) UILabel *remainTitleLabel; // @synthesize remainTitleLabel=_remainTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UILabel *mergedTitleLabel; // @synthesize mergedTitleLabel=_mergedTitleLabel;
@property(retain, nonatomic) AccountVo *mergedAccountVo; // @synthesize mergedAccountVo=_mergedAccountVo;
@property(retain, nonatomic) AccountVo *mainAccountVo; // @synthesize mainAccountVo=_mainAccountVo;
@property int mergeType; // @synthesize mergeType;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)backupActionBeCanceledNotification:(id)arg1;
- (void)didFinishBackupNotification:(id)arg1;
- (void)viewDidLoad;
- (void)popToHomeAccountViewController;
- (void)beginMerge;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)showMergeTipsAlertView;
- (void)mergeAction:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

