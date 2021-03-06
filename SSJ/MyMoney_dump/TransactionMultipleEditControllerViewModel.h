//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountInputViewController, CategoryInputViewController, CorporationInputViewController, MemberInputViewController, NSArray, ProjectInputViewController, TransactionMultipleHeaderViewViewModel, UIView;

@interface TransactionMultipleEditControllerViewModel : NSObject
{
    UIView *_inputView;
    UIView *_inputAccessoryView;
    NSArray *_cellViewModels;
    TransactionMultipleHeaderViewViewModel *_headerViewModel;
    NSArray *_editedTrans;
    NSArray *_originTrans;
    long long _editingType;
    CategoryInputViewController *_categoryInput;
    AccountInputViewController *_accountInput;
    MemberInputViewController *_memberInput;
    CorporationInputViewController *_corporationInput;
    ProjectInputViewController *_projectInput;
}

@property(retain, nonatomic) ProjectInputViewController *projectInput; // @synthesize projectInput=_projectInput;
@property(retain, nonatomic) CorporationInputViewController *corporationInput; // @synthesize corporationInput=_corporationInput;
@property(retain, nonatomic) MemberInputViewController *memberInput; // @synthesize memberInput=_memberInput;
@property(retain, nonatomic) AccountInputViewController *accountInput; // @synthesize accountInput=_accountInput;
@property(retain, nonatomic) CategoryInputViewController *categoryInput; // @synthesize categoryInput=_categoryInput;
@property(nonatomic) long long editingType; // @synthesize editingType=_editingType;
@property(retain, nonatomic) NSArray *originTrans; // @synthesize originTrans=_originTrans;
@property(retain, nonatomic) NSArray *editedTrans; // @synthesize editedTrans=_editedTrans;
@property(retain, nonatomic) TransactionMultipleHeaderViewViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerNotifications;
- (id)init;

@end

