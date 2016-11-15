//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UITableView;

@interface TransactionsMultipleOperationPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UITableView *_fromTableView;
}

@property(retain, nonatomic) UITableView *fromTableView; // @synthesize fromTableView=_fromTableView;
- (void).cxx_destruct;
- (id)recordOfCell:(id)arg1;
- (id)visibleCells;
- (void)animateRecordsTransition:(id)arg1;
- (void)animateNoRecordTransition:(id)arg1;
- (void)animateNoVisibleCellsTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

