//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInputButton.h"

#import "CreditorInputViewDelegate.h"

@class CreditorInputViewController, NSString;

@interface CreditorInputButton : BaseInputButton <CreditorInputViewDelegate>
{
    _Bool _isFromSearchPage;
    id <CreditorInputButtonDelegate> _delegate;
    CreditorInputViewController *___inputViewController;
}

@property(retain, nonatomic) CreditorInputViewController *__inputViewController; // @synthesize __inputViewController=___inputViewController;
@property(nonatomic) _Bool isFromSearchPage; // @synthesize isFromSearchPage=_isFromSearchPage;
@property(nonatomic) __weak id <CreditorInputButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayCreditorVo:(id)arg1;
- (void)searchTapped;
- (void)editTapped;
- (void)addTapped;
- (void)closeTapped;
- (void)selectedCreditor:(id)arg1;
- (id)currentCreditor;
- (id)inputAccessoryView;
- (id)inputView;
- (id)statisticKey;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

