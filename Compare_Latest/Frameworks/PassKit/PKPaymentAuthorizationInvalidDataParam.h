//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : NSObject
{
    BOOL _animated;
    int _dataType;
    NSError *_error;
}

+ (id)param;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;

@end
