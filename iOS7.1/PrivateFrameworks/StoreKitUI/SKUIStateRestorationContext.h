//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIClientContext;

@interface SKUIStateRestorationContext : NSObject
{
    SKUIClientContext *_clientContext;
}

+ (id)sharedContext;
+ (void)setSharedContext:(id)arg1;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;

@end
