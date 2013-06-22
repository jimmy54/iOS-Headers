/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface NSTimeZone : NSObject <NSCopying, NSCoding>
{
}

+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)timeZoneDataVersion;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (id)abbreviationDictionary;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)setDefaultTimeZone:(id)arg1;
+ (id)defaultTimeZone;
+ (void)resetSystemTimeZone;
+ (id)systemTimeZone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)description;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransition;
- (double)daylightSavingTimeOffset;
- (BOOL)isDaylightSavingTime;
- (id)abbreviation;
- (int)secondsFromGMT;
- (unsigned long)_cfTypeID;
- (BOOL)isNSTimeZone__;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (id)name;

@end
