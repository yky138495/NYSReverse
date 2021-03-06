//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseInputButton.h"

#import "CreditorInputViewDelegate.h"

@class NSString, PreCreditorInputViewController;

@interface PreCreditorInputButton : PreBaseInputButton <CreditorInputViewDelegate>
{
    id <CreditorInputButtonDelegate> _delegate;
    PreCreditorInputViewController *___inputViewController;
}

@property(retain, nonatomic) PreCreditorInputViewController *__inputViewController; // @synthesize __inputViewController=___inputViewController;
@property(nonatomic) __weak id <CreditorInputButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayCreditorVo:(id)arg1;
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

