//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class EGORefreshTableHeaderView, NSMutableDictionary, NSString, NoNetworkCoverView, TemplateBgImgCollectionHeaderView, TemplateBgImgDataManager, UIActivityIndicatorView, UICollectionView;

@interface TemplateBgImgDownloadViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, EGORefreshTableHeaderDelegate>
{
    _Bool _reloading;
    _Bool _headerContentDidTapped;
    _Bool _hasFetchedData;
    TemplateBgImgDataManager *_imgDataManager;
    id <PhotoClipViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_fetchingDataIndicator;
    UICollectionView *_collectionView;
    TemplateBgImgCollectionHeaderView *_headerView;
    EGORefreshTableHeaderView *_refreshHeaderView;
    NoNetworkCoverView *_noNetworkCoverView;
    NSMutableDictionary *_selectedCellIndexPaths;
}

@property(retain, nonatomic) NSMutableDictionary *selectedCellIndexPaths; // @synthesize selectedCellIndexPaths=_selectedCellIndexPaths;
@property(nonatomic) _Bool hasFetchedData; // @synthesize hasFetchedData=_hasFetchedData;
@property(nonatomic) _Bool headerContentDidTapped; // @synthesize headerContentDidTapped=_headerContentDidTapped;
@property(retain, nonatomic) NoNetworkCoverView *noNetworkCoverView; // @synthesize noNetworkCoverView=_noNetworkCoverView;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) __weak TemplateBgImgCollectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIActivityIndicatorView *fetchingDataIndicator; // @synthesize fetchingDataIndicator=_fetchingDataIndicator;
@property(nonatomic) __weak id <PhotoClipViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TemplateBgImgDataManager *imgDataManager; // @synthesize imgDataManager=_imgDataManager;
- (void).cxx_destruct;
- (void)updateHeaderView;
- (struct CGSize)screenScaleTargetSizeWithImage:(id)arg1;
- (id)scaleImage:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)reloadButtonAction:(id)arg1;
- (void)initNoConnectCoverView;
- (void)initCollectionView;
- (void)initPullDownRefreshHeaderView;
- (void)initCollectionViewHeaderView;
- (void)setFetchingDataState:(long long)arg1;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

