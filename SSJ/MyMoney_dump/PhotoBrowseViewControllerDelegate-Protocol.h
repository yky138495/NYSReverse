//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIImage, UIImagePickerController;

@protocol PhotoBrowseViewControllerDelegate <NSObject>
- (void)willPopPhotoBrowseViewController;
- (void)deleteImage;
- (void)choiceImage:(UIImage *)arg1 fromPicker:(UIImagePickerController *)arg2 info:(NSDictionary *)arg3;
@end
