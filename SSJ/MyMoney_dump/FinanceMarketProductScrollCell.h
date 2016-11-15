//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class FinanceMarketProductListNoticeModel, HMSegmentedControl, NSArray, NSString, UICollectionView;

@interface FinanceMarketProductScrollCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_listData;
    NSArray *_segmentLinks;
    NSArray *_bottomData;
    FinanceMarketProductListNoticeModel *_notice;
    HMSegmentedControl *_segmentedControl;
    id <FinanceTableViewScrollDelegate><FinanceProductTableViewActionDelegate> _delegate;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <FinanceTableViewScrollDelegate><FinanceProductTableViewActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) FinanceMarketProductListNoticeModel *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSArray *bottomData; // @synthesize bottomData=_bottomData;
@property(retain, nonatomic) NSArray *segmentLinks; // @synthesize segmentLinks=_segmentLinks;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshWebViewAtIndex:(long long)arg1;
- (void)logUserBehaviorForSegmentWithIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
