//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TemplateBgImgCellLoader, TemplteBgImgInfoModel, UIActivityIndicatorView, UIImageView, UIView;

@interface TemplateBgImgCollectionCell : UICollectionViewCell
{
    TemplteBgImgInfoModel *_rawImgInfo;
    UIImageView *_contentImageView;
    UIImageView *_downloadImgView;
    UIView *_hightLightMask;
    UIActivityIndicatorView *_downloadingIndicator;
    TemplateBgImgCellLoader *_cellLoader;
}

+ (double)heightWithCordinateWidth:(double)arg1;
@property(retain, nonatomic) TemplateBgImgCellLoader *cellLoader; // @synthesize cellLoader=_cellLoader;
@property(nonatomic) __weak UIActivityIndicatorView *downloadingIndicator; // @synthesize downloadingIndicator=_downloadingIndicator;
@property(nonatomic) __weak UIView *hightLightMask; // @synthesize hightLightMask=_hightLightMask;
@property(nonatomic) __weak UIImageView *downloadImgView; // @synthesize downloadImgView=_downloadImgView;
@property(nonatomic) __weak UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) TemplteBgImgInfoModel *rawImgInfo; // @synthesize rawImgInfo=_rawImgInfo;
- (void).cxx_destruct;
- (void)setCellImgState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)loadThumbnailImageWith:(id)arg1;
- (void)loadOriginalImageWith:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(nonatomic) __weak UIView *contentView; // @dynamic contentView;

@end

