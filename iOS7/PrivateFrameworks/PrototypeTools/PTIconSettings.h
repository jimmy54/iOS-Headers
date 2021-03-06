/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@interface PTIconSettings : _UISettings
{
    _Bool _on;
    double _alphaStrength;
    double _radiusStrength;
}

+ (id)archivedSettingsGroup;
@property(nonatomic) double radiusStrength; // @synthesize radiusStrength=_radiusStrength;
@property(nonatomic) double alphaStrength; // @synthesize alphaStrength=_alphaStrength;
@property(nonatomic) _Bool on; // @synthesize on=_on;
- (id)settingsHUDConfiguration;
- (void)settingsResetByHUD;
- (void)setDefaultValues;

@end

