//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AppLaunchingPromptViewDelegate.h"

@class AppLaunchingPromptView, NSString;

@interface FDAppLaunchingDecider : NSObject <AppLaunchingPromptViewDelegate>
{
    AppLaunchingPromptView *_appLaunchingPromptView;
    NSString *_currentSchema;
    NSString *_otherSchema;
    NSString *_anotherSchema;
    _Bool _deciding;
    _Bool _isUniversalLink;
    NSString *_urlString;
}

+ (id)sharedDecider;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)appLaunchingPromptViewDidDismissedWithSelectedButtonAtIndex:(unsigned long long)arg1;
- (void)exclusiveSelfDecideWithURLString:(id)arg1;
- (void)decideWithUniversalLinkUrlString:(id)arg1;
- (void)decideWithURLString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

