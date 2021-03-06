//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericNewItemController.h"

@class CorporationVo;

@interface EditingCreditorController : GenericNewItemController
{
    _Bool _isNew;
    _Bool _isFromKeyboardAccessoryView;
    id <EditingCreditorControllerDelegate> _delegate;
    CorporationVo *_creditorVo;
}

@property(nonatomic) _Bool isFromKeyboardAccessoryView; // @synthesize isFromKeyboardAccessoryView=_isFromKeyboardAccessoryView;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) CorporationVo *creditorVo; // @synthesize creditorVo=_creditorVo;
@property(nonatomic) id <EditingCreditorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)writeValue:(id)arg1;
- (id)readValue;
- (id)creditorNames;
- (void)cancel:(id)arg1;
- (void)onSaved:(id)arg1;
- (id)validateValue:(id)arg1;
- (_Bool)ignoreValue:(id)arg1;
- (void)saveAction;
- (void)viewDidLoad;
- (id)initWithNewTag:(_Bool)arg1;

@end

