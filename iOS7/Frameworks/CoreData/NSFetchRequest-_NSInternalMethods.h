/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSFetchRequest.h>

@interface NSFetchRequest (_NSInternalMethods)
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (_Bool)hasChanges;
- (id)stores;
- (unsigned long long)requestType;
- (void)_throwIfNotEditable;
- (_Bool)_isEditable;
- (void)_incrementInUseCounter;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)_setDisablePersistentStoreResultCaching:(_Bool)arg1;
- (_Bool)_disablePersistentStoreResultCaching;
@end

