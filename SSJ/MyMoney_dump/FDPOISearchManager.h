//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "FDPOISearchProviderDelegate.h"

@class CLLocationManager, FDPOISearchProvider, NSString;

@interface FDPOISearchManager : NSObject <CLLocationManagerDelegate, FDPOISearchProviderDelegate>
{
    id <FDPOISearchManagerDelegate> _delegate;
    CLLocationManager *_locationManager;
    FDPOISearchProvider *_searchProvider;
    CDStruct_2c43369c _locationCenter;
}

+ (_Bool)isLocationServicesEnabled;
+ (id)sharedInstance;
@property(retain, nonatomic) FDPOISearchProvider *searchProvider; // @synthesize searchProvider=_searchProvider;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) CDStruct_2c43369c locationCenter; // @synthesize locationCenter=_locationCenter;
@property(nonatomic) __weak id <FDPOISearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)POISearchProvider:(id)arg1 didSearchFailWithError:(id)arg2;
- (void)POISearchProvider:(id)arg1 didFinishSearchWithPOIs:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)startUpdateNearbyPOIsWithCoordinate:(CDStruct_2c43369c)arg1;
- (void)startUpdateLocation;
- (_Bool)isValidLocationCenter;
- (void)notifySearchPOIsSuccess:(id)arg1;
- (void)notifySearchPOIsFailWithError:(id)arg1;
- (void)notifyUpdateLocationFailWithError:(id)arg1;
- (void)searchNearbyPOIInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

