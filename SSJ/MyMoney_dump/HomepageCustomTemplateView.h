//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HomepageCustomTemplateBaseView.h"

@class RootViewController;

@interface HomepageCustomTemplateView : HomepageCustomTemplateBaseView
{
    RootViewController *_rootViewController;
    id <HomepageCustomTemplateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <HomepageCustomTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)addClickEvent;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
