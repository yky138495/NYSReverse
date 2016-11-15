//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBookHandler.h"

@class HomeTopPanelView, NSArray, RootViewController;

@interface FDDefaultBookHandler : FDBookHandler
{
    HomeTopPanelView *_panelView;
    RootViewController *_rootViewController;
    NSArray *_rootInfos;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *rootInfos; // @synthesize rootInfos=_rootInfos;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)clickSuperTz;
- (void)clickMessageCenter;
- (void)clickBattery;
- (void)clickMonthSummaryPanel;
- (void)clickRow3;
- (void)clickRow2;
- (void)clickRow1;
- (void)setupPanelView:(id)arg1;
- (void)performAnimate:(id)arg1;
- (void)animateBudgetUIWithBudget:(double)arg1 balance:(double)arg2;
- (void)loadTemplateInfos:(id)arg1;
- (void)updateMonthLabelsWithDate:(id)arg1;
- (void)onMessageBadgeChanged:(id)arg1;
- (void)unloadWithRootViewController:(id)arg1;
- (void)loadWithRootViewController:(id)arg1;

@end
