//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CAAnimation, CALayer, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding>
{
    CALayer *_target;
    CAAnimation *_animation;
    NSString *_key;
    BOOL _enabled;
}

+ (void)CAMLParserStartElement:(id)arg1;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) CALayer *target; // @synthesize target=_target;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
@property(nonatomic) double duration;
@property(nonatomic) double beginTime;
- (void)dealloc;
- (id)init;

@end
