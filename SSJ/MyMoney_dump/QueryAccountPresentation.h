//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestCmdPresentation.h"

@class NSString;

@interface QueryAccountPresentation : RequestCmdPresentation
{
    NSString *_deviceKey;
}

+ (id)queryAccountPresentationWithResponseXmlString:(id)arg1;
@property(retain, nonatomic) NSString *deviceKey; // @synthesize deviceKey=_deviceKey;
- (void).cxx_destruct;
- (id)xmlString;
- (id)initWithUsername:(id)arg1 password:(id)arg2 deviceKey:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2 isDetail:(_Bool)arg3;

@end

