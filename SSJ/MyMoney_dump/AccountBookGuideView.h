//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString;

@interface AccountBookGuideView : UIView <UIScrollViewDelegate>
{
    UIView *_containerView;
    id <AccountBookGuideViewDelegate> _delegate;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <AccountBookGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)startMyMoney;
- (void)dismissAnimation;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

