//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CategorySelectionViewController, CategoryVo;

@protocol CategorySelectionViewControllerDelegate <NSObject>

@optional
- (void)categorySelectionViewControllerWillPopout:(CategorySelectionViewController *)arg1;
- (void)categorySelectionViewControllerDidAndCategory;
- (void)categorySelectionViewController:(CategorySelectionViewController *)arg1 didFinishModifyWithCategory:(CategoryVo *)arg2;
- (void)categoryDidfinishWithCategory:(CategoryVo *)arg1;
- (void)categorySelectionViewControllerDidEndEdit:(CategorySelectionViewController *)arg1;
- (void)categorySelectionViewControllerDidStartEdit:(CategorySelectionViewController *)arg1;
@end

