//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Additions)
+ (id)resizableImageWithGradient:(id)arg1 size:(struct CGSize)arg2 direction:(int)arg3;
+ (id)imageWithRadialGradientStartColor:(id)arg1 endColor:(id)arg2 radius:(double)arg3;
+ (id)imageWithGradient:(id)arg1 size:(struct CGSize)arg2 direction:(int)arg3;
+ (id)_imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornerInset:(struct __UICornerInset)arg3 saveInCache:(_Bool)arg4;
+ (id)_keyForImageWithDescriptors:(id)arg1;
+ (void)_cacheImage:(id)arg1 withDescriptors:(id)arg2;
+ (id)_cachedImageWithDescriptors:(id)arg1;
+ (id)_cache;
+ (id)imageNamed:(id)arg1 tintColor:(id)arg2 style:(int)arg3;
+ (id)clearColorImage;
+ (id)brownColorImage;
+ (id)purpleColorImage;
+ (id)orangeColorImage;
+ (id)magentaColorImage;
+ (id)yellowColorImage;
+ (id)cyanColorImage;
+ (id)blueColorImage;
+ (id)greenColorImage;
+ (id)redColorImage;
+ (id)grayColorImage;
+ (id)whiteColorImage;
+ (id)lightGrayColorImage;
+ (id)darkGrayColorImage;
+ (id)blackColorImage;
+ (id)resizableImageWithColor:(id)arg1 cornerInset:(struct __UICornerInset)arg2;
+ (id)resizableImageWithColor:(id)arg1 cornerRadius:(double)arg2;
+ (id)resizableImageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 borderColor:(id)arg2 size:(struct CGSize)arg3 cornerRadius:(double)arg4 borderWidth:(double)arg5;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornerInset:(struct __UICornerInset)arg3;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithColor:(id)arg1;
- (id)verticalFlippedImage;
- (id)imageFillWithColor:(id)arg1;
- (id)imageWithAlpha:(double)arg1;
- (id)imageAddingImage:(id)arg1 offset:(struct CGPoint)arg2;
- (_Bool)isValidCornerInset:(struct __UICornerInset)arg1;
- (id)imageWithCornerInset:(struct __UICornerInset)arg1;
- (id)imageWithCornerRadius:(double)arg1;
- (id)imageWithRoundedBounds;
- (id)tintedImageWithColor:(id)arg1 style:(int)arg2;
@end
