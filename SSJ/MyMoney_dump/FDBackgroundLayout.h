//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSArray, NSMutableArray;

@interface FDBackgroundLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_backgroundAttributeItems;
    _Bool _alternateBackground;
    NSArray *_decorationViewIdentifiers;
    CDUnknownBlockType _configureDecoration;
}

@property(copy, nonatomic) CDUnknownBlockType configureDecoration; // @synthesize configureDecoration=_configureDecoration;
@property(retain, nonatomic) NSArray *decorationViewIdentifiers; // @synthesize decorationViewIdentifiers=_decorationViewIdentifiers;
@property(nonatomic) _Bool alternateBackground; // @synthesize alternateBackground=_alternateBackground;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

