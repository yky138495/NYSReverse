//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ThirdPartyBindManager : NSObject
{
    NSMutableArray *_bindItems;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableArray *bindItems; // @synthesize bindItems=_bindItems;
- (void).cxx_destruct;
- (id)findBindItemForPlatform:(unsigned long long)arg1;
- (_Bool)canUnbindThirdPartyAccount:(unsigned long long)arg1;
- (void)saveBindViewModelToUserDefaults:(id)arg1;
- (id)viewModelForPlatform:(unsigned long long)arg1;
- (id)init;

@end
