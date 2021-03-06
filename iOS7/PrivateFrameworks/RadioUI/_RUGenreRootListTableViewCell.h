/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RadioUI/_RUGenreListTableViewCell.h>

@class MPImageCache, MPImageCacheRequest, UIImageView;

@interface _RUGenreRootListTableViewCell : _RUGenreListTableViewCell
{
    UIImageView *_artworkImageView;
    MPImageCache *_imageCache;
    MPImageCacheRequest *_imageCacheRequest;
}

+ (struct CGSize)artworkSize;
@property(readonly, nonatomic) MPImageCacheRequest *imageCacheRequest; // @synthesize imageCacheRequest=_imageCacheRequest;
@property(readonly, nonatomic) MPImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)setImageCache:(id)arg1 imageCacheRequest:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

