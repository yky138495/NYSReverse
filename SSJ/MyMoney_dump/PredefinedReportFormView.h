//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString;

@interface PredefinedReportFormView : UIView <UIScrollViewDelegate>
{
    id _target;
    SEL _selector;
    long long _selectedReportType;
}

@property(nonatomic) long long selectedReportType; // @synthesize selectedReportType=_selectedReportType;
- (void).cxx_destruct;
- (void)removeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animateRemove;
- (void)animateShow;
- (void)reportTypeAction:(id)arg1;
- (void)addHandlerForTarget:(id)arg1 selector:(SEL)arg2;
- (void)scrollToShowSelectedType;
- (id)createScrollViewWithLocation:(int)arg1 pageNumber:(long long)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (id)newButtonWithTitle:(id)arg1 origin:(struct CGPoint)arg2 normalImage:(id)arg3 selectedImage:(id)arg4 tag:(long long)arg5;
- (void)setupDropdownReportOptions;
- (void)addSectionAtOrigin:(struct CGPoint)arg1 withText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
