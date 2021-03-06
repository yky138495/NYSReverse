//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseXmlPresentation.h"

@class NSString;

@interface IncrementallyConfirmXmlPresentation : BaseXmlPresentation
{
    NSString *_sessionKey;
    NSString *_message;
    int _type;
    _Bool _success;
}

+ (id)responsePresentationWithResponseData:(id)arg1;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)xmlString;
- (id)initAbortPresentationWithSessionKey:(id)arg1 andMessage:(id)arg2;
- (id)initCommitPresentationWithSessionKey:(id)arg1;
- (id)protocolURLSuffix;

@end

