//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FDPOISearchManager, NSArray, NSError;

@protocol FDPOISearchManagerDelegate <NSObject>
- (void)FDPOISearchManager:(FDPOISearchManager *)arg1 didRequestPoiFailWithError:(NSError *)arg2;
- (void)FDPOISearchManager:(FDPOISearchManager *)arg1 didLocatedFailWithError:(NSError *)arg2;
- (void)FDPOISearchManager:(FDPOISearchManager *)arg1 didFinishAcquireNearbyPOIs:(NSArray *)arg2;
@end

