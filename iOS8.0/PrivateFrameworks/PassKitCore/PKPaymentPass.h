//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPass.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet, NSString, NSURL, PKPaymentApplication;

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding>
{
    BOOL _supportsDPANNotifications;
    BOOL _supportsFPANNotifications;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    NSSet *_associatedApplicationIdentifiers;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSSet *_paymentApplications;
    NSString *_appURLScheme;
    PKPaymentApplication *_devicePaymentApplication;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKPaymentApplication *devicePaymentApplication; // @synthesize devicePaymentApplication=_devicePaymentApplication;
@property(nonatomic) BOOL supportsFPANNotifications; // @synthesize supportsFPANNotifications=_supportsFPANNotifications;
@property(nonatomic) BOOL supportsDPANNotifications; // @synthesize supportsDPANNotifications=_supportsDPANNotifications;
@property(copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property(copy, nonatomic) NSSet *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property(copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property(copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property(copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;
@property(copy, nonatomic) NSSet *associatedApplicationIdentifiers; // @synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers;
@property(copy, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
- (void)identifyDevicePaymentAppWithSecureElementID:(id)arg1 sanitize:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int activationState;
@property(readonly) NSString *deviceAccountNumberSuffix;
@property(readonly) NSString *deviceAccountIdentifier;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplicationForSecureElementID:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

