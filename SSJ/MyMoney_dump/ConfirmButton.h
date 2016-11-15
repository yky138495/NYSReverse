//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface ConfirmButton : UIButton
{
    id <ConfirmButtonDelegate> _delegate;
    long long _selectionCount;
}

@property(nonatomic) long long selectionCount; // @synthesize selectionCount=_selectionCount;
@property(nonatomic) __weak id <ConfirmButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCofirmButtionTitleWithSelectinCount:(long long)arg1;
- (id)confirmBtnAttrTitleStringForDisableState;
- (id)confirmBtnAttrTitleStringForNormalStateWithSelectedAccountBookCount:(long long)arg1;
- (void)handleConfirmButtonTap;
- (id)init;

@end
