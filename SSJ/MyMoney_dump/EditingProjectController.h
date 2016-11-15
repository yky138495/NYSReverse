//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericNewItemController.h"

#import "DirtyDataDetectable.h"
#import "UITextFieldDelegate.h"

@class NSString, ProjectVo;

@interface EditingProjectController : GenericNewItemController <UITextFieldDelegate, DirtyDataDetectable>
{
    _Bool _isNew;
    _Bool _isFromKeyboardAccessoryView;
    ProjectVo *_projectVo;
    id <EditingProjectControllerDelegate> _delegate;
}

@property(nonatomic) _Bool isFromKeyboardAccessoryView; // @synthesize isFromKeyboardAccessoryView=_isFromKeyboardAccessoryView;
@property(nonatomic) id <EditingProjectControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) ProjectVo *projectVo; // @synthesize projectVo=_projectVo;
- (void).cxx_destruct;
- (void)writeValue:(id)arg1;
- (id)readValue;
- (_Bool)containDirtyDataAfterSynced;
- (void)cancel:(id)arg1;
- (id)projectNames;
- (id)validateValue:(id)arg1;
- (_Bool)ignoreValue:(id)arg1;
- (void)onSaved:(id)arg1;
- (void)saveAction;
- (void)viewDidLoad;
- (id)initWithNewTag:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

