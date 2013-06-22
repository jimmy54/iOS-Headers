/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSDate, NSString;

@interface MCCertificatePayload : MCPayload
{
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
}

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void)dealloc;
@property(readonly) BOOL isSigned;
- (id)stubDictionary;
- (struct __SecCertificate *)copyCertificate;
- (struct __SecIdentity *)copyIdentityFromKeychain;
@property(readonly) BOOL isRoot;
@property(readonly) BOOL isIdentity;
- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)description;
@property(readonly) NSDate *expiry;
@property(copy) NSString *installedOnDeviceID; // @synthesize installedOnDeviceID=_installedOnDeviceID;
@property(retain) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;

@end
