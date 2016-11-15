//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIWindow;

@interface PopModelController : NSObject
{
    UIWindow *_fullScreenWindow;
    UIView *_modelViewSuperView;
    UIView *_containerView;
    id <PopModelControllerDelegate> delegate;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <PopModelControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)SubBudgetGuideViewWillDisAppear;
- (void)ModelViewWillDisAppear;
- (void)dismissModelView;
- (void)presentModelView;
- (void)alertViewIsRemoved;
- (void)bounce1AnimationStopped;
- (void)bounce2AnimationStopped;
- (id)init;
- (void)dealloc;

@end

