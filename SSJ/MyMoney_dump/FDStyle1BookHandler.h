//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBookHandler.h"

@class HomepageCustomTemplateView, NSArray;

@interface FDStyle1BookHandler : FDBookHandler
{
    NSArray *_rootInfos;
    HomepageCustomTemplateView *_customTemplateView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HomepageCustomTemplateView *customTemplateView; // @synthesize customTemplateView=_customTemplateView;
@property(retain, nonatomic) NSArray *rootInfos; // @synthesize rootInfos=_rootInfos;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)onMessageBadgeChanged:(id)arg1;
- (void)unloadWithRootViewController:(id)arg1;
- (void)loadTemplateInfos:(id)arg1;
- (void)loadWithRootViewController:(id)arg1;

@end

