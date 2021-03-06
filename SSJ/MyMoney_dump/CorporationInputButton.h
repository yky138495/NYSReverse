//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInputButton.h"

#import "CorporationInputViewDelegate.h"

@class CorporationInputViewController, NSString, UIActivityIndicatorView, UIButton, UIView;

@interface CorporationInputButton : BaseInputButton <CorporationInputViewDelegate>
{
    UIView *_inputAccessoryView;
    UIView *_inputView;
    _Bool _isFromSearchPage;
    id <CorporationInputButtonDelegate> _delegate;
    UIButton *_closeButton;
    CorporationInputViewController *___inputViewController;
    UIActivityIndicatorView *_lbsActivityView;
}

@property(retain, nonatomic) UIActivityIndicatorView *lbsActivityView; // @synthesize lbsActivityView=_lbsActivityView;
@property(retain, nonatomic) CorporationInputViewController *__inputViewController; // @synthesize __inputViewController=___inputViewController;
@property(nonatomic) _Bool isFromSearchPage; // @synthesize isFromSearchPage=_isFromSearchPage;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <CorporationInputButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayCorporationVo:(id)arg1;
- (void)searchTapped;
- (void)editTapped;
- (void)addTapped;
- (void)closeTapped;
- (void)finishFetchLBSinfo;
- (void)startFetchLBSinfo;
- (void)selectedCorporation:(id)arg1;
- (id)currentCorporation;
- (id)inputAccessoryView;
- (id)inputView;
- (void)handleButtonTapped:(id)arg1;
- (double)maxTitleWidth;
- (id)statisticKey;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

