/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject
{
    id _delegate;
    DeviceManager *_deviceManager;
    NSString *_name;
    struct CGImage *_icon;
    NSString *_productKind;
    NSString *_transportType;
    NSString *_UUIDString;
    int _usbLocationID;
    int _usbProductID;
    int _usbVendorID;
    _Bool _hasOpenSession;
    _Bool _autoOpenSession;
    _Bool _openSessionPending;
    _Bool _closeSessionPending;
}

@property _Bool closeSessionPending; // @synthesize closeSessionPending=_closeSessionPending;
@property _Bool openSessionPending; // @synthesize openSessionPending=_openSessionPending;
@property _Bool autoOpenSession; // @synthesize autoOpenSession=_autoOpenSession;
@property _Bool hasOpenSession; // @synthesize hasOpenSession=_hasOpenSession;
@property int usbVendorID; // @synthesize usbVendorID=_usbVendorID;
@property int usbProductID; // @synthesize usbProductID=_usbProductID;
@property int usbLocationID; // @synthesize usbLocationID=_usbLocationID;
@property(retain) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(retain) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain) NSString *productKind; // @synthesize productKind=_productKind;
@property(retain) NSString *name; // @synthesize name=_name;
@property DeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property id delegate; // @synthesize delegate=_delegate;
- (void)finalize;
- (void)dealloc;
@property struct CGImage *icon; // @dynamic icon;

@end

