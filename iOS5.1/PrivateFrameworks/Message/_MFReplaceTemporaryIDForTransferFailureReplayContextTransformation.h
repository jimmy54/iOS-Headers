/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFOfflineCacheReplayContextTransformation-Protocol.h"

@class NSString;

@interface _MFReplaceTemporaryIDForTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation>
{
    NSString *_temporaryID;
    NSString *_newTemporaryID;
}

- (id)initWithTemporaryID:(id)arg1 newTemporaryID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)applyToReplayContext:(id)arg1;

@end
