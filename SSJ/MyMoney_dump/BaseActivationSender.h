//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KDURLConnection.h"

@class NSDictionary, NSString;

@interface BaseActivationSender : KDURLConnection
{
    NSString *_entryName;
    NSDictionary *_extraBodyDictionary;
}

+ (id)UDIDParamString;
+ (id)signatureText:(id)arg1;
+ (id)signatureWithString:(id)arg1 timestamp:(id)arg2;
+ (void)setSentWithEntryName:(id)arg1;
+ (_Bool)everBeenSentWithEntryName:(id)arg1;
+ (id)signatureContent;
+ (id)appIdParamName;
+ (id)requestAPIName;
+ (id)paramsDictionary;
+ (id)uniqueUserDefaultKey;
+ (id)mac;
+ (id)ifa;
+ (_Bool)trySendWithEntryName:(id)arg1 extraParamDictionary:(id)arg2;
+ (_Bool)trySendWithEntryName:(id)arg1;
@property(retain, nonatomic) NSDictionary *extraBodyDictionary; // @synthesize extraBodyDictionary=_extraBodyDictionary;
@property(retain, nonatomic) NSString *entryName; // @synthesize entryName=_entryName;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)commonParamsDictionary;
- (id)init;

@end
