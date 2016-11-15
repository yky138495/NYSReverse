//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreBaseInputButton.h"

#import "CorporationInputViewDelegate.h"

@class NSString, PreCorporationInputViewController, UIActivityIndicatorView, UIView;

@interface PreCorporationInputButton : PreBaseInputButton <CorporationInputViewDelegate>
{
    UIView *_inputAccessoryView;
    UIView *_inputView;
    id <PreCorporationInputButtonDelegate> _delegate;
    PreCorporationInputViewController *___inputViewController;
    UIActivityIndicatorView *_lbsActivityView;
}

@property(retain, nonatomic) UIActivityIndicatorView *lbsActivityView; // @synthesize lbsActivityView=_lbsActivityView;
@property(retain, nonatomic) PreCorporationInputViewController *__inputViewController; // @synthesize __inputViewController=___inputViewController;
@property(nonatomic) __weak id <PreCorporationInputButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayCorporationVo:(id)arg1;
- (void)editTapped;
- (void)closeTapped;
- (void)finishFetchLBSinfo;
- (void)startFetchLBSinfo;
- (void)selectedCorporation:(id)arg1;
- (id)currentCorporation;
- (id)inputAccessoryView;
- (id)inputView;
- (id)statisticKey;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

