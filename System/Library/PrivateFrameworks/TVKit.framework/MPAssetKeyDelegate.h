/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAssetKeyDelegate <NSObject>
@optional
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2;
-(CGSize*)resolutionForAssetKey:(id)arg1;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1;
-(id)relativeTiledPathsForAssetWithAttributes:(id)arg1;
-(id)mapTileCenteredAt:(id)arg1 size:(CGSize)arg2 inset:(CGSize)arg3;
-(id)mapTileForPath:(id)arg1;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)cgImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)retainedThumbnailCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)imageDataForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(IOSurfaceRef)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)relativePathForAssetWithAttributes:(id)arg1;
-(id)attributesforAssetPath:(id)arg1;
-(IOSurfaceRef)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;

@required
-(id)absolutePathForAssetKey:(id)arg1;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2;

@end

