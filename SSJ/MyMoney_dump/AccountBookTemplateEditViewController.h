//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AccountBookTemplateEditHeaderViewDelegate.h"
#import "NavigationBarDropIndicatorDelegate.h"
#import "PhotoSourceSelectionViewControllerDelegate.h"
#import "SelectAccountbookTemplateViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AccountBookCustomCoversManager, FDBookTemplate, FDBookTemplatePreviewView, NSArray, NSString, NavigationBarDropIndicator, SelectAccountbookTemplateViewController, UICollectionView;

@interface AccountBookTemplateEditViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SelectAccountbookTemplateViewControllerDelegate, NavigationBarDropIndicatorDelegate, PhotoSourceSelectionViewControllerDelegate, AccountBookTemplateEditHeaderViewDelegate>
{
    _Bool _shouldSaveTheChanges;
    _Bool _editingBackgroundSelectSection;
    FDBookTemplate *_bookTemplate;
    id <AccountBookTemplateEditViewControllerDelegate> _delegate;
    FDBookTemplatePreviewView *_previewView;
    UICollectionView *_collectionView;
    NSArray *_sectionTypeInfo;
    NavigationBarDropIndicator *_dropButton;
    SelectAccountbookTemplateViewController *_selectTemplateViewController;
    NSArray *_templateImageIds;
    AccountBookCustomCoversManager *_customCoversManager;
}

+ (struct CGSize)sizeForSelectedBackgroudImage;
@property(nonatomic) _Bool editingBackgroundSelectSection; // @synthesize editingBackgroundSelectSection=_editingBackgroundSelectSection;
@property(retain, nonatomic) AccountBookCustomCoversManager *customCoversManager; // @synthesize customCoversManager=_customCoversManager;
@property(retain, nonatomic) NSArray *templateImageIds; // @synthesize templateImageIds=_templateImageIds;
@property(retain, nonatomic) SelectAccountbookTemplateViewController *selectTemplateViewController; // @synthesize selectTemplateViewController=_selectTemplateViewController;
@property(retain, nonatomic) NavigationBarDropIndicator *dropButton; // @synthesize dropButton=_dropButton;
@property(retain, nonatomic) NSArray *sectionTypeInfo; // @synthesize sectionTypeInfo=_sectionTypeInfo;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak FDBookTemplatePreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) id <AccountBookTemplateEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldSaveTheChanges; // @synthesize shouldSaveTheChanges=_shouldSaveTheChanges;
@property(retain, nonatomic) FDBookTemplate *bookTemplate; // @synthesize bookTemplate=_bookTemplate;
- (void).cxx_destruct;
- (void)accountBookTemplateEditHeaderViewDidTapRightButton:(id)arg1;
- (void)photoSourceSelectionViewController:(id)arg1 didSelectImage:(id)arg2;
- (void)navigationBarDropIndicatorDidClick:(id)arg1 arrowIsUp:(_Bool)arg2;
- (void)save;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerKVO;
- (void)removeKVO;
- (void)addStaticEventForTemplateModify:(id)arg1;
- (void)dealloc;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)refreshTemplatePreview;
- (id)cellTitleWithIndexPath:(id)arg1;
- (void)configureBackgroundCell:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)selectAccountbookTemplateViewControllerDidSelectTemplate:(id)arg1;
- (void)saveIfNeeded;
- (void)configureHeaderEditingButton:(id)arg1 withEditing:(_Bool)arg2;
- (void)handleBackgroundSelectSectionSelectedAtIndex:(long long)arg1;
- (void)removeBackgroundImageAtIndex:(long long)arg1;
- (void)selectBackgroundImageAtIndex:(long long)arg1;
- (void)updateCurrentAccountBookVoAndCoverNameIfNeeded;
- (void)handleTemplateCoverChanged;
- (long long)numberOfRowInBackgroundSelectSection;
- (void)segueToPhotoSourceSelectionViewController;
- (unsigned long long)sectionTypeForSection:(long long)arg1;
- (void)updateViewConstraints;
- (void)updatePreviewView;
- (void)initCollectionView;
- (void)initDropButton;
- (void)showSelectPanel;
- (void)hideSelectPanelWithAnimated:(_Bool)arg1;
- (void)initSelectPanelViewIfNeed;
- (void)handleBackButton;
- (void)initNavigationItems;
- (void)initSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initTemplatesForBackground;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

