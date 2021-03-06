//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class FinanceClubViewController, HMSegmentedControl, NSString, UIScrollView;

@interface FDBBSMyPostsViewController : UIViewController <UIScrollViewDelegate>
{
    NSString *_uid;
    UIScrollView *_scrollView;
    HMSegmentedControl *_segmentedControl;
    FinanceClubViewController *_myThreadController;
    FinanceClubViewController *_myRepliesController;
    unsigned long long _currentIndex;
}

@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) FinanceClubViewController *myRepliesController; // @synthesize myRepliesController=_myRepliesController;
@property(retain, nonatomic) FinanceClubViewController *myThreadController; // @synthesize myThreadController=_myThreadController;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)logBusineseIDAccordingToIndex:(long long)arg1;
- (void)tabChangedWithIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)segementedControlValueChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadRequests;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

