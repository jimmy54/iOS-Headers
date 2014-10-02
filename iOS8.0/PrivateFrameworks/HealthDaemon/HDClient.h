//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection, _HKEntitlements;

@interface HDClient : NSObject
{
    NSXPCConnection *_connection;
    _HKEntitlements *_entitlements;
    NSString *_name;
    NSString *_bundleIdentifier;
}

@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) _HKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (id)valueForEntitlement:(id)arg1;
- (BOOL)hasEntitlement:(id)arg1 withError:(id *)arg2;
@property(readonly) int processIdentifier;
- (id)_initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithEntitlements:(id)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end
