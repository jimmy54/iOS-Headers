//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKDirections.h>

@class GEODirectionsRouteRequest;

@interface _MKDirections : MKDirections
{
}

@property(readonly, nonatomic, getter=isBusy) BOOL busy;
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GEODirectionsRouteRequest *geoRequest;

@end

